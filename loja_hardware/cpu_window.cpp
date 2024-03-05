#include "cpu_window.h"
#include "ui_cpu_window.h"
#include "data.h"
#include "global.h"
#include <QFile>

lista_de_produtos processores_list[9];

cpu_window::cpu_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cpu_window)
{
    ui->setupUi(this);

    ;

    processores_list[0].price = 3749.99;
    processores_list[1].price = 2899.99;
    processores_list[2].price = 2249.99;
    processores_list[3].price = 819.99;
    processores_list[4].price = 1999.99;
    processores_list[5].price = 4399.99;
    processores_list[6].price = 3499.99;
    processores_list[7].price = 1599.99;
    processores_list[8].price = 55999.99;

    processores_list[0].name = "I9-14900KF";
    processores_list[1].name = "I7-14700K";
    processores_list[2].name = "I5-14600K";
    processores_list[3].name = "I3-14100F";
    processores_list[4].name = "RYZEN 7 5700X3D";
    processores_list[5].name = "RYZEN 9 7950X3D";
    processores_list[6].name = "RYZEN 9 7900X3D";
    processores_list[7].name = "RYZEN 5 7600X";
    processores_list[8].name = "RYZEN THREADRIPPER PRO 7985WX";


    QVector< QVector< QPixmap > > pixmap_array;
    pixmap_array.resize(10);
    for (int i = 0; i < pixmap_array.size(); i++)
    {
        pixmap_array[i].resize(10);
    }
    pixmap_array[0][0] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/i9.jpg");
    pixmap_array[0][1] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/i7.jpg");
    pixmap_array[0][2] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/i5.jpg");
    pixmap_array[0][3] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/i3.jpg");
    pixmap_array[0][4] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/ryzen 7.jpg");
    pixmap_array[0][5] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/ryzen9 7950x3d.jpg");
    pixmap_array[0][6] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/RYZEN 9 7900X3D.jpg");
    pixmap_array[0][7] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/RYZEN 5 7600X.jpg");
    pixmap_array[0][8] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/processadores/THREADRIPPER.jpg");

    bubble_sort_decrescente(processores_list, 9, pixmap_array);

    QIcon ButtonIcon(pixmap_array[0][0]);
    ui->pushButton->setIcon(ButtonIcon);
    ui->pushButton->setIconSize(QSize(241,241));

    QIcon ButtonIcon1(pixmap_array[0][1]);
    ui->pushButton_2->setIcon(ButtonIcon1);
    ui->pushButton_2->setIconSize(QSize(241,241));

    QIcon ButtonIcon2(pixmap_array[0][2]);
    ui->pushButton_3->setIcon(ButtonIcon2);
    ui->pushButton_3->setIconSize(QSize(241,241));

    QIcon ButtonIcon3(pixmap_array[0][3]);
    ui->pushButton_4->setIcon(ButtonIcon3);
    ui->pushButton_4->setIconSize(QSize(241,241));

    QIcon ButtonIcon4(pixmap_array[0][4]);
    ui->pushButton_5->setIcon(ButtonIcon4);
    ui->pushButton_5->setIconSize(QSize(241,241));

    QIcon ButtonIcon5(pixmap_array[0][5]);
    ui->pushButton_6->setIcon(ButtonIcon5);
    ui->pushButton_6->setIconSize(QSize(241,241));

    QIcon ButtonIcon7(pixmap_array[0][6]);
    ui->pushButton_7->setIcon(ButtonIcon7);
    ui->pushButton_7->setIconSize(QSize(241,241));

    QIcon ButtonIcon8(pixmap_array[0][7]);
    ui->pushButton_8->setIcon(ButtonIcon8);
    ui->pushButton_8->setIconSize(QSize(241,241));

    QIcon ButtonIcon9(pixmap_array[0][8]);
    ui->pushButton_9->setIcon(ButtonIcon9);
    ui->pushButton_9->setIconSize(QSize(241,241));

    QStringList text;

    for (int i = 0; i < 9; i++) {
        text << QString(" %1 \n R$ %2.").arg(processores_list[i].name, QString::number(processores_list[i].price));
    }
    ui->label_2->setText(text[0]);
    ui->label_3->setText(text[1]);
    ui->label_4->setText(text[2]);
    ui->label_5->setText(text[3]);
    ui->label_6->setText(text[4]);
    ui->label_7->setText(text[5]);
    ui->label_8->setText(text[6]);
    ui->label_9->setText(text[7]);
    ui->label_10->setText(text[8]);


}

cpu_window::~cpu_window()
{
    delete ui;
}

void cpu_window::on_pushButton_clicked()
{
    carrinho += processores_list[0].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_2_clicked()
{
    carrinho += processores_list[1].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_3_clicked()
{
    carrinho += processores_list[2].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_4_clicked()
{
    carrinho += processores_list[3].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_5_clicked()
{
    carrinho += processores_list[4].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_6_clicked()
{
    carrinho += processores_list[5].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_7_clicked()
{
    carrinho += processores_list[6].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_8_clicked()
{
    carrinho += processores_list[7].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void cpu_window::on_pushButton_9_clicked()
{
    carrinho += processores_list[8].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

