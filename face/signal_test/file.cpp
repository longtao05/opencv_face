#include "file.h"
#include "ui_file.h"
#include <QDebug>
#include <QMessageBox>
File::File(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::File)
{
    ui->setupUi(this);
}

File::~File()
{
    delete ui;
}

//openfile
QString File::OpenFile()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open Image"),"../face_img",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));

    return fileName;
}

//remove file
void File::DeleteFile()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open Image"),"../img",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));
    qDebug()<<fileName;
    QFile::remove(fileName);
    QMessageBox::warning(this,tr("提示"),tr("你已删除指定文件"),QMessageBox::Yes);

}
//add file
void File::AddFile()
{
     this->show();
}
//rename
void File::ReNameFile()
{
     this->show();
}

//rename  or move
void File::on_pushButton_clicked()
{
    QFile::rename(ui->oldName->text().trimmed(),ui->newName->text().trimmed());

    this->close();
}

//old name  singal
void File::on_pushButton_2_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open Image"),"../face_img",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));

    ui->oldName->setText(fileName);
    ui->newName->setText(fileName);
}

//copy or rename
void File::on_pushButton_4_clicked()
{
    QFile::copy(ui->oldName->text().trimmed(),ui->newName->text().trimmed());

    this->close();
}
