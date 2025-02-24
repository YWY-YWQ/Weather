#include "widget.h"
#include "ui_widget.h"
#include "iofile.h"
#include <QMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QMessageBox>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMap>
#include <QLabel>
#include <QPainter>
#include <QFile>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    Init();
    //初始化天气数据，从本地获取
    IOFile iofile;
    parseWeatherJsonDataAWeak(iofile.JsonFiletoByteArray());
    QDate date=QDate::currentDate();
    //由QNetworkAccessManager发起get请求
    manager=new QNetworkAccessManager(this);
    connect(manager,&QNetworkAccessManager::finished,[](){
        qDebug()<<"manager finish!=====";
    });
    //指定请求的url地址
    //strUrl="http://gfeljm.tianqiapi.com/api?unescape=1&version=v61&appid=35269352&appsecret=Inq9mkx1";
    strUrl="http://gfeljm.tianqiapi.com/api?unescape=1&version=v91&appid=35269352&appsecret=Inq9mkx1";
    QUrl weatherApi("http://gfeljm.tianqiapi.com/api?unescape=1&version=v61&appid=35269352&appsecret=Inq9mkx1");
    QUrl api("192.168.1.1");
    QNetworkRequest res(strUrl);
    if(!iofile.isOK()){
        reply=manager->get(res);
    }
    //QNetworkRequest网络请求后进行数据读取
    connect(manager,&QNetworkAccessManager::finished,this,&Widget::readHttpRply);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::RightButton){
        qDebug()<<"right Mouse clicked!";
        menuQuit->exec(QCursor::pos());
    }
    //鼠标当前位置event->globalPos()
    //窗口当前位置this->pos()
    //窗口新位置
    if(event->button()==Qt::LeftButton){
        qDebug()<<event->globalPos();
        mOffset=event->globalPos()-this->pos();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-mOffset);
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->widget0404&&event->type()==QEvent::Paint){
        drawTempLine();
        return true;//表示事件被处理
    }
    // if(watched==ui->widget0405&&event->type()==QEvent::Paint){
    //     drawTempLineLow();
    //     return true;//表示事件被处理
    // }
    return QWidget::eventFilter(watched,event);
}

void Widget::parseWeatherJsonData(QByteArray rawData){
    QJsonDocument jsonDoc=QJsonDocument::fromJson(rawData);
    if(!jsonDoc.isNull()&&jsonDoc.isObject()){
        QJsonObject objRoot=jsonDoc.object();
        //解析日期
        QString date=objRoot["date"].toString();
        QString week=objRoot["week"].toString();
        ui->labelCurrentDate->setText(date+"  "+week);
        //解析城市名称
        QString cityName=objRoot["city"].toString();
        ui->labelCity->setText(cityName+"市");
        //解析当前温度
        QString currentTemp=objRoot["tem"].toString();
        ui->labelTemp->setText(currentTemp+"°C");
        ui->labelTempRange->setText(objRoot["tem2"].toString()+"~"+
                                    objRoot["tem1"].toString());
        //解析天气类型
        ui->labelWeatherType->setText(objRoot["wea"].toString());
        ui->labelWeatherIcon->setPixmap(weaImgToPathMap[objRoot["wea_img"].toString()]);
        //感冒指数
        ui->labelGanMao->setText(objRoot["air_tips"].toString());
        //风向
        ui->labelFXType->setText(objRoot["win"].toString());
        //风力
        ui->labelFXTypeData->setText(objRoot["win_speed"].toString());
        //pm2.5
        ui->labelPM25Data->setText(objRoot["air_pm25"].toString());
        //湿度
        ui->labelShiDuData->setText(objRoot["humidity"].toString());
        //空气质量
        ui->labelAirData->setText(objRoot["air_level"].toString());
    }
}

void Widget::parseWeatherJsonDataAWeak(QByteArray rawData)
{
    QJsonDocument jsonDoc=QJsonDocument::fromJson(rawData);
    if(!jsonDoc.isNull()&&jsonDoc.isObject()){
        QJsonObject jsonRoot=jsonDoc.object();
        //
        days[0].mCity=jsonRoot["city"].toString();
        days[0].mPm25=jsonRoot["aqi"].toObject()["pm25"].toString();
        if(jsonRoot.contains("data")&&jsonRoot["data"].isArray()){
            QJsonArray dataArray =jsonRoot["data"].toArray();
            for(int i=0;i<dataArray.size();++i){
                QJsonObject obj=dataArray[i].toObject();
                days[i].mDate=obj["date"].toString();
                days[i].mWeek=obj["week"].toString();
                days[i].mWeathType=obj["wea"].toString();
                days[i].mWeaImg=obj["wea_img"].toString();
                days[i].mTemp=obj["tem"].toString();
                days[i].mTempLow=obj["tem2"].toString();
                days[i].mTempHigh=obj["tem1"].toString();
                days[i].mFx=obj["win"].toArray()[0].toString();
                days[i].mFl=obj["win_speed"].toString();
                days[i].mAirq=obj["air_level"].toString();
                days[i].mTips=obj["air_tips"].toString();
                // days[i].mPm25=obj["pm25"].toString();
                days[i].mHu=obj["humidity"].toString();
            }
        }
        updataUI();
    }
}

void Widget::Init()
{
    // 设置窗口属性
    setFixedSize(538,995);
    setWindowFlags(Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);
    // setAttribute(Qt::WA_TranslucentBackground);
    //设置透明度
    this->setWindowOpacity(0.7);
    //新建一个菜单组件
    menuQuit=new QMenu(this);
    //设置菜单项文字颜色
    menuQuit->setStyleSheet("QMenu::item {color:white}");
    QAction *closeAct=new QAction(QIcon(":/images/images/weather-0/退出.png"),tr("退出"),this);
    menuQuit->addAction(closeAct);
    connect(menuQuit,&QMenu::triggered,this,[=]{
        this->close();
    });

    mWeekList<<ui->labelWeek1<<ui->labelWeek2
              <<ui->labelWeek3<<ui->labelWeek4
              <<ui->labelWeek5<<ui->labelWeek6;
    mDateList<<ui->labelDate1<<ui->labelDate2
              <<ui->labelDate3<<ui->labelDate4
              <<ui->labelDate5<<ui->labelDate6;
    mIconList<<ui->labelWeathIcon1<<ui->labelWeathIcon2
              <<ui->labelWeathIcon3<<ui->labelWeathIcon4
              <<ui->labelWeathIcon5<<ui->labelWeathIcon6;
    mWeaTypeList<<ui->labelWeatherType1<<ui->labelWeatherType2
                 <<ui->labelWeatherType3<<ui->labelWeatherType4
                 <<ui->labelWeatherType5<<ui->labelWeatherType6;
    mAirqList<<ui->labelaiq1<<ui->labelaiq2
              <<ui->labelaiq3<<ui->labelaiq4
              <<ui->labelaiq5<<ui->labelaiq6;
    mFxList<<ui->labelFx1<<ui->labelFx2
            <<ui->labelFx3<<ui->labelFx4
            <<ui->labelFx5<<ui->labelFx6;
    mFlList<<ui->labelFl1<<ui->labelFl2
            <<ui->labelFl3<<ui->labelFl4
            <<ui->labelFl5<<ui->labelFl6;

    //xue、lei、shachen、wu、bingbao、yun、yu、yin、qing
    weaImgToPathMap.insert("xue",":/images/images/易客云官方图标/xue.png");
    weaImgToPathMap.insert("lei",":/images/images/易客云官方图标/lei.png");
    weaImgToPathMap.insert("shachen",":/images/images/易客云官方图标/shachen.png");
    weaImgToPathMap.insert("wu",":/images/images/易客云官方图标/wu.png");
    weaImgToPathMap.insert("bingbao",":/images/images/易客云官方图标/bingbao.png");
    weaImgToPathMap.insert("yun",":/images/images/易客云官方图标/yun.png");
    weaImgToPathMap.insert("yu",":/images/images/易客云官方图标/yu.png");
    weaImgToPathMap.insert("yin",":/images/images/易客云官方图标/yin.png");
    weaImgToPathMap.insert("qing",":/images/images/易客云官方图标/qing.png");

    ui->widget0404->installEventFilter(this);
    // ui->widget0405->installEventFilter(this);
}

void Widget::updataUI()
{
    //解析日期
    ui->labelCurrentDate->setText(days[0].mDate+"  "+days[0].mWeek);
    //解析城市名称
    ui->labelCity->setText(days[0].mCity+"市");
    //QString cityName=objRoot["city"].toString();
    //ui->labelCity->setText(cityName+"市");
    //解析当前温度
    ui->labelTemp->setText(days[0].mTemp+"°C");
    ui->labelTempRange->setText(days[0].mTempLow+"℃~"+
                                days[0].mTempHigh+"℃");
    //解析天气类型
    ui->labelWeatherType->setText(days[0].mWeathType);
    ui->labelWeatherIcon->setPixmap(weaImgToPathMap[days[0].mWeaImg]);
    //感冒指数
    ui->labelGanMao->setText(days[0].mTips);
    //风向
    ui->labelFXType->setText(days[0].mFx);
    //风力
    ui->labelFXTypeData->setText(days[0].mFl);
    //pm2.5
    ui->labelPM25Data->setText(days[0].mPm25);
    //湿度
    ui->labelShiDuData->setText(days[0].mHu);
    //空气质量
    ui->labelAirData->setText(days[0].mAirq);

    for(int i=0;i<6;++i){
        int j=i+1;
        //2025-2-21
        QStringList dayList=days[j].mDate.split("-");
        mWeekList[i]->setText(days[j].mWeek);
        mDateList[i]->setText(dayList.at(1)+"-"+dayList.at(2));
        //缩放图片大小和label大小能匹配
        QPixmap pixmap=weaImgToPathMap[days[j].mWeaImg];
        pixmap=pixmap.scaled(mIconList[i]->size(),Qt::KeepAspectRatio,
                            Qt::SmoothTransformation);
        mIconList[i]->setMaximumWidth(ui->widget02->width()/6.5);
        mIconList[i]->setPixmap(pixmap);
        mWeaTypeList[i]->setText(days[j].mWeathType);
        QString airQ=days[i].mAirq;
        mAirqList[i]->setText(airQ);
        if(airQ=="优"){
            mAirqList[i]->setStyleSheet("color: rgb(255, 255, 255);background-color: rgb(150,213,32);border-radius: 7px;");
        }
        if(airQ=="良"){
            mAirqList[i]->setStyleSheet("color: rgb(255, 255, 255);background-color: rgb(255, 187, 69);border-radius: 7px;");
        }
        if(airQ=="轻度"){
            mAirqList[i]->setStyleSheet("color: rgb(255, 255, 255);background-color: rgb(255,199,199);border-radius: 7px;");
        }
        if(airQ=="中度"){
            mAirqList[i]->setStyleSheet("color: rgb(255, 255, 255);background-color: rgb(255,17,17);border-radius: 7px;");
        }
        if(airQ=="重度"){
            mAirqList[i]->setStyleSheet("color: rgb(255, 255, 255);background-color: rgb(153,0,0);border-radius: 7px;");
        }
        mFxList[i]->setText(days[j].mFx);

        int index=days[i].mFl.indexOf("转");
        if(index!=-1){
            mFlList[i]->setText(days[i].mFl.left(index));
        }else{
            mFlList[i]->setText(days[j].mFl);
        }

    }
    update();
}

void Widget::drawTempLine()
{
    QPainter painter(ui->widget0404);
    //最高温度与上边缘的差xx，最低温度与下边缘的差xx
    int xx=30,height=ui->widget0404->height();
    //计算最高温，最低温
    int highTemp=-100,lowTemp=100,dt=0;
    for(int i=0;i<6;++i){
        if(i==0){//初始化
            highTemp=days[i].mTempHigh.toInt();
            lowTemp=days[i].mTempLow.toInt();
        }else{
            highTemp=std::max(highTemp,days[i].mTempHigh.toInt());
            lowTemp=std::min(lowTemp,days[i].mTempLow.toInt());
        }
    }
    //计算每摄氏度的像素差step
    dt=highTemp-lowTemp;
    qDebug()<<"ui->widget0404->height()="<<ui->widget0404->height();
    qDebug()<<"highTemp="<<highTemp;
    qDebug()<<"lowTemp="<<lowTemp;
    qDebug()<<"dt=="<<dt;
    if(dt==0) dt=1;
    int step=(height-xx*2)/dt;
    qDebug()<<"step=="<<step;
    //画出高温线
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(Qt::yellow);
    painter.setPen(Qt::yellow);
    QPoint highPoint[6];
    for(int i=0;i<6;++i){
        highPoint[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
        highPoint[i].setY(xx+(highTemp-days[i].mTempHigh.toInt())*step);
        qDebug()<<"point="<<highPoint[i];
        //画出六个点
        painter.drawEllipse(highPoint[i],3,3);
        //画出当天温度
        painter.drawText(highPoint[i].x()-5,highPoint[i].y()-15,days[i].mTempHigh+"°");
        //画线
        if(i!=0){
            painter.drawLine(highPoint[i-1],highPoint[i]);
        }
    }
    //画出低温线
    painter.setBrush(Qt::blue);
    painter.setPen(QColor(70,192,203));
    QPoint lowPoint[6];
    for(int i=0;i<6;++i){
        lowPoint[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
        lowPoint[i].setY(xx+(highTemp-days[i].mTempLow.toInt())*step);
        //画出六个点
        painter.drawEllipse(QPoint(lowPoint[i]),3,3);
        //画出当天温度
        painter.drawText(lowPoint[i].x()-5,lowPoint[i].y()+15,days[i].mTempLow+"°");
        //画线
        if(i){
            painter.drawLine(lowPoint[i-1],lowPoint[i]);
        }
    }
}

void Widget::drawTempLineHigh()
{
    QPainter painter(ui->widget0404);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(Qt::yellow);
    painter.setPen(Qt::yellow);

    int ave;
    int sum=0;
    int offSet=0;
    int middle=ui->widget0404->height()/2;
    for(int i=0;i<6;++i){
        sum+=days[i].mTempHigh.toInt();
    }
    ave=sum/6;

    //定义6个点
    QPoint points[6];
    for(int i=0;i<6;++i){
        points[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
        offSet=(days[i].mTempHigh.toInt()-ave)*3;
        points[i].setY(middle-offSet);
        //画出六个点
        painter.drawEllipse(QPoint(points[i]),3,3);
        //画出当天温度
        painter.drawText(points[i].x()-15,points[i].y()-15,days[i].mTempHigh+"°");
    }
    for(int i=0;i<5;++i){
        painter.drawLine(points[i],points[i+1]);
    }
}

void Widget::drawTempLineLow()
{
//     QPainter painter(ui->widget0405);
//     painter.setRenderHint(QPainter::Antialiasing,true);
//     painter.setBrush(Qt::blue);
//     painter.setPen(QColor(70,192,203));

//     int ave;
//     int sum=0;
//     int offSet=0;
//     int middle=ui->widget0405->height()/2;
//     for(int i=0;i<6;++i){
//         sum+=days[i].mTempLow.toInt();
//     }
//     ave=sum/6;

//     //定义6个点
//     QPoint points[6];
//     for(int i=0;i<6;++i){
//         points[i].setX(mAirqList[i]->x()+mAirqList[i]->width()/2);
//         offSet=(days[i].mTempLow.toInt()-ave)*3;
//         points[i].setY(middle-offSet);
//         //画出六个点
//         painter.drawEllipse(QPoint(points[i]),3,3);
//         //画出当天温度
//         painter.drawText(points[i].x()-15,points[i].y()-15,days[i].mTempLow+"°");
//         qDebug()<<"lowpoint="<<points[i];
//     }
//     for(int i=0;i<5;++i){
//         painter.drawLine(points[i],points[i+1]);
//     }
}

void Widget::readHttpRply(QNetworkReply *reply)
{
    int resCode=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<resCode;
    if(reply->error()==QNetworkReply::NoError&&resCode==200){
        //大多数服务器返回的是utf-8字符
        QByteArray data=reply->readAll();

        IOFile iofile;
        iofile.byteArrayJsonToFile(data,QDate::currentDate().toString());

        parseWeatherJsonDataAWeak(data);
        qDebug()<<QString::fromUtf8(data);
    }else{
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        mes.setStyleSheet("QPushButton {color:red}");
        mes.setStandardButtons(QMessageBox::Ok);
        mes.exec();
    }
}

QString getCityCodeFromJson(QString name){
    return name;
}

void Widget::on_btnSearch_clicked()
{
    QString cityNameFromUser=ui->lineEdit->text();
    // QString cityCode=getCityCodeFromJson();
    if(!cityNameFromUser.isEmpty()){
        city=cityNameFromUser;
    }
    QString url=strUrl+"&city="+city;
    manager->get(QNetworkRequest(QUrl(url)));
}


void Widget::on_lineEdit_returnPressed()
{
    on_btnSearch_clicked();
}

void Widget::enterEvent(QEnterEvent *event)
{
    setWindowOpacity(1.0);  // 鼠标进入时完全不透明
    QWidget::enterEvent(event);
}

void Widget::leaveEvent(QEvent *event)
{
    setWindowOpacity(0.7);  // 鼠标离开时恢复半透明
    QWidget::leaveEvent(event);
}
