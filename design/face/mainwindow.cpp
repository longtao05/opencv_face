#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_2->setEnabled(false);
    // ui->pushButton_3->setEnabled(false);
    dialog = new Dialog();
    connect(dialog,SIGNAL(clicked()),this,SLOT(on_pushButton_5_clicked()));
    connect(this,SIGNAL(signal_shuiping()),dialog,SLOT(on_pushButton_clicked()));
}
MainWindow::~MainWindow()
{
    delete ui;
}
//  打开图片
void MainWindow::on_pushButton_clicked()
{

   QString fileName=QFileDialog::getOpenFileName(this,tr("Open Image"),".",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));
    image = cv::imread(fileName.toLatin1().data());
   cv::namedWindow("Original Image");
   cv::imshow("Original Image",image);
   if(image.data){
       ui->pushButton_2->setEnabled(true);
      // ui->pushButton_3->setEnabled(true);
   }

}

void MainWindow::on_pushButton_2_clicked()
{

    cv::flip(image,image,1);
    cv::namedWindow("Output Image");
    cv::imshow("Output Image",image);
//     cvtcolor(image,image, CV_BGR2RGB);
   // QImage img= QImage((const unsigned char*)(image.data),image.cols,image.rows,QImage::Format_RGB888);

    //ui->label->setPixmap(QPixmap::fromImage(image));
    //ui->label->resize(ui->label->pixmap()->size());
}


void MainWindow::on_pushButton_3_clicked()
{
face(image);
}



void MainWindow::on_pushButton_4_clicked()
{
    exit(0);
}

void MainWindow::on_pushButton_5_clicked()
{
    dialog->show();
}
/*
void MainWindow::signal_shuiping()
{

    cv::flip(image,image,1);
    cv::namedWindow("Output Image");
    cv::imshow("Output Image",image);

}*/
