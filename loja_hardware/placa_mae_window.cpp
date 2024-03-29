#include "placa_mae_window.h"
#include "ui_placa_mae_window.h"
#include "data_placa.h"
#include "global.h"
#include <assert.h>
lista_de_produtos placa_mae[4];

placa_mae_window::placa_mae_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::placa_mae_window)
{
    ui->setupUi(this);

    float *p_price = new float[4];
    p_price[0] = 395.99;
    p_price[1] = 2199.99;
    p_price[2] = 1739.99;
    p_price[3] = 599.99;

    placa_mae[0].price =395.99;
    placa_mae[1].price =2199.99;
    placa_mae[2].price = 1739.99;
    placa_mae[3].price = 599.99;

    placa_mae[0].name = "PLACA MAE BIOSTAR A520M, DDR4, SOCKET AMD AM4";
    placa_mae[1].name = "PLACA MAE ASROCK X570 TAICHI DDR4 SOCKET AM4";
    placa_mae[2].name = "PLACA MAE ASUS PRIME Z790-P D4, DDR4, SOCKET LGA1700";
    placa_mae[3].name = "PLACA MAE ASUS PRIME H610M-E D4, DDR4, SOCKET LGA1700";

    QVector< QVector< QPixmap > > pixmap_array_placamae;
    pixmap_array_placamae.resize(10);
    for (int i = 0; i < pixmap_array_placamae.size(); i++)
    {
        pixmap_array_placamae[i].resize(10);
    }

    pixmap_array_placamae[0][0] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/placamae/a520.jpg");
    pixmap_array_placamae[0][1] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/placamae/x570.jpg");
    pixmap_array_placamae[0][2] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/placamae/z790.jpg");
    pixmap_array_placamae[0][3] = QPixmap("/home/diego/Documents/git/universidade/hardware_store_QT/loja_hardware/imagens/placamae/h610.jpg");

    bubble_sort_crescente(placa_mae, 4, pixmap_array_placamae);

    p_price[0] = placa_mae[0].price;
    p_price[1] = placa_mae[1].price;
    p_price[2] = placa_mae[2].price;
    p_price[3] = placa_mae[3].price;

    for (int i = 0; i < 3; ++i) {
        assert(placa_mae[i].price >= placa_mae[i+1].price);
    }


    QIcon ButtonIconplacamae(pixmap_array_placamae[0][0]);
    ui->pushButton_placa_mae->setIcon(ButtonIconplacamae);
    ui->pushButton_placa_mae->setIconSize(QSize(241,241));

    QIcon ButtonIconplacamae1(pixmap_array_placamae[0][1]);
    ui->pushButton_placa_mae_2->setIcon(ButtonIconplacamae1);
    ui->pushButton_placa_mae_2->setIconSize(QSize(241,241));

    QIcon ButtonIconplacamae2(pixmap_array_placamae[0][2]);
    ui->pushButton_placa_mae_3->setIcon(ButtonIconplacamae2);
    ui->pushButton_placa_mae_3->setIconSize(QSize(241,241));

    QIcon ButtonIconplacamae3(pixmap_array_placamae[0][3]);
    ui->pushButton_placa_mae_4->setIcon(ButtonIconplacamae3);
    ui->pushButton_placa_mae_4->setIconSize(QSize(241,241));

    QStringList text;

    int j = 0;
    for (int i = 0; i < 4; i++) {
        text << QString(" %1 \n R$ %2.").arg(placa_mae[i].name, QString::number(*(p_price + i)));
        j += 4;
    }
    ui->labelplacamae->setText(text[0]);
    ui->labelplacamae_2->setText(text[1]);
    ui->labelplacamae_3->setText(text[2]);
    ui->labelplacamae_4->setText(text[3]);
}

placa_mae_window::~placa_mae_window()
{
    delete ui;
}

void placa_mae_window::on_pushButton_placa_mae_clicked()
{
    carrinho += placa_mae[0].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void placa_mae_window::on_pushButton_placa_mae_2_clicked()
{
    carrinho += placa_mae[1].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void placa_mae_window::on_pushButton_placa_mae_3_clicked()
{
    carrinho += placa_mae[2].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}

void placa_mae_window::on_pushButton_placa_mae_4_clicked()
{
    carrinho += placa_mae[3].price;
    QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);
    ui->label_carrinho->setText(carrinho_text);
}
