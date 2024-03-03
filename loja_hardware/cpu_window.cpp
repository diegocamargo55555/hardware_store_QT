#include "cpu_window.h"
#include "ui_cpu_window.h"
#include "data.h"
cpu_window::cpu_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cpu_window)
{
    ui->setupUi(this);

    lista_processadores processores_list[3];
    processores_list[0].price = 55;
    processores_list[1].price = 469;
    processores_list[2].price = 88;

    processores_list[0].name = "ryzen 5";
    processores_list[1].name = "i5";
    processores_list[2].name = "m1";

    QStringList text;

//    text << processores_list[0].name << processores_list[0].name;


    for (int i = 0; i < 3; i++) {
        text << QString(" %1 \n R$ %2.").arg(processores_list[i].name, QString::number(processores_list[i].price));

    }
//    text << QString(" %1 \n R$ %2.").arg(processores_list[0].name, QString::number(processores_list[0].price));


    ui->label_2->setText(text[0]);
    ui->label_3->setText(text[1]);
    ui->label_4->setText(text[2]);

}

cpu_window::~cpu_window()
{
    delete ui;

    //label_2->setText(text); //if it's an existing one

}
