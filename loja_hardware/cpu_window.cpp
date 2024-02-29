#include "cpu_window.h"
#include "ui_cpu_window.h"

cpu_window::cpu_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cpu_window)
{
    ui->setupUi(this);
}

cpu_window::~cpu_window()
{
    delete ui;
}
