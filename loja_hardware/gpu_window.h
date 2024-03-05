#ifndef GPU_WINDOW_H
#define GPU_WINDOW_H

#include <QDialog>

namespace Ui {
class GPU_window;
}

class GPU_window : public QDialog
{
    Q_OBJECT

public:
    explicit GPU_window(QWidget *parent = nullptr);
    ~GPU_window();

private slots:
    void on_pushButton_gpu_clicked();

    void on_pushButton_gpu2_clicked();

    void on_pushButton_gpu3_clicked();

    void on_pushButton_gpu4_clicked();

    void on_pushButton_gpu5_clicked();

    void on_pushButton_gpu6_clicked();

private:
    Ui::GPU_window *ui;
};

#endif // GPU_WINDOW_H
