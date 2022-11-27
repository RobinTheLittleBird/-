#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    emit signalgift(ui->lineEdit_17->text(), ui->lineEdit_22->text()); //вызываем сигнал с помощью оператора emit
    emit signalgift(ui->lineEdit_23->text(), ui->lineEdit_24->text()); //вызываем сигнал с помощью оператора emit
    emit signalgift(ui->lineEdit_25->text(), ui->lineEdit_26->text()); //вызываем сигнал с помощью оператора emit
    emit signalgift(ui->lineEdit_27->text(), ui->lineEdit_28->text()); //вызываем сигнал с помощью оператора emit
    emit signalgift(ui->lineEdit_29->text(), ui->lineEdit_30->text()); //вызываем сигнал с помощью оператора emit
}
