#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
friend class MainWindow;
public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Login *ui;
    MainWindow * m_mainWindow;
};

#endif // LOGIN_H
