#ifndef FACE_H
#define FACE_H

#include <QDialog>
#include <QString>
#include "file.h"
#include "identify.h"
class MainWindow;
namespace Ui {
class Face;
}

class Face : public QDialog
{
    Q_OBJECT

public:
    explicit Face(QWidget *parent = 0);
    ~Face();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Face *ui;
    MainWindow * m_mainWindow;
    File *m_file;
    Identify * m_identify;
};

#endif // FACE_H
