/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget01;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit;
    QPushButton *btnSearch;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelCurrentDate;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelWeatherIcon;
    QGridLayout *gridLayout_2;
    QLabel *labelCity;
    QLabel *labelTempRange;
    QLabel *labelWeatherType;
    QLabel *labelTemp;
    QSpacerItem *horizontalSpacer;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QLabel *labelGanMao;
    QWidget *widget0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFX;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelFXType;
    QLabel *labelFXTypeData;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFX_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPM25;
    QLabel *labelPM25Data;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelFX_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelShiDu;
    QLabel *labelShiDuData;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelFX_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelAir;
    QLabel *labelAirData;
    QWidget *widget04;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget0401;
    QGridLayout *gridLayout_3;
    QLabel *labelWeek1;
    QLabel *labelWeek2;
    QLabel *labelWeek3;
    QLabel *labelWeek4;
    QLabel *labelWeek5;
    QLabel *labelWeek6;
    QLabel *labelDate1;
    QLabel *labelDate2;
    QLabel *labelDate3;
    QLabel *labelDate4;
    QLabel *labelDate5;
    QLabel *labelDate6;
    QWidget *widget0402;
    QGridLayout *gridLayout_4;
    QLabel *labelWeathIcon1;
    QLabel *labelWeathIcon2;
    QLabel *labelWeathIcon3;
    QLabel *labelWeathIcon4;
    QLabel *labelWeathIcon5;
    QLabel *labelWeathIcon6;
    QLabel *labelWeatherType1;
    QLabel *labelWeatherType2;
    QLabel *labelWeatherType3;
    QLabel *labelWeatherType4;
    QLabel *labelWeatherType5;
    QLabel *labelWeatherType6;
    QWidget *widget0403;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelaiq1;
    QLabel *labelaiq2;
    QLabel *labelaiq3;
    QLabel *labelaiq4;
    QLabel *labelaiq5;
    QLabel *labelaiq6;
    QWidget *widget0404;
    QWidget *widget0405;
    QWidget *widget0406;
    QGridLayout *gridLayout_5;
    QLabel *labelFx1;
    QLabel *labelFx2;
    QLabel *labelFx3;
    QLabel *labelFx4;
    QLabel *labelFl1;
    QLabel *labelFl2;
    QLabel *labelFl3;
    QLabel *labelFl4;
    QLabel *labelFl5;
    QLabel *labelFx5;
    QLabel *labelFl6;
    QLabel *labelFx6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(528, 860);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(1428, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Widget->setPalette(palette);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        gridLayout_6 = new QGridLayout(Widget);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        widget01 = new QWidget(Widget);
        widget01->setObjectName("widget01");
        widget01->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget01->setPalette(palette1);
        horizontalLayout_6 = new QHBoxLayout(widget01);
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEdit = new QLineEdit(widget01);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 10px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
" }\n"
""));

        horizontalLayout_6->addWidget(lineEdit);

        btnSearch = new QPushButton(widget01);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setMinimumSize(QSize(35, 35));
        btnSearch->setMaximumSize(QSize(35, 35));
        btnSearch->setStyleSheet(QString::fromUtf8("border-radius: 20px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/weather-0/\346\220\234\347\264\242.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnSearch->setIcon(icon);

        horizontalLayout_6->addWidget(btnSearch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        labelCurrentDate = new QLabel(widget01);
        labelCurrentDate->setObjectName("labelCurrentDate");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelCurrentDate->setPalette(palette2);
        QFont font;
        font.setPointSize(15);
        labelCurrentDate->setFont(font);

        horizontalLayout_6->addWidget(labelCurrentDate);

        horizontalLayout_6->setStretch(0, 4);
        horizontalLayout_6->setStretch(3, 3);

        verticalLayout_7->addWidget(widget01);

        widget02 = new QWidget(Widget);
        widget02->setObjectName("widget02");
        widget02->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_8 = new QHBoxLayout(widget02);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelWeatherIcon = new QLabel(widget02);
        labelWeatherIcon->setObjectName("labelWeatherIcon");
        labelWeatherIcon->setMinimumSize(QSize(125, 125));
        labelWeatherIcon->setMaximumSize(QSize(125, 125));
        labelWeatherIcon->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeatherIcon->setScaledContents(true);

        horizontalLayout_5->addWidget(labelWeatherIcon);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        labelCity = new QLabel(widget02);
        labelCity->setObjectName("labelCity");
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelCity->setPalette(palette3);
        QFont font1;
        font1.setPointSize(20);
        labelCity->setFont(font1);

        gridLayout_2->addWidget(labelCity, 0, 3, 1, 1);

        labelTempRange = new QLabel(widget02);
        labelTempRange->setObjectName("labelTempRange");
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelTempRange->setPalette(palette4);
        labelTempRange->setFont(font);

        gridLayout_2->addWidget(labelTempRange, 1, 1, 1, 1);

        labelWeatherType = new QLabel(widget02);
        labelWeatherType->setObjectName("labelWeatherType");
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelWeatherType->setPalette(palette5);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei UI Light")});
        font2.setPointSize(15);
        labelWeatherType->setFont(font2);

        gridLayout_2->addWidget(labelWeatherType, 1, 0, 1, 1);

        labelTemp = new QLabel(widget02);
        labelTemp->setObjectName("labelTemp");
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        labelTemp->setPalette(palette6);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(40);
        labelTemp->setFont(font3);

        gridLayout_2->addWidget(labelTemp, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_2);


        horizontalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_7->addWidget(widget02);

        widget03 = new QWidget(Widget);
        widget03->setObjectName("widget03");
        widget03->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelGanMao = new QLabel(widget03);
        labelGanMao->setObjectName("labelGanMao");
        labelGanMao->setStyleSheet(QString::fromUtf8("color:rgb(200,200,200);"));

        verticalLayout->addWidget(labelGanMao);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 156, 37);\n"
"border-radius: 20px;"));
        gridLayout = new QGridLayout(widget0301);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(50, 20, 50, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelFX = new QLabel(widget0301);
        labelFX->setObjectName("labelFX");
        labelFX->setMinimumSize(QSize(35, 45));
        labelFX->setMaximumSize(QSize(45, 45));
        labelFX->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\351\243\216.png")));
        labelFX->setScaledContents(true);

        horizontalLayout->addWidget(labelFX);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelFXType = new QLabel(widget0301);
        labelFXType->setObjectName("labelFXType");
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(230, 156, 37, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelFXType->setPalette(palette7);
        labelFXType->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(labelFXType);

        labelFXTypeData = new QLabel(widget0301);
        labelFXTypeData->setObjectName("labelFXTypeData");
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelFXTypeData->setPalette(palette8);
        labelFXTypeData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(labelFXTypeData);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelFX_2 = new QLabel(widget0301);
        labelFX_2->setObjectName("labelFX_2");
        labelFX_2->setMinimumSize(QSize(35, 45));
        labelFX_2->setMaximumSize(QSize(45, 45));
        labelFX_2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/pm2.5.png")));
        labelFX_2->setScaledContents(true);

        horizontalLayout_2->addWidget(labelFX_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelPM25 = new QLabel(widget0301);
        labelPM25->setObjectName("labelPM25");
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelPM25->setPalette(palette9);
        labelPM25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPM25);

        labelPM25Data = new QLabel(widget0301);
        labelPM25Data->setObjectName("labelPM25Data");
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelPM25Data->setPalette(palette10);
        labelPM25Data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPM25Data);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelFX_4 = new QLabel(widget0301);
        labelFX_4->setObjectName("labelFX_4");
        labelFX_4->setMinimumSize(QSize(35, 45));
        labelFX_4->setMaximumSize(QSize(45, 45));
        labelFX_4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\346\271\277\345\272\246.png")));
        labelFX_4->setScaledContents(true);

        horizontalLayout_4->addWidget(labelFX_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelShiDu = new QLabel(widget0301);
        labelShiDu->setObjectName("labelShiDu");
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelShiDu->setPalette(palette11);
        labelShiDu->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelShiDu);

        labelShiDuData = new QLabel(widget0301);
        labelShiDuData->setObjectName("labelShiDuData");
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelShiDuData->setPalette(palette12);
        labelShiDuData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelShiDuData);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelFX_3 = new QLabel(widget0301);
        labelFX_3->setObjectName("labelFX_3");
        labelFX_3->setMinimumSize(QSize(35, 45));
        labelFX_3->setMaximumSize(QSize(45, 45));
        labelFX_3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\347\251\272\346\260\224\350\264\250\351\207\217.png")));
        labelFX_3->setScaledContents(true);

        horizontalLayout_3->addWidget(labelFX_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelAir = new QLabel(widget0301);
        labelAir->setObjectName("labelAir");
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelAir->setPalette(palette13);
        labelAir->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelAir);

        labelAirData = new QLabel(widget0301);
        labelAirData->setObjectName("labelAirData");
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        labelAirData->setPalette(palette14);
        labelAirData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelAirData);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);


        verticalLayout->addWidget(widget0301);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        verticalLayout_7->addWidget(widget03);

        widget04 = new QWidget(Widget);
        widget04->setObjectName("widget04");
        verticalLayout_6 = new QVBoxLayout(widget04);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget0401 = new QWidget(widget04);
        widget0401->setObjectName("widget0401");
        widget0401->setMaximumSize(QSize(500, 16777215));
        gridLayout_3 = new QGridLayout(widget0401);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(8);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        labelWeek1 = new QLabel(widget0401);
        labelWeek1->setObjectName("labelWeek1");
        labelWeek1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek1, 0, 0, 1, 1);

        labelWeek2 = new QLabel(widget0401);
        labelWeek2->setObjectName("labelWeek2");
        labelWeek2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek2, 0, 1, 1, 1);

        labelWeek3 = new QLabel(widget0401);
        labelWeek3->setObjectName("labelWeek3");
        labelWeek3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek3, 0, 2, 1, 1);

        labelWeek4 = new QLabel(widget0401);
        labelWeek4->setObjectName("labelWeek4");
        labelWeek4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek4, 0, 3, 1, 1);

        labelWeek5 = new QLabel(widget0401);
        labelWeek5->setObjectName("labelWeek5");
        labelWeek5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek5, 0, 4, 1, 1);

        labelWeek6 = new QLabel(widget0401);
        labelWeek6->setObjectName("labelWeek6");
        labelWeek6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelWeek6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelWeek6, 0, 5, 1, 1);

        labelDate1 = new QLabel(widget0401);
        labelDate1->setObjectName("labelDate1");
        labelDate1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate1, 1, 0, 1, 1);

        labelDate2 = new QLabel(widget0401);
        labelDate2->setObjectName("labelDate2");
        labelDate2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate2, 1, 1, 1, 1);

        labelDate3 = new QLabel(widget0401);
        labelDate3->setObjectName("labelDate3");
        labelDate3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate3, 1, 2, 1, 1);

        labelDate4 = new QLabel(widget0401);
        labelDate4->setObjectName("labelDate4");
        labelDate4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate4, 1, 3, 1, 1);

        labelDate5 = new QLabel(widget0401);
        labelDate5->setObjectName("labelDate5");
        labelDate5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate5, 1, 4, 1, 1);

        labelDate6 = new QLabel(widget0401);
        labelDate6->setObjectName("labelDate6");
        labelDate6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(70, 192, 203);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelDate6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelDate6, 1, 5, 1, 1);


        verticalLayout_6->addWidget(widget0401);

        widget0402 = new QWidget(widget04);
        widget0402->setObjectName("widget0402");
        widget0402->setMaximumSize(QSize(1000, 100));
        gridLayout_4 = new QGridLayout(widget0402);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(8);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        labelWeathIcon1 = new QLabel(widget0402);
        labelWeathIcon1->setObjectName("labelWeathIcon1");
        labelWeathIcon1->setMinimumSize(QSize(75, 75));
        labelWeathIcon1->setMaximumSize(QSize(75, 75));
        labelWeathIcon1->setSizeIncrement(QSize(0, 0));
        labelWeathIcon1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon1->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon1->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon1, 0, 0, 1, 1);

        labelWeathIcon2 = new QLabel(widget0402);
        labelWeathIcon2->setObjectName("labelWeathIcon2");
        labelWeathIcon2->setMinimumSize(QSize(75, 75));
        labelWeathIcon2->setMaximumSize(QSize(75, 75));
        labelWeathIcon2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon2->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon2->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon2, 0, 1, 1, 1);

        labelWeathIcon3 = new QLabel(widget0402);
        labelWeathIcon3->setObjectName("labelWeathIcon3");
        labelWeathIcon3->setMinimumSize(QSize(75, 75));
        labelWeathIcon3->setMaximumSize(QSize(75, 75));
        labelWeathIcon3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon3->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon3->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon3, 0, 2, 1, 1);

        labelWeathIcon4 = new QLabel(widget0402);
        labelWeathIcon4->setObjectName("labelWeathIcon4");
        labelWeathIcon4->setMinimumSize(QSize(75, 75));
        labelWeathIcon4->setMaximumSize(QSize(75, 75));
        labelWeathIcon4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon4->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon4->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon4, 0, 3, 1, 1);

        labelWeathIcon5 = new QLabel(widget0402);
        labelWeathIcon5->setObjectName("labelWeathIcon5");
        labelWeathIcon5->setMinimumSize(QSize(75, 75));
        labelWeathIcon5->setMaximumSize(QSize(75, 75));
        labelWeathIcon5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon5->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon5->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon5, 0, 4, 1, 1);

        labelWeathIcon6 = new QLabel(widget0402);
        labelWeathIcon6->setObjectName("labelWeathIcon6");
        labelWeathIcon6->setMinimumSize(QSize(75, 75));
        labelWeathIcon6->setMaximumSize(QSize(75, 75));
        labelWeathIcon6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        labelWeathIcon6->setPixmap(QPixmap(QString::fromUtf8(":/images/images/weather-0/\345\260\217\351\233\250.png")));
        labelWeathIcon6->setScaledContents(true);

        gridLayout_4->addWidget(labelWeathIcon6, 0, 5, 1, 1);

        labelWeatherType1 = new QLabel(widget0402);
        labelWeatherType1->setObjectName("labelWeatherType1");
        labelWeatherType1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType1, 1, 0, 1, 1);

        labelWeatherType2 = new QLabel(widget0402);
        labelWeatherType2->setObjectName("labelWeatherType2");
        labelWeatherType2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType2, 1, 1, 1, 1);

        labelWeatherType3 = new QLabel(widget0402);
        labelWeatherType3->setObjectName("labelWeatherType3");
        labelWeatherType3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType3, 1, 2, 1, 1);

        labelWeatherType4 = new QLabel(widget0402);
        labelWeatherType4->setObjectName("labelWeatherType4");
        labelWeatherType4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType4, 1, 3, 1, 1);

        labelWeatherType5 = new QLabel(widget0402);
        labelWeatherType5->setObjectName("labelWeatherType5");
        labelWeatherType5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType5, 1, 4, 1, 1);

        labelWeatherType6 = new QLabel(widget0402);
        labelWeatherType6->setObjectName("labelWeatherType6");
        labelWeatherType6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelWeatherType6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(labelWeatherType6, 1, 5, 1, 1);


        verticalLayout_6->addWidget(widget0402);

        widget0403 = new QWidget(widget04);
        widget0403->setObjectName("widget0403");
        widget0403->setMaximumSize(QSize(500, 16777215));
        horizontalLayout_7 = new QHBoxLayout(widget0403);
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelaiq1 = new QLabel(widget0403);
        labelaiq1->setObjectName("labelaiq1");
        labelaiq1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 7px;"));
        labelaiq1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq1);

        labelaiq2 = new QLabel(widget0403);
        labelaiq2->setObjectName("labelaiq2");
        labelaiq2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 187, 69);\n"
"border-radius: 7px;"));
        labelaiq2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq2);

        labelaiq3 = new QLabel(widget0403);
        labelaiq3->setObjectName("labelaiq3");
        labelaiq3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 7px;"));
        labelaiq3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq3);

        labelaiq4 = new QLabel(widget0403);
        labelaiq4->setObjectName("labelaiq4");
        labelaiq4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 7px;"));
        labelaiq4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq4);

        labelaiq5 = new QLabel(widget0403);
        labelaiq5->setObjectName("labelaiq5");
        labelaiq5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 7px;"));
        labelaiq5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq5);

        labelaiq6 = new QLabel(widget0403);
        labelaiq6->setObjectName("labelaiq6");
        labelaiq6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(150, 213, 32);\n"
"border-radius: 7px;"));
        labelaiq6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(labelaiq6);


        verticalLayout_6->addWidget(widget0403);

        widget0404 = new QWidget(widget04);
        widget0404->setObjectName("widget0404");
        widget0404->setMinimumSize(QSize(0, 100));
        widget0404->setMaximumSize(QSize(500, 16777215));
        widget0404->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"border-radius: 10px;"));

        verticalLayout_6->addWidget(widget0404);

        widget0405 = new QWidget(widget04);
        widget0405->setObjectName("widget0405");
        widget0405->setMinimumSize(QSize(0, 100));
        widget0405->setMaximumSize(QSize(500, 16777215));
        widget0405->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"border-radius: 10px;"));

        verticalLayout_6->addWidget(widget0405);

        widget0406 = new QWidget(widget04);
        widget0406->setObjectName("widget0406");
        widget0406->setMaximumSize(QSize(500, 16777215));
        gridLayout_5 = new QGridLayout(widget0406);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(8);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        labelFx1 = new QLabel(widget0406);
        labelFx1->setObjectName("labelFx1");
        labelFx1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx1, 0, 0, 2, 1);

        labelFx2 = new QLabel(widget0406);
        labelFx2->setObjectName("labelFx2");
        labelFx2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx2, 0, 1, 2, 1);

        labelFx3 = new QLabel(widget0406);
        labelFx3->setObjectName("labelFx3");
        labelFx3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx3, 0, 2, 2, 1);

        labelFx4 = new QLabel(widget0406);
        labelFx4->setObjectName("labelFx4");
        labelFx4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx4, 0, 3, 2, 1);

        labelFl1 = new QLabel(widget0406);
        labelFl1->setObjectName("labelFl1");
        labelFl1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl1, 2, 0, 1, 1);

        labelFl2 = new QLabel(widget0406);
        labelFl2->setObjectName("labelFl2");
        labelFl2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl2, 2, 1, 1, 1);

        labelFl3 = new QLabel(widget0406);
        labelFl3->setObjectName("labelFl3");
        labelFl3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl3, 2, 2, 1, 1);

        labelFl4 = new QLabel(widget0406);
        labelFl4->setObjectName("labelFl4");
        labelFl4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl4, 2, 3, 1, 1);

        labelFl5 = new QLabel(widget0406);
        labelFl5->setObjectName("labelFl5");
        labelFl5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl5, 2, 4, 1, 1);

        labelFx5 = new QLabel(widget0406);
        labelFx5->setObjectName("labelFx5");
        labelFx5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx5, 0, 4, 2, 1);

        labelFl6 = new QLabel(widget0406);
        labelFl6->setObjectName("labelFl6");
        labelFl6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-top-right-radius: 0px;\n"
"border-top-left-radius: 0px;"));
        labelFl6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFl6, 2, 5, 1, 1);

        labelFx6 = new QLabel(widget0406);
        labelFx6->setObjectName("labelFx6");
        labelFx6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(170, 170, 170);\n"
"border-radius: 7px;\n"
"border-bottom-right-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
""));
        labelFx6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_5->addWidget(labelFx6, 0, 5, 2, 1);


        verticalLayout_6->addWidget(widget0406);


        verticalLayout_7->addWidget(widget04);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 2);
        verticalLayout_7->setStretch(2, 3);
        verticalLayout_7->setStretch(3, 9);

        gridLayout_6->addLayout(verticalLayout_7, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\237\216\345\270\202", nullptr));
        btnSearch->setText(QString());
        labelCurrentDate->setText(QCoreApplication::translate("Widget", "2024/02/17   \346\230\237\346\234\237\344\270\200", nullptr));
        labelWeatherIcon->setText(QString());
        labelCity->setText(QCoreApplication::translate("Widget", "\346\212\232\345\267\236\345\270\202", nullptr));
        labelTempRange->setText(QCoreApplication::translate("Widget", "1~2\342\204\203", nullptr));
        labelWeatherType->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelTemp->setText(QCoreApplication::translate("Widget", "10", nullptr));
        labelGanMao->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        labelFX->setText(QString());
        labelFXType->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFXTypeData->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFX_2->setText(QString());
        labelPM25->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        labelPM25Data->setText(QCoreApplication::translate("Widget", "24", nullptr));
        labelFX_4->setText(QString());
        labelShiDu->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        labelShiDuData->setText(QCoreApplication::translate("Widget", "83%", nullptr));
        labelFX_3->setText(QString());
        labelAir->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        labelAirData->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelWeek1->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelWeek2->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelWeek3->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelWeek4->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelWeek5->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelWeek6->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        labelDate1->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelDate2->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelDate3->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelDate4->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelDate5->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelDate6->setText(QCoreApplication::translate("Widget", "02/16", nullptr));
        labelWeathIcon1->setText(QString());
        labelWeathIcon2->setText(QString());
        labelWeathIcon3->setText(QString());
        labelWeathIcon4->setText(QString());
        labelWeathIcon5->setText(QString());
        labelWeathIcon6->setText(QString());
        labelWeatherType1->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelWeatherType2->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelWeatherType3->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelWeatherType4->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelWeatherType5->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelWeatherType6->setText(QCoreApplication::translate("Widget", "\345\260\217\351\233\250", nullptr));
        labelaiq1->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelaiq2->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        labelaiq3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelaiq4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelaiq5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelaiq6->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        labelFx1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFx2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFx3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFx4->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFl1->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFl2->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFl3->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFl4->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFl5->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFx5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        labelFl6->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        labelFx6->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
