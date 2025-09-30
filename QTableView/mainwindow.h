#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QStandardItemModel>
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
public slots:
    void addEmployee();

private slots:
    void on_comboBoxDept_activated(int index);

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
};
#endif // MAINWINDOW_H
