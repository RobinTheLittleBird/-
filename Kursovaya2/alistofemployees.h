#ifndef ALISTOFEMPLOYEES_H
#define ALISTOFEMPLOYEES_H
#include <QString>
#include <QMainWindow>

class AListOfEmployees
{
protected:
    AListOfEmployees* inf;
    QString fullname;
    int day;
    int month;
    int year;
    int size;
    QString birthdayindex = "";

public:
    AListOfEmployees();
    ~AListOfEmployees();
    void weekbirthday();
    void monthbirthday();
    void nextmonthbirthdayindex();
};

#endif // ALISTOFEMPLOYEES_H
