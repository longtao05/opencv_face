#include "dialog.h"
#include "ui_dialog.h"
//#include "mainwindow.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    MainWindow *ma = new MainWindow();

    //connect(this,SIGNAL(on_pushButton_clicked()),ma,SLOT(on_pushButton_2_clicked()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{

}

void Dialog::on_pushButton_2_clicked()
{
   /* if (!(QMessageBox::information(this,tr("CT Control View"),tr("Do you really want to log out CT Control View?"),tr("Yes"),tr("No"))))
       {
            this->close();
        }
        */
    this->close();

}
