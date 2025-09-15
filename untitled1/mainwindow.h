#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "timerclass.h"
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
    void on_dial_valueChanged(int value);

    void customeslot(int value);
private:
    Ui::MainWindow *ui;
    TimerClass *TimerObj;
};
#endif // MAINWINDOW_H
