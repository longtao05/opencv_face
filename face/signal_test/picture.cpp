#include "picture.h"
#include "ui_picture.h"
#include "mainwindow.h"

Picture::Picture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Picture)
{
    ui->setupUi(this);
}

Picture::~Picture()
{
    delete ui;
}

void Picture::on_pushButton_4_clicked()
{
    this->close();
    m_mainWindow = new MainWindow();
    m_mainWindow->show();
}
