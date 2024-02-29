#include "placa_mae_window.h"
#include "ui_placa_mae_window.h"

placa_mae_window::placa_mae_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::placa_mae_window)
{
    ui->setupUi(this);
}

placa_mae_window::~placa_mae_window()
{
    delete ui;
}
