#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
//#include<opencv2/core/core.hpp>
//#include<opencv/cv.h>
#include<opencv/highgui.h>
#include<opencv/cxcore.h>

#include "facetest.h"
#include "dialog.h"
using namespace cv;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();


    //void on_label_linkActivated(const QString &link);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();
signals:
    void signal_shuiping();

private:
     Ui::MainWindow *ui;
     cv::Mat image;
     IplImage* faceimg;
     Dialog *dialog;
};

#endif // MAINWINDOW_H
