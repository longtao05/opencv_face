#include "photoshop.h"
#include "ui_photoshop.h"
#include "mainwindow.h"

photoshop::photoshop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::photoshop)
{
    ui->setupUi(this);
}

photoshop::~photoshop()
{
    delete ui;
}

void photoshop::on_pushButton_4_clicked()
{
    this->close();
    m_mainWindow = new MainWindow();
    m_mainWindow->show();
}
