#include "file.h"
#include "ui_file.h"


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


QString File::OpenFile()
{
    QString fileName=QFileDialog::getOpenFileName(this, tr("Open Image"),".",tr("Image Files(*.png *.jpg *.jpeg *.bmp)"));

    return fileName;
}

void File::AddFile()
{}

void File::DeleteFile()
{}

