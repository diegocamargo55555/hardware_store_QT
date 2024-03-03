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

private:
    Ui::cpu_window *ui;
};

#endif // CPU_WINDOW_H
