/********************************************************************************
** Form generated from reading UI file 'file.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILE_H
#define UI_FILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_File
{
public:
    QLineEdit *oldName;
    QPushButton *pushButton;
    QLineEdit *newName;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *File)
    {
        if (File->objectName().isEmpty())
            File->setObjectName(QStringLiteral("File"));
        File->resize(296, 126);
        oldName = new QLineEdit(File);
        oldName->setObjectName(QStringLiteral("oldName"));
        oldName->setGeometry(QRect(70, 30, 141, 24));
        pushButton = new QPushButton(File);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 30, 51, 21));
        newName = new QLineEdit(File);
        newName->setObjectName(QStringLiteral("newName"));
        newName->setGeometry(QRect(70, 60, 141, 24));
        pushButton_2 = new QPushButton(File);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 30, 51, 27));
        pushButton_3 = new QPushButton(File);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 60, 51, 27));
        pushButton_4 = new QPushButton(File);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 60, 51, 21));

        retranslateUi(File);

        QMetaObject::connectSlotsByName(File);
    } // setupUi

    void retranslateUi(QDialog *File)
    {
        File->setWindowTitle(QApplication::translate("File", "\346\226\207\344\273\266\346\223\215\344\275\234", 0));
        pushButton->setText(QApplication::translate("File", "rename", 0));
        pushButton_2->setText(QApplication::translate("File", "old name", 0));
        pushButton_3->setText(QApplication::translate("File", "new name", 0));
        pushButton_4->setText(QApplication::translate("File", "add", 0));
    } // retranslateUi

};

namespace Ui {
    class File: public Ui_File {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILE_H
