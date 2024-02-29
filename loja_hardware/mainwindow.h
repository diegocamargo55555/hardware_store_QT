#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_cpu_menu_clicked();

    void on_placa_mae_menu_clicked();

    void on_gpu_menu_clicked();

    void on_fonte_menu_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
