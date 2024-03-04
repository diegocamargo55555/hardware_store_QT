/********************************************************************************
** Form generated from reading UI file 'fonte_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FONTE_WINDOW_H
#define UI_FONTE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_fonte_window
{
public:
    QLabel *label_fontes;
    QPushButton *pushButton_fontes;
    QPushButton *pushButton_fontes2;
    QPushButton *pushButton_fontes3;
    QPushButton *pushButton_fontes4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *fonte_window)
    {
        if (fonte_window->objectName().isEmpty())
            fonte_window->setObjectName("fonte_window");
        fonte_window->resize(1583, 869);
        label_fontes = new QLabel(fonte_window);
        label_fontes->setObjectName("label_fontes");
        label_fontes->setGeometry(QRect(330, 10, 371, 61));
        pushButton_fontes = new QPushButton(fonte_window);
        pushButton_fontes->setObjectName("pushButton_fontes");
        pushButton_fontes->setGeometry(QRect(170, 70, 401, 341));
        pushButton_fontes2 = new QPushButton(fonte_window);
        pushButton_fontes2->setObjectName("pushButton_fontes2");
        pushButton_fontes2->setGeometry(QRect(900, 70, 401, 341));
        pushButton_fontes3 = new QPushButton(fonte_window);
        pushButton_fontes3->setObjectName("pushButton_fontes3");
        pushButton_fontes3->setGeometry(QRect(170, 470, 401, 341));
        pushButton_fontes4 = new QPushButton(fonte_window);
        pushButton_fontes4->setObjectName("pushButton_fontes4");
        pushButton_fontes4->setGeometry(QRect(900, 470, 401, 341));
        label = new QLabel(fonte_window);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 420, 391, 41));
        label_3 = new QLabel(fonte_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 810, 391, 41));
        label_2 = new QLabel(fonte_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(900, 420, 391, 41));
        label_4 = new QLabel(fonte_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(900, 810, 391, 41));

        retranslateUi(fonte_window);

        QMetaObject::connectSlotsByName(fonte_window);
    } // setupUi

    void retranslateUi(QDialog *fonte_window)
    {
        fonte_window->setWindowTitle(QCoreApplication::translate("fonte_window", "Dialog", nullptr));
        label_fontes->setText(QCoreApplication::translate("fonte_window", "FONTES", nullptr));
        pushButton_fontes->setText(QCoreApplication::translate("fonte_window", "PushButton", nullptr));
        pushButton_fontes2->setText(QCoreApplication::translate("fonte_window", "PushButton", nullptr));
        pushButton_fontes3->setText(QCoreApplication::translate("fonte_window", "PushButton", nullptr));
        pushButton_fontes4->setText(QCoreApplication::translate("fonte_window", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("fonte_window", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("fonte_window", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("fonte_window", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("fonte_window", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fonte_window: public Ui_fonte_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTE_WINDOW_H
