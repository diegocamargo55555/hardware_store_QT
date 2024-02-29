/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *cpu_menu;
    QPushButton *placa_mae_menu;
    QPushButton *gpu_menu;
    QPushButton *fonte_menu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cpu_menu = new QPushButton(centralwidget);
        cpu_menu->setObjectName("cpu_menu");
        cpu_menu->setGeometry(QRect(20, 40, 121, 81));
        placa_mae_menu = new QPushButton(centralwidget);
        placa_mae_menu->setObjectName("placa_mae_menu");
        placa_mae_menu->setGeometry(QRect(20, 150, 121, 81));
        gpu_menu = new QPushButton(centralwidget);
        gpu_menu->setObjectName("gpu_menu");
        gpu_menu->setGeometry(QRect(20, 260, 121, 81));
        fonte_menu = new QPushButton(centralwidget);
        fonte_menu->setObjectName("fonte_menu");
        fonte_menu->setGeometry(QRect(20, 370, 121, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        cpu_menu->setText(QCoreApplication::translate("MainWindow", "Processadores", nullptr));
        placa_mae_menu->setText(QCoreApplication::translate("MainWindow", "Placa m\303\243e", nullptr));
        gpu_menu->setText(QCoreApplication::translate("MainWindow", "Placa de video", nullptr));
        fonte_menu->setText(QCoreApplication::translate("MainWindow", "Fonte", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
