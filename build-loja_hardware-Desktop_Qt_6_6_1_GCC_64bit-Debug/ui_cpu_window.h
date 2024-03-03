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
    QLabel *label_carrinho;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QDialog *cpu_window)
    {
        if (cpu_window->objectName().isEmpty())
            cpu_window->setObjectName("cpu_window");
        cpu_window->resize(1575, 946);
        label = new QLabel(cpu_window);
        label->setObjectName("label");
        label->setGeometry(QRect(420, -10, 581, 71));
        pushButton = new QPushButton(cpu_window);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 50, 241, 241));
        pushButton_2 = new QPushButton(cpu_window);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 50, 241, 241));
        pushButton_3 = new QPushButton(cpu_window);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(600, 50, 241, 241));
        label_2 = new QLabel(cpu_window);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 300, 131, 31));
        label_3 = new QLabel(cpu_window);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 300, 131, 31));
        label_4 = new QLabel(cpu_window);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(600, 300, 121, 31));
        label_carrinho = new QLabel(cpu_window);
        label_carrinho->setObjectName("label_carrinho");
        label_carrinho->setGeometry(QRect(870, 10, 321, 41));
        pushButton_4 = new QPushButton(cpu_window);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(860, 50, 241, 241));
        pushButton_5 = new QPushButton(cpu_window);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1120, 50, 241, 241));
        pushButton_6 = new QPushButton(cpu_window);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(80, 350, 241, 241));
        pushButton_7 = new QPushButton(cpu_window);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(340, 350, 241, 241));
        pushButton_8 = new QPushButton(cpu_window);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(600, 350, 241, 241));
        pushButton_9 = new QPushButton(cpu_window);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(860, 350, 241, 241));
        label_5 = new QLabel(cpu_window);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(860, 300, 121, 31));
        label_6 = new QLabel(cpu_window);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1120, 300, 121, 31));
        label_7 = new QLabel(cpu_window);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 600, 121, 31));
        label_8 = new QLabel(cpu_window);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(340, 600, 121, 31));
        label_9 = new QLabel(cpu_window);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(600, 600, 121, 31));
        label_10 = new QLabel(cpu_window);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(860, 600, 121, 31));

        retranslateUi(cpu_window);

        QMetaObject::connectSlotsByName(cpu_window);
    } // setupUi

    void retranslateUi(QDialog *cpu_window)
    {
        cpu_window->setWindowTitle(QCoreApplication::translate("cpu_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("cpu_window", "lista de processadores", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_2->setText(QCoreApplication::translate("cpu_window", "processor 1", nullptr));
        label_3->setText(QCoreApplication::translate("cpu_window", "processor 2", nullptr));
        label_4->setText(QCoreApplication::translate("cpu_window", "processor 3", nullptr));
        label_carrinho->setText(QCoreApplication::translate("cpu_window", "carrinho R$ ", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_5->setText(QCoreApplication::translate("cpu_window", "processor 4", nullptr));
        label_6->setText(QCoreApplication::translate("cpu_window", "processor 5", nullptr));
        label_7->setText(QCoreApplication::translate("cpu_window", "processor 6", nullptr));
        label_8->setText(QCoreApplication::translate("cpu_window", "processor 7", nullptr));
        label_9->setText(QCoreApplication::translate("cpu_window", "processor 8", nullptr));
        label_10->setText(QCoreApplication::translate("cpu_window", "processor 9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cpu_window: public Ui_cpu_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPU_WINDOW_H
