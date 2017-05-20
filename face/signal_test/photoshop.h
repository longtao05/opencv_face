#ifndef PHOTOSHOP_H
#define PHOTOSHOP_H

#include <QDialog>
#include "core.hpp"
#include"highgui.h"

class MainWindow;
namespace Ui {
class photoshop;
}

class photoshop : public QDialog
{
    Q_OBJECT

public:
    explicit photoshop(QWidget *parent = 0);
    ~photoshop();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::photoshop *ui;
    MainWindow * m_mainWindow;
    cv::Mat image;//主图片
    cv::Mat img1;//副本图片
};

#endif // PHOTOSHOP_H
