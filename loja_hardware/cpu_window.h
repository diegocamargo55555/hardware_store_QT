#ifndef CPU_WINDOW_H
#define CPU_WINDOW_H

#include <QDialog>

namespace Ui {
class cpu_window;
}

class cpu_window : public QDialog
{
    Q_OBJECT

public:
    explicit cpu_window(QWidget *parent = nullptr);
    ~cpu_window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::cpu_window *ui;
};

#endif // CPU_WINDOW_H
