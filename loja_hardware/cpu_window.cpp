#include "cpu_window.h"
#include "ui_cpu_window.h"
#include "data.h"
cpu_window::cpu_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cpu_window)
{
    ui->setupUi(this);

    lista_processadores processor_preço[3];
    processor_preço[0].price = 55;
    processor_preço[1].price = 69;
    processor_preço[2].price = 88;

    processor_preço[0].name = "ryzen 5";
    processor_preço[1].name = "i5";
    processor_preço[2].name = "m1";



    QString str1 = "foo";
    QString str2 = "bar";
    QString text = QString(" %1 \n R$ %2.").arg(processor_preço[0].name, QString::number(processor_preço[0].price));
    ui->label_2->setText(text);
}

cpu_window::~cpu_window()
{
    delete ui;

    //label_2->setText(text); //if it's an existing one

}
