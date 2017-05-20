/********************************************************************************
** Form generated from reading UI file 'photoshop.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOSHOP_H
#define UI_PHOTOSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_photoshop
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;

    void setupUi(QDialog *photoshop)
    {
        if (photoshop->objectName().isEmpty())
            photoshop->setObjectName(QStringLiteral("photoshop"));
        photoshop->resize(839, 574);
        pushButton = new QPushButton(photoshop);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 60, 75, 23));
        pushButton_2 = new QPushButton(photoshop);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 110, 75, 23));
        pushButton_3 = new QPushButton(photoshop);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 160, 75, 23));
        pushButton_4 = new QPushButton(photoshop);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 310, 75, 23));
        label = new QLabel(photoshop);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 10, 49, 14));
        pushButton_5 = new QPushButton(photoshop);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 10, 71, 31));
        pushButton_6 = new QPushButton(photoshop);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 200, 75, 23));
        pushButton_7 = new QPushButton(photoshop);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 240, 75, 23));
        pushButton_8 = new QPushButton(photoshop);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 280, 75, 23));

        retranslateUi(photoshop);

        QMetaObject::connectSlotsByName(photoshop);
    } // setupUi

    void retranslateUi(QDialog *photoshop)
    {
        photoshop->setWindowTitle(QApplication::translate("photoshop", "\345\233\276\347\211\207\345\244\204\347\220\206", 0));
        pushButton->setText(QApplication::translate("photoshop", "\346\260\264\345\271\263\347\277\273\350\275\254", 0));
        pushButton_2->setText(QApplication::translate("photoshop", "\345\236\202\347\233\264\347\277\273\350\275\254", 0));
        pushButton_3->setText(QApplication::translate("photoshop", "\347\201\260\345\272\246\345\214\226", 0));
        pushButton_4->setText(QApplication::translate("photoshop", "\350\277\224\345\233\236", 0));
        label->setText(QString());
        pushButton_5->setText(QApplication::translate("photoshop", "\351\200\211\346\213\251\345\233\276\347\211\207", 0));
        pushButton_6->setText(QApplication::translate("photoshop", "\346\224\276\345\244\247", 0));
        pushButton_7->setText(QApplication::translate("photoshop", "\347\274\251\345\260\217", 0));
        pushButton_8->setText(QApplication::translate("photoshop", "\344\277\235\345\255\230\345\233\276\347\211\207", 0));
    } // retranslateUi

};

namespace Ui {
    class photoshop: public Ui_photoshop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOSHOP_H
