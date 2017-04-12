/********************************************************************************
** Form generated from reading UI file 'picture.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTURE_H
#define UI_PICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Picture
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Picture)
    {
        if (Picture->objectName().isEmpty())
            Picture->setObjectName(QStringLiteral("Picture"));
        Picture->resize(400, 300);
        pushButton = new QPushButton(Picture);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 50, 75, 23));
        pushButton_2 = new QPushButton(Picture);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 110, 75, 23));
        pushButton_3 = new QPushButton(Picture);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 170, 75, 23));
        pushButton_4 = new QPushButton(Picture);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 230, 75, 23));

        retranslateUi(Picture);

        QMetaObject::connectSlotsByName(Picture);
    } // setupUi

    void retranslateUi(QDialog *Picture)
    {
        Picture->setWindowTitle(QApplication::translate("Picture", "Dialog", 0));
        pushButton->setText(QApplication::translate("Picture", "\346\267\273\345\212\240\345\233\276\347\211\207", 0));
        pushButton_2->setText(QApplication::translate("Picture", "\345\210\240\351\231\244\345\233\276\347\211\207", 0));
        pushButton_3->setText(QApplication::translate("Picture", "\344\277\256\346\224\271\345\220\215\345\255\227", 0));
        pushButton_4->setText(QApplication::translate("Picture", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Picture: public Ui_Picture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTURE_H
