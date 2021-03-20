#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Nikesh 212218114085","This is information");

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
          reply =  QMessageBox::question(this, "Custom","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
          switch (reply) {
            case QMessageBox::Yes:
              qDebug() << "Message is displayed";
              break;
            case QMessageBox::YesToAll:
              QMessageBox::warning(this,"Yes to all","Display the message with YES to all ");
              break;
            case QMessageBox::No:
              qDebug() << "Nothing is displayed";
              break;
            default:
              QMessageBox::warning(this,"No to all","Display the message with NO to all ");
                break;
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
         reply = QMessageBox::question(this, "Nikesh", "Do you like Biriyani?", QMessageBox::Yes|QMessageBox::No);
         if (reply == QMessageBox::Yes) {
             QMessageBox::information(this,"Yes","You selected Yes");
         }
         else {
             QMessageBox::information(this,"No","You selected No");
   }
}

void MainWindow::on_pushButton_4_clicked()
{
     QMessageBox::warning(this,"Warning","This is a warning message");
}
