#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QDate>
#include <QMainWindow>
#include<QTimer>
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
    void myFunction();

    void addEmployee();

    void showCurrentEmployee( const QString &id, const QString &ename);

     void updateTimerLabel(const QString &timeText);



private:
    Ui::MainWindow *ui;

    // QTimer *timer;
    // QDate *date;

    void clearAll();
};
#endif // MAINWINDOW_H
