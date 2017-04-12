/********************************************************************************
** Form generated from reading UI file 'face.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACE_H
#define UI_FACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Face
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Face)
    {
        if (Face->objectName().isEmpty())
            Face->setObjectName(QStringLiteral("Face"));
        Face->resize(400, 300);
        pushButton = new QPushButton(Face);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 75, 23));
        pushButton_2 = new QPushButton(Face);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 100, 75, 23));
        pushButton_3 = new QPushButton(Face);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 160, 75, 23));
        pushButton_4 = new QPushButton(Face);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 210, 75, 23));

        retranslateUi(Face);

        QMetaObject::connectSlotsByName(Face);
    } // setupUi

    void retranslateUi(QDialog *Face)
    {
        Face->setWindowTitle(QApplication::translate("Face", "Dialog", 0));
        pushButton->setText(QApplication::translate("Face", "\344\272\272\350\204\270\350\257\206\345\210\253", 0));
        pushButton_2->setText(QApplication::translate("Face", "\347\234\274\347\235\233\350\257\206\345\210\253", 0));
        pushButton_3->setText(QApplication::translate("Face", "\351\274\273\345\255\220\350\257\206\345\210\253", 0));
        pushButton_4->setText(QApplication::translate("Face", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Face: public Ui_Face {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACE_H
