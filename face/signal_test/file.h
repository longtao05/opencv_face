#ifndef FILE_H
#define FILE_H

#include <QDialog>
#include <QFileDialog>
#include<QString>
namespace Ui {
class File;
}

class File : public QDialog
{
    Q_OBJECT

public:
    explicit File(QWidget *parent = 0);
    ~File();

public:
    QString OpenFile();
    void DeleteFile();
    void AddFile();
    void ReNameFile();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::File *ui;
   // QString temp_newName ="temp.jpg";
   // MainWindow * m_mainWindow;

   //Identify * m_identify;
};

#endif // FILE_H
