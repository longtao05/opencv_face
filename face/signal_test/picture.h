#ifndef PICTURE_H
#define PICTURE_H

#include <QDialog>
#include"file.h"
class MainWindow;
namespace Ui {
class Picture;
}

class Picture : public QDialog
{
    Q_OBJECT

public:
    explicit Picture(QWidget *parent = 0);
    ~Picture();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Picture *ui;
    MainWindow * m_mainWindow;
    File *m_file;
};

#endif // PICTURE_H
