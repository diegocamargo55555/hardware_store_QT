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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_placa_mae_window
{
public:
    QLabel *label;
    QPushButton *pushButton_placa_mae;
    QPushButton *pushButton_placa_mae_2;
    QPushButton *pushButton_placa_mae_3;
    QPushButton *pushButton_placa_mae_4;
    QLabel *labelplacamae;
    QLabel *labelplacamae_2;
    QLabel *labelplacamae_3;
    QLabel *labelplacamae_4;
    QLabel *label_carrinho;

    void setupUi(QDialog *placa_mae_window)
    {
        if (placa_mae_window->objectName().isEmpty())
            placa_mae_window->setObjectName("placa_mae_window");
        placa_mae_window->resize(1458, 842);
        label = new QLabel(placa_mae_window);
        label->setObjectName("label");
        label->setGeometry(QRect(540, -10, 291, 71));
        pushButton_placa_mae = new QPushButton(placa_mae_window);
        pushButton_placa_mae->setObjectName("pushButton_placa_mae");
        pushButton_placa_mae->setGeometry(QRect(160, 50, 391, 341));
        pushButton_placa_mae_2 = new QPushButton(placa_mae_window);
        pushButton_placa_mae_2->setObjectName("pushButton_placa_mae_2");
        pushButton_placa_mae_2->setGeometry(QRect(800, 50, 391, 341));
        pushButton_placa_mae_3 = new QPushButton(placa_mae_window);
        pushButton_placa_mae_3->setObjectName("pushButton_placa_mae_3");
        pushButton_placa_mae_3->setGeometry(QRect(160, 450, 391, 341));
        pushButton_placa_mae_4 = new QPushButton(placa_mae_window);
        pushButton_placa_mae_4->setObjectName("pushButton_placa_mae_4");
        pushButton_placa_mae_4->setGeometry(QRect(800, 450, 391, 341));
        labelplacamae = new QLabel(placa_mae_window);
        labelplacamae->setObjectName("labelplacamae");
        labelplacamae->setGeometry(QRect(170, 400, 381, 41));
        labelplacamae_2 = new QLabel(placa_mae_window);
        labelplacamae_2->setObjectName("labelplacamae_2");
        labelplacamae_2->setGeometry(QRect(800, 400, 381, 41));
        labelplacamae_3 = new QLabel(placa_mae_window);
        labelplacamae_3->setObjectName("labelplacamae_3");
        labelplacamae_3->setGeometry(QRect(160, 800, 381, 41));
        labelplacamae_4 = new QLabel(placa_mae_window);
        labelplacamae_4->setObjectName("labelplacamae_4");
        labelplacamae_4->setGeometry(QRect(800, 800, 381, 41));
        label_carrinho = new QLabel(placa_mae_window);
        label_carrinho->setObjectName("label_carrinho");
        label_carrinho->setGeometry(QRect(860, 0, 321, 41));

        retranslateUi(placa_mae_window);

        QMetaObject::connectSlotsByName(placa_mae_window);
    } // setupUi

    void retranslateUi(QDialog *placa_mae_window)
    {
        placa_mae_window->setWindowTitle(QCoreApplication::translate("placa_mae_window", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("placa_mae_window", "placas mae", nullptr));
        pushButton_placa_mae->setText(QString());
        pushButton_placa_mae_2->setText(QString());
        pushButton_placa_mae_3->setText(QString());
        pushButton_placa_mae_4->setText(QString());
        labelplacamae->setText(QCoreApplication::translate("placa_mae_window", "TextLabel", nullptr));
        labelplacamae_2->setText(QCoreApplication::translate("placa_mae_window", "TextLabel", nullptr));
        labelplacamae_3->setText(QCoreApplication::translate("placa_mae_window", "TextLabel", nullptr));
        labelplacamae_4->setText(QCoreApplication::translate("placa_mae_window", "TextLabel", nullptr));
        label_carrinho->setText(QCoreApplication::translate("placa_mae_window", "carrinho R$ ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placa_mae_window: public Ui_placa_mae_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACA_MAE_WINDOW_H
