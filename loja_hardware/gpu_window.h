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

private:
    Ui::GPU_window *ui;
};

#endif // GPU_WINDOW_H
