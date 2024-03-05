#include <QFile>
#include "gpu_window.h"
#include "ui_gpu_window.h"
#include "ordem.h"
#include "global.h"

lista_de_produtos gpu_lista[7];

GPU_window::GPU_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GPU_window)
{
    ui->setupUi(this);


    gpu_lista[0].price = 12899.99;
    gpu_lista[1].price = 1799.99;
    gpu_lista[2].price = 4969.85;
    gpu_lista[3].price = 3239.99;
    gpu_lista[4].price = 1799.99;
    gpu_lista[5].price = 6499.99;

    gpu_lista[0].name = "RTX 4090 Asus NVIDIA TUF Gaming GeForce Edition, 24GB";
    gpu_lista[1].name = "RTX 4060 WINDFORCE OC, 8GB";
    gpu_lista[2].name = "RTX 4070 EX Gamer GALAX NVIDIA GeForce, 12 GB";
    gpu_lista[3].name = "ASROCK RADEON RX 7700 XT PHANTOM GAMING OC, 12GB";
    gpu_lista[4].name = "RX 7600 GAMING OC, 8GB";
    gpu_lista[5].name = "RX 7900 XTX Sapphire AMD, 24 GB";

    QVector< QVector< QPixmap > > pixmap_array_gpu;
    pixmap_array_gpu.resize(10);
    for (int i = 0; i < pixmap_array_gpu.size(); i++)
    {
        pixmap_array_gpu[i].resize(10);
    }

    pixmap_array_gpu[0][0] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/4090.jpg");
    pixmap_array_gpu[0][1] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/4060.jpg");
    pixmap_array_gpu[0][2] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/4070.jpg");
    pixmap_array_gpu[0][3] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/7700xt.jpg");
    pixmap_array_gpu[0][4] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/7600.jpg");
    pixmap_array_gpu[0][5] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/gpu/7900xtx.jpg");

    bubble_crescente(gpu_lista, 6, pixmap_array_gpu);

    QIcon ButtonIcongpu(pixmap_array_gpu[0][0]);
    ui->pushButton_gpu->setIcon(ButtonIcongpu);
    ui->pushButton_gpu->setIconSize(QSize(241,241));

    QIcon ButtonIcongpu1(pixmap_array_gpu[0][1]);
    ui->pushButton_gpu2->setIcon(ButtonIcongpu1);
    ui->pushButton_gpu2->setIconSize(QSize(241,241));

    QIcon ButtonIcongpu2(pixmap_array_gpu[0][2]);
    ui->pushButton_gpu3->setIcon(ButtonIcongpu2);
    ui->pushButton_gpu3->setIconSize(QSize(241,241));

    QIcon ButtonIcongpu3(pixmap_array_gpu[0][3]);
    ui->pushButton_gpu4->setIcon(ButtonIcongpu3);
    ui->pushButton_gpu4->setIconSize(QSize(241,241));

    QIcon ButtonIcongpu4(pixmap_array_gpu[0][4]);
    ui->pushButton_gpu5->setIcon(ButtonIcongpu4);
    ui->pushButton_gpu5->setIconSize(QSize(241,241));

    QIcon ButtonIcongpu5(pixmap_array_gpu[0][5]);
    ui->pushButton_gpu6->setIcon(ButtonIcongpu5);
    ui->pushButton_gpu6->setIconSize(QSize(241,241));

    QStringList text;

    for (int i = 0; i < 7; i++) {
        text << QString(" %1 \n R$ %2.").arg(gpu_lista[i].name, QString::number(gpu_lista[i].price));
    }
    ui->label_gpu->setText(text[0]);
    ui->label_gpu_2->setText(text[1]);
    ui->label_gpu_3->setText(text[2]);
    ui->label_gpu_4->setText(text[3]);
    ui->label_gpu_5->setText(text[4]);
    ui->label_gpu_6->setText(text[5]);
}

GPU_window::~GPU_window()
{
    delete ui;
}

void GPU_window::on_pushButton_gpu_clicked()
{
    carrinho += gpu_lista[0].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void GPU_window::on_pushButton_gpu2_clicked()
{
    carrinho += gpu_lista[1].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void GPU_window::on_pushButton_gpu3_clicked()
{
    carrinho += gpu_lista[2].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void GPU_window::on_pushButton_gpu4_clicked()
{
    carrinho += gpu_lista[3].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void GPU_window::on_pushButton_gpu5_clicked()
{
    carrinho += gpu_lista[4].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void GPU_window::on_pushButton_gpu6_clicked()
{
    carrinho += gpu_lista[5].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}
