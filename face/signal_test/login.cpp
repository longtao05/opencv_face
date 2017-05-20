#include "login.h"
#include "ui_login.h"
#include <QtGui>
#include <QMessageBox>
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    m_mainWindow = new MainWindow();
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);

}

Login::~Login()
{
    delete ui;
    delete m_mainWindow;
}

//登录键
void Login::on_pushButton_3_clicked()
{
    //if(ui->lineEdit->text().trimmed()==tr("root") && ui->lineEdit_2->text()==tr("fjl"))
    if(ui->lineEdit->text().trimmed()==tr("") && ui->lineEdit_2->text()==tr(""))
    {
        //判断用户名和密码是否正确
        m_mainWindow->show();
        //关闭自己的窗口
        this->hide();
    }
    else
    {
          //如果不正确，弹出警告对话框
        QMessageBox::warning(this,tr("Warning"),tr("user name or password error!"),QMessageBox::Yes);
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit->setFocus();
    }

   //this->hide();
}
//退出系统
void Login::on_pushButton_4_clicked()
{
    exit(0);
}
