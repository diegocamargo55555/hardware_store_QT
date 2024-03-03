/********************************************************************************
** Form generated from reading UI file 'cpu_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPU_WINDOW_H
#define UI_CPU_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cpu_window
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *cpu_window)
    {
        if (cpu_window->objectName().isEmpty())
            cpu_window->setObjectName("cpu_window");
        cpu_window->resize(1376, 795);
        label = new QLabel(cpu_window);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 30, 581, 71));
        pushButton = new QPushButton(cpu_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 150, 131, 71));
        pushButton_2 = new QPushButton(cpu_window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(370, 150, 131, 71));
        pushButton_3 = new QPushButton(cpu_window);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(530, 150, 131, 71));
        label_2 = new QLabel(cpu_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 220, 131, 41));
        label_3 = new QLabel(cpu_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(370, 220, 131, 41));
        label_4 = new QLabel(cpu_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(533, 226, 121, 31));

        retranslateUi(cpu_window);

        QMetaObject::connectSlotsByName(cpu_window);
    } // setupUi

    void retranslateUi(QDialog *cpu_window)
    {
        cpu_window->setWindowTitle(QCoreApplication::translate("cpu_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cpu_window", "lista de processadores", nullptr));
        pushButton->setText(QCoreApplication::translate("cpu_window", "ryzen 5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cpu_window", "i5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("cpu_window", "m1", nullptr));
        label_2->setText(QCoreApplication::translate("cpu_window", "processor 1", nullptr));
        label_3->setText(QCoreApplication::translate("cpu_window", "processor 2", nullptr));
        label_4->setText(QCoreApplication::translate("cpu_window", "processor 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cpu_window: public Ui_cpu_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPU_WINDOW_H
