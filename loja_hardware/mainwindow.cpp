#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cpu_window.h"
#include "placa_mae_window.h"
#include "gpu_window.h""
#include "fonte_window.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cpu_menu_clicked()
{
    cpu_window process_window;
    process_window.setModal(true);
    process_window.exec();
}

void MainWindow::on_placa_mae_menu_clicked()
{
    placa_mae_window mother_window;
    mother_window.setModal(true);
    mother_window.exec();
}

void MainWindow::on_gpu_menu_clicked()
{
    GPU_window open_gpu_window;
    open_gpu_window.setModal(true);
    open_gpu_window.exec();
}

void MainWindow::on_fonte_menu_clicked()
{
    fonte_window open_fonte_window;
    open_fonte_window.setModal(true);
    open_fonte_window.exec();
}

