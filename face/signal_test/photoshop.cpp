#include "photoshop.h"
#include "ui_photoshop.h"
#include "mainwindow.h"
//#include "opencv.hpp"
//#include "imgproc/imgproc.hpp"
#include<QMessageBox>
photoshop::photoshop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::photoshop)
{
    ui->setupUi(this);

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
}

photoshop::~photoshop()
{
    delete ui;
}

//水平翻转
void photoshop::on_pushButton_clicked()
{
    cv::flip(image,image,1);
    //cv::Mat img1;
    cvtColor(image, img1, CV_BGR2RGB);
    QImage img= QImage((const unsigned char*)(img1.data),img1.cols,img1.rows,QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(img));
    ui->label->resize(ui->label->pixmap()->size());
}
//垂直翻转
void photoshop::on_pushButton_2_clicked()
{
    cv::flip(image,image,0);
   // cv::Mat img1;
    cvtColor(image, img1, CV_BGR2RGB);
    QImage img= QImage((const unsigned char*)(img1.data),img1.cols,img1.rows,QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(img));
    ui->label->resize(ui->label->pixmap()->size());
}
//灰度化
void photoshop::on_pushButton_3_clicked()
{

    //QImage img= QImage((const unsigned char*)(image.data),image.cols,image.rows,QImage::Format_RGB888);
    cv::cvtColor(image, img1, CV_BGR2GRAY);

   // image = greyMat;
    imshow("灰度图", img1);

}
// 返回
void photoshop::on_pushButton_4_clicked()
{
    this->close();
    m_mainWindow = new MainWindow();
    m_mainWindow->show();
}

void photoshop::on_pushButton_5_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this,tr("Open Image"),".",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));
    image = cv::imread(fileName.toLatin1().data());
   // cv::Mat img1;
    cvtColor(image, img1, CV_BGR2RGB);

    //cv::namedWindow("Original Image");
    //cv::imshow("Original Image",image);
    if(image.data){
       ui->pushButton->setEnabled(true);
       ui->pushButton_2->setEnabled(true);
       ui->pushButton_3->setEnabled(true);
       ui->pushButton_6->setEnabled(true);
       ui->pushButton_7->setEnabled(true);
       ui->pushButton_8->setEnabled(true);
       QImage img= QImage((const unsigned char*)(img1.data),img1.cols,img1.rows,QImage::Format_RGB888);
       ui->label->setPixmap(QPixmap::fromImage(img));
       ui->label->resize(ui->label->pixmap()->size());
    }
}
//放大图片
void photoshop::on_pushButton_6_clicked()
{
    // cv::Mat img1;
    //cv::resize(image,img1,cv::Size(image.cols/3,image.rows/3),0,0,CV_INTER_LINEAR);
    int cols = 512;
    int rows = 512;
if(image.cols<512 && image.rows<512){
    cols=image.cols+300;
    rows=image.rows+300;
    cv::resize(image,img1,cv::Size(cols,rows),0,0,CV_INTER_LINEAR);

}

   imshow("o~o",img1);
}
//缩小缩小
void photoshop::on_pushButton_7_clicked()
{
    // cv::Mat img1;
    //cv::resize(image,img1,cv::Size(image.cols/3,image.rows/3),0,0,CV_INTER_LINEAR);
    int cols = 512;
    int rows = 512;
if(image.cols>2000 && image.rows>2000){
    cols=image.cols/4;
    rows=image.rows/4;
}else if(image.cols>1000 && image.rows>1000){
    cols=image.cols/2;
    rows=image.rows/2;
}
   cv::resize(image,img1,cv::Size(cols,rows),0,0,CV_INTER_LINEAR);

   imshow("o~o",img1);

}
//保存图片
void photoshop::on_pushButton_8_clicked()
{
/*
  QString fileName = QFileDialog::getSaveFileName(this,
          tr("Open Config"),
          "",
          tr("Config Files (*.ifg)"));
*/

    cv::imwrite( "../face_img/Image.jpg", img1 );

  QMessageBox::warning(this,tr("提示"),tr("保存文件成功,请修改名字！"),QMessageBox::Yes);

}
