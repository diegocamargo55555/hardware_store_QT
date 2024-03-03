/********************************************************************************
** Form generated from reading UI file 'placa_mae_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACA_MAE_WINDOW_H
#define UI_PLACA_MAE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_placa_mae_window
{
public:
    QLabel *label;

    void setupUi(QDialog *placa_mae_window)
    {
        if (placa_mae_window->objectName().isEmpty())
            placa_mae_window->setObjectName("placa_mae_window");
        placa_mae_window->resize(1373, 783);
        label = new QLabel(placa_mae_window);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 391, 131));

        retranslateUi(placa_mae_window);

        QMetaObject::connectSlotsByName(placa_mae_window);
    } // setupUi

    void retranslateUi(QDialog *placa_mae_window)
    {
        placa_mae_window->setWindowTitle(QCoreApplication::translate("placa_mae_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("placa_mae_window", "placas mae", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placa_mae_window: public Ui_placa_mae_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACA_MAE_WINDOW_H
