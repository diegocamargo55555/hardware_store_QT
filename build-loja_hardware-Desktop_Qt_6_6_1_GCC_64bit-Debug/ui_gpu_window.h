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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GPU_window
{
public:
    QLabel *label;
    QPushButton *pushButton_gpu;
    QPushButton *pushButton_gpu2;
    QPushButton *pushButton_gpu3;
    QPushButton *pushButton_gpu4;
    QPushButton *pushButton_gpu5;
    QPushButton *pushButton_gpu6;
    QLabel *label_gpu;
    QLabel *label_gpu_2;
    QLabel *label_gpu_3;
    QLabel *label_gpu_4;
    QLabel *label_gpu_5;
    QLabel *label_gpu_6;
    QLabel *label_carrinho;

    void setupUi(QDialog *GPU_window)
    {
        if (GPU_window->objectName().isEmpty())
            GPU_window->setObjectName("GPU_window");
        GPU_window->resize(1337, 773);
        label = new QLabel(GPU_window);
        label->setObjectName("label");
        label->setGeometry(QRect(520, 0, 171, 41));
        pushButton_gpu = new QPushButton(GPU_window);
        pushButton_gpu->setObjectName("pushButton_gpu");
        pushButton_gpu->setGeometry(QRect(10, 60, 421, 291));
        pushButton_gpu2 = new QPushButton(GPU_window);
        pushButton_gpu2->setObjectName("pushButton_gpu2");
        pushButton_gpu2->setGeometry(QRect(450, 60, 421, 291));
        pushButton_gpu3 = new QPushButton(GPU_window);
        pushButton_gpu3->setObjectName("pushButton_gpu3");
        pushButton_gpu3->setGeometry(QRect(890, 60, 421, 291));
        pushButton_gpu4 = new QPushButton(GPU_window);
        pushButton_gpu4->setObjectName("pushButton_gpu4");
        pushButton_gpu4->setGeometry(QRect(10, 430, 421, 291));
        pushButton_gpu5 = new QPushButton(GPU_window);
        pushButton_gpu5->setObjectName("pushButton_gpu5");
        pushButton_gpu5->setGeometry(QRect(450, 430, 421, 291));
        pushButton_gpu6 = new QPushButton(GPU_window);
        pushButton_gpu6->setObjectName("pushButton_gpu6");
        pushButton_gpu6->setGeometry(QRect(890, 430, 421, 291));
        label_gpu = new QLabel(GPU_window);
        label_gpu->setObjectName("label_gpu");
        label_gpu->setGeometry(QRect(20, 360, 411, 41));
        label_gpu_2 = new QLabel(GPU_window);
        label_gpu_2->setObjectName("label_gpu_2");
        label_gpu_2->setGeometry(QRect(450, 360, 411, 41));
        label_gpu_3 = new QLabel(GPU_window);
        label_gpu_3->setObjectName("label_gpu_3");
        label_gpu_3->setGeometry(QRect(890, 360, 411, 41));
        label_gpu_4 = new QLabel(GPU_window);
        label_gpu_4->setObjectName("label_gpu_4");
        label_gpu_4->setGeometry(QRect(10, 730, 411, 41));
        label_gpu_5 = new QLabel(GPU_window);
        label_gpu_5->setObjectName("label_gpu_5");
        label_gpu_5->setGeometry(QRect(450, 730, 411, 41));
        label_gpu_6 = new QLabel(GPU_window);
        label_gpu_6->setObjectName("label_gpu_6");
        label_gpu_6->setGeometry(QRect(890, 730, 411, 41));
        label_carrinho = new QLabel(GPU_window);
        label_carrinho->setObjectName("label_carrinho");
        label_carrinho->setGeometry(QRect(800, 10, 321, 41));

        retranslateUi(GPU_window);

        QMetaObject::connectSlotsByName(GPU_window);
    } // setupUi

    void retranslateUi(QDialog *GPU_window)
    {
        GPU_window->setWindowTitle(QCoreApplication::translate("GPU_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("GPU_window", "GPU LIST", nullptr));
        pushButton_gpu->setText(QString());
        pushButton_gpu2->setText(QString());
        pushButton_gpu3->setText(QString());
        pushButton_gpu4->setText(QString());
        pushButton_gpu5->setText(QString());
        pushButton_gpu6->setText(QString());
        label_gpu->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_gpu_2->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_gpu_3->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_gpu_4->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_gpu_5->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_gpu_6->setText(QCoreApplication::translate("GPU_window", "TextLabel", nullptr));
        label_carrinho->setText(QCoreApplication::translate("GPU_window", "carrinho R$ ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPU_window: public Ui_GPU_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPU_WINDOW_H
