#ifndef IOFILE_H
#define IOFILE_H

#include <QObject>

class QByteArray;

class IOFile
{
public:
    IOFile();
    bool isOK();
    bool byteArrayJsonToFile(QByteArray array,QString str);
    QByteArray JsonFiletoByteArray();
private:
    bool ok;
};

#endif // IOFILE_H
