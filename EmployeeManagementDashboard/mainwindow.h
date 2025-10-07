#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// QT_BEGIN_NAMESPACE
// namespace Ui {
// class MainWindow;
// }
// QT_END_NAMESPACE


class QStackedWidget;
class emp_login;
class Employeedata;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QStackedWidget *Stackwidget;
    emp_login *login;
    Employeedata *empdata;
};
#endif // MAINWINDOW_H
