#include "cpu_window.h"
#include "ui_cpu_window.h"
#include "data.h"
#include <QFile>

cpu_window::cpu_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cpu_window)
{
    ui->setupUi(this);

    lista_processadores processores_list[3];
    processores_list[0].price = 99;
    processores_list[1].price = 469;
    processores_list[2].price = 88;

    processores_list[0].name = "ryzen 5";
    processores_list[1].name = "m1";
    processores_list[2].name = "i5";

    QVector< QVector< QPixmap > > pixmap_array;
    pixmap_array.resize(10);
    for (int i = 0; i < pixmap_array.size(); i++)
    {
        pixmap_array[i].resize(10);
    }
    pixmap_array[0][0] = QPixmap("/home/diego-d/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/ryzen5.jpg");
    pixmap_array[0][1] = QPixmap("/home/diego-d/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/m1.jpeg");
    pixmap_array[0][2] = QPixmap("/home/diego-d/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/i5.jpg");

    bubble_sort_crescente(processores_list, 3, pixmap_array);

    QIcon ButtonIcon(pixmap_array[0][0]);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(241,241));

    QIcon ButtonIcon1(pixmap_array[0][1]);
    ui->pushButton_2->setIcon(ButtonIcon1);
    ui->pushButton_2->setIconSize(QSize(241,241));

    QIcon ButtonIcon2(pixmap_array[0][2]);
    ui->pushButton_3->setIcon(ButtonIcon2);
    ui->pushButton_3->setIconSize(QSize(241,241));



/*
    QPixmap pixmap("/home/diego-d/Pictures/ryzen5.jpg");
    QIcon ButtonIcon(pixmap);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(241,241));
*/


    QStringList text;

    for (int i = 0; i < 3; i++) {
        text << QString(" %1 \n R$ %2.").arg(processores_list[i].name, QString::number(processores_list[i].price));
    }
    ui->label_2->setText(text[0]);
    ui->label_3->setText(text[1]);
    ui->label_4->setText(text[2]);

}

cpu_window::~cpu_window()
{
    delete ui;
}
