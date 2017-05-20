#include "face.h"
#include "ui_face.h"
#include "mainwindow.h"

Face::Face(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Face)
{
    ui->setupUi(this);

}

Face::~Face()
{
    delete ui;
}

//人脸识别
void Face::on_pushButton_clicked()
{

    m_file = new File();
    m_identify = new Identify();
    QString    fileName = m_file->OpenFile();
    IplImage* img = cvLoadImage(fileName.toLatin1().data(), 1 );
    m_identify->face_identify(img,1);

  // qDebug()<<"face shi bie";
}
//眼睛识别
void Face::on_pushButton_2_clicked()
{
    m_file = new File();
    m_identify = new Identify();
    QString    fileName = m_file->OpenFile();
    IplImage* img = cvLoadImage(fileName.toLatin1().data(), 1 );
    m_identify->face_identify(img,2);
    //qDebug()<<"eyes shi bie";

}
//鼻子识别
void Face::on_pushButton_3_clicked()
{
    m_file = new File();
    m_identify = new Identify();
    QString    fileName = m_file->OpenFile();
    IplImage* img = cvLoadImage(fileName.toLatin1().data(), 1 );
    m_identify->face_identify(img,3);
}
//退出
void Face::on_pushButton_4_clicked()
{
    this->close();
    m_mainWindow = new MainWindow();
    m_mainWindow->show();
}


//视频人脸检测
void Face::on_pushButton_5_clicked()
{

    m_file = new File();
    m_camputer = new Camp();
   // QString    fileName = m_file->OpenFile();


    m_camputer->face_identify();

}
