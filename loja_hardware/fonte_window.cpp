#include "fonte_window.h"
#include "ui_fonte_window.h"
#include "data_main.h"
#include "global.h"
#include <QFile>



lista_de_produtos fontes[4];


fonte_window::fonte_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fonte_window)
{
    ui->setupUi(this);


    fontes[0].price =249.99;
    fontes[1].price =1529.99;
    fontes[2].price = 329.99;
    fontes[3].price = 999.99;

    fontes[0].name = "FONTE AEROCOOL KCAS 500W BRONZE 80 PLUS, EN53367";
    fontes[1].name = "FONTE GAMDIAS HELIOS P2-1000G, 1000W, FULL MODULAR, ATX 3.0, PCIE 5.0, 80 PLUS GOLD, PRETO, HELIOS-P2-1000G";
    fontes[2].name = "FONTE AEROCOOL KCAS FULL RANGE, 700W, 80 PLUS BRONZE , KCAS-700W";
    fontes[3].name = "FONTE GAMDIAS HELIOS P2-850G, 850W, ATX 3.0, PCIE 5.0, 80 PLUS GOLD, PRETO, HELIOS-P2-850G";

    QVector< QVector< QPixmap > > pixmap_array_fonte;
    pixmap_array_fonte.resize(10);
    for (int i = 0; i < pixmap_array_fonte.size(); i++)
    {
        pixmap_array_fonte[i].resize(10);
    }
    pixmap_array_fonte[0][0] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/fontes/AEROCOOL.jpg");
    pixmap_array_fonte[0][1] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/fontes/GAMDIAS HELIOS.jpg");
    pixmap_array_fonte[0][2] = QPixmap("//home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/fontes/AEROCOOL KCAS FULL RANGE, 700W.jpg");
    pixmap_array_fonte[0][3] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/fontes/GAMDIAS HELIOS P2-850G, 850W.jpg");

    bubble_decrescente(fontes, 4, pixmap_array_fonte);

    QIcon ButtonIconfonte(pixmap_array_fonte[0][0]);
    ui->pushButton_fontes->setIcon(ButtonIconfonte);
    ui->pushButton_fontes->setIconSize(QSize(241,241));

    QIcon ButtonIconfonte1(pixmap_array_fonte[0][1]);
    ui->pushButton_fontes2->setIcon(ButtonIconfonte1);
    ui->pushButton_fontes2->setIconSize(QSize(241,241));

    QIcon ButtonIconfonte2(pixmap_array_fonte[0][2]);
    ui->pushButton_fontes3->setIcon(ButtonIconfonte2);
    ui->pushButton_fontes3->setIconSize(QSize(241,241));

    QIcon ButtonIconfonte3(pixmap_array_fonte[0][3]);
    ui->pushButton_fontes4->setIcon(ButtonIconfonte3);
    ui->pushButton_fontes4->setIconSize(QSize(241,241));

    QStringList text;

    for (int i = 0; i < 4; i++) {
        text << QString(" %1 \n R$ %2.").arg(fontes[i].name, QString::number(fontes[i].price));
    }
    ui->label->setText(text[0]);
    ui->label_2->setText(text[1]);
    ui->label_3->setText(text[2]);
    ui->label_4->setText(text[3]);

}

fonte_window::~fonte_window()
{
    delete ui;
}



void fonte_window::on_pushButton_fontes_clicked()
{
    carrinho += fontes[0].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

