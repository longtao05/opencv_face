#ifndef FACE_H
#define FACE_H

#include <QDialog>
#include <QString>
#include "file.h"
#include "identify.h"
#include "camp.h"
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

    void on_pushButton_5_clicked();

private:
    Ui::Face *ui;
    MainWindow * m_mainWindow;
    File *m_file;
    Identify * m_identify;
    Camp * m_camputer;
};

#endif // FACE_H
