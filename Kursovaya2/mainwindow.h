#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <alistofemployees.h>
#include <giftinformation.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    GiftInformation *giftinformation;

signals:
    void signalgift(QString, QString); //создаем сигнал со строковым аргументом
};
#endif // MAINWINDOW_H
