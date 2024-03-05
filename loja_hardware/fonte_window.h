#ifndef FONTE_WINDOW_H
#define FONTE_WINDOW_H

#include <QDialog>

namespace Ui {
class fonte_window;
}

class fonte_window : public QDialog
{
    Q_OBJECT

public:
    explicit fonte_window(QWidget *parent = nullptr);
    ~fonte_window();

private slots:
    void on_pushButton_fontes_clicked();

    void on_pushButton_fontes2_clicked();

    void on_pushButton_fontes3_clicked();

    void on_pushButton_fontes4_clicked();

private:
    Ui::fonte_window *ui;
};

#endif // FONTE_WINDOW_H
