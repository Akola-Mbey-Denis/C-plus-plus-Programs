#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void digit_pressed();
   // void on_pushButton_Key_Point_clicked();
    void on_pushButton_Key_Point_released();
    void unary_operation_pressed();

    void on_pushButton_Clear_released();
    void on_pushButton_Equal_Sign_released();
    void binary_Operation_pressed();
};
#endif // MAINWINDOW_H
