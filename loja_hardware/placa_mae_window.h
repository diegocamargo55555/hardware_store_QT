#ifndef PLACA_MAE_WINDOW_H
#define PLACA_MAE_WINDOW_H

#include <QDialog>

namespace Ui {
class placa_mae_window;
}

class placa_mae_window : public QDialog
{
    Q_OBJECT

public:
    explicit placa_mae_window(QWidget *parent = nullptr);
    ~placa_mae_window();

private slots:
    void on_pushButton_placa_mae_clicked();

    void on_pushButton_placa_mae_2_clicked();

    void on_pushButton_placa_mae_3_clicked();

    void on_pushButton_placa_mae_4_clicked();

private:
    Ui::placa_mae_window *ui;
};

#endif // PLACA_MAE_WINDOW_H
