#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QFileDialog>
#include <QMainWindow>
#include <QDebug>
#include "face.h"
#include "picture.h"
#include "photoshop.h"

class Login;
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

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

private:
    Face      *m_face;
    photoshop *m_photoshop;
    Picture   *m_picture;
    Login     *m_login;
};

#endif // MAINWINDOW_H
