/********************************************************************************
** Form generated from reading UI file 'gpu_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPU_WINDOW_H
#define UI_GPU_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_GPU_window
{
public:
    QLabel *label;

    void setupUi(QDialog *GPU_window)
    {
        if (GPU_window->objectName().isEmpty())
            GPU_window->setObjectName("GPU_window");
        GPU_window->resize(1337, 773);
        label = new QLabel(GPU_window);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 30, 171, 41));

        retranslateUi(GPU_window);

        QMetaObject::connectSlotsByName(GPU_window);
    } // setupUi

    void retranslateUi(QDialog *GPU_window)
    {
        GPU_window->setWindowTitle(QCoreApplication::translate("GPU_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GPU_window", "GPU LIST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPU_window: public Ui_GPU_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPU_WINDOW_H
