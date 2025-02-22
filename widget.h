#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "day.h"

class QMenu;
class QPoint;
class QNetworkReply;
class QNetworkAccessManager;
// class QMap;
class QString;
class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Day days[7];
    QList<QLabel *>mDateList;
    QList<QLabel *>mWeekList;
    QList<QLabel *>mIconList;
    QList<QLabel *>mWeaTypeList;
    QList<QLabel *>mAirqList;
    QList<QLabel *>mFxList;
    QList<QLabel *>mFlList;

    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event) override;
    bool eventFilter(QObject *watched, QEvent *event);

public slots:
    void readHttpRply(QNetworkReply *reply);

private slots:
    void on_btnSearch_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::Widget *ui;
    QMenu *menuQuit;
    QPoint mOffset;
    QNetworkReply *reply;
    QString city;
    QString strUrl;
    QNetworkAccessManager *manager;
    QMap<QString,QString>weaImgToPathMap;
    void parseWeatherJsonData(QByteArray rawData);
    void parseWeatherJsonDataAWeak(QByteArray rawData);
    void Init();
    void updataUI();
    void drawTempLineHigh();
    void drawTempLineLow();
};
#endif // WIDGET_H
