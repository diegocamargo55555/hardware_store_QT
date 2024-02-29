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

QT_BEGIN_NAMESPACE

class Ui_cpu_window
{
public:
    QLabel *label;

    void setupUi(QDialog *cpu_window)
    {
        if (cpu_window->objectName().isEmpty())
            cpu_window->setObjectName("cpu_window");
        cpu_window->resize(1376, 795);
        label = new QLabel(cpu_window);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 30, 581, 71));

        retranslateUi(cpu_window);

        QMetaObject::connectSlotsByName(cpu_window);
    } // setupUi

    void retranslateUi(QDialog *cpu_window)
    {
        cpu_window->setWindowTitle(QCoreApplication::translate("cpu_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cpu_window", "lista de processadores", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cpu_window: public Ui_cpu_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPU_WINDOW_H
