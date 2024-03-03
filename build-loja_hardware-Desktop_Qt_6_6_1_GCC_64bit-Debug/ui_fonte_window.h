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

QT_BEGIN_NAMESPACE

class Ui_fonte_window
{
public:
    QLabel *label;

    void setupUi(QDialog *fonte_window)
    {
        if (fonte_window->objectName().isEmpty())
            fonte_window->setObjectName("fonte_window");
        fonte_window->resize(1325, 675);
        label = new QLabel(fonte_window);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 10, 371, 61));

        retranslateUi(fonte_window);

        QMetaObject::connectSlotsByName(fonte_window);
    } // setupUi

    void retranslateUi(QDialog *fonte_window)
    {
        fonte_window->setWindowTitle(QCoreApplication::translate("fonte_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fonte_window", "FONTES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fonte_window: public Ui_fonte_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FONTE_WINDOW_H
