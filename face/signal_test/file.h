#ifndef FILE_H
#define FILE_H

#include <QDialog>
#include <QFileDialog>
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

private:
    Ui::File *ui;
};

#endif // FILE_H
