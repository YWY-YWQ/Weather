#include "iofile.h"
#include <QJsonDocument>
#include <QFile>
IOFile::IOFile() {}

bool IOFile::isOK()
{
    return ok;
}

bool IOFile::byteArrayJsonToFile(QByteArray array, QString str)
{
    //检查json语法错误
    QJsonParseError parseError;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(array, &parseError);
    if (parseError.error != QJsonParseError::NoError) {
        qDebug() << "JSON解析错误:" << parseError.errorString();
        return false;
    }

    QDateTime dateTime=QDateTime::currentDateTime();
    QString time=dateTime.toString("yyyy-MM-dd");

    //将json写入文件内
    QFile file(time+".json");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(jsonDoc.toJson(QJsonDocument::Indented)); // 格式化写入
        file.close();
        return true;
    } else {
        qDebug() << "无法打开文件:" << file.errorString();
        return false;
    }
}

QByteArray IOFile::JsonFiletoByteArray()
{
    ok=false;

    QDateTime dateTime=QDateTime::currentDateTime();
    QString time=dateTime.toString("yyyy-MM-dd");
    QFile file(time+".json");

    QByteArray array="";

    if(!file.exists()){
        qDebug() << "错误：文件不存在";
        return array;
    }

    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        array=file.readAll();
        file.close();
        ok=true;
        return array;
    }else{
        qDebug() << "无法打开文件:" << file.errorString();
        return array;
    }
}
