#ifndef PHOTOSHOP_H
#define PHOTOSHOP_H

#include <QDialog>

class MainWindow;
namespace Ui {
class photoshop;
}

class photoshop : public QDialog
{
    Q_OBJECT

public:
    explicit photoshop(QWidget *parent = 0);
    ~photoshop();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::photoshop *ui;
    MainWindow * m_mainWindow;
};

#endif // PHOTOSHOP_H
