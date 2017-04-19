#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "login.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_face      = new Face();
    m_photoshop = new photoshop();
    m_picture   = new Picture();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_face;
    delete m_photoshop;
    delete m_picture;
}


//检测识别
void MainWindow::on_pushButton_clicked()
{
    m_face->show();
    this->hide();
}
//人脸库
void MainWindow::on_pushButton_2_clicked()
{
    m_picture->show();
    this->hide();
}
//图片处理
void MainWindow::on_pushButton_3_clicked()
{
    m_photoshop->show();
    this->hide();
}

//退出程序
void MainWindow::on_pushButton_4_clicked()
{
    this->close();
    m_login = new Login();
    m_login->show();

   // exit(0);
}
