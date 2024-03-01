#include "fonte_window.h"
#include "ui_fonte_window.h"

fonte_window::fonte_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::fonte_window)
{
    ui->setupUi(this);
}

fonte_window::~fonte_window()
{
    delete ui;
}


