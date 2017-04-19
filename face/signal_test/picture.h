#ifndef PICTURE_H
#define PICTURE_H

#include <QDialog>
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

private:
    Ui::Picture *ui;
    MainWindow * m_mainWindow;
};

#endif // PICTURE_H
