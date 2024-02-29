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

private:
    Ui::fonte_window *ui;
};

#endif // FONTE_WINDOW_H
