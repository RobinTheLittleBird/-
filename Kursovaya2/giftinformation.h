#ifndef GIFTINFORMATION_H
#define GIFTINFORMATION_H

#include <QMainWindow>
#include <alistofemployees.h>

class GiftInformation : public AListOfEmployees {

    GiftInformation* moneyinf;
    int ruble;
    int penny;

public:
    GiftInformation();
    ~GiftInformation();
    void nextmonthbirthday();

public slots:
    void slotgift(QString i, QString i2); //создаем слот со строковым аргуметом, объект i класса QString
};

#endif // GIFTINFORMATION_H
