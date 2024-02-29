#include "gpu_window.h"
#include "ui_gpu_window.h"

GPU_window::GPU_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GPU_window)
{
    ui->setupUi(this);
}

GPU_window::~GPU_window()
{
    delete ui;
}
