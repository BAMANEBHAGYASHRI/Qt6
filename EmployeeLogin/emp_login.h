#ifndef EMP_LOGIN_H
#define EMP_LOGIN_H

#include <QMainWindow>
#include<QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class Emp_Login;
}
QT_END_NAMESPACE

class Emp_Login : public QMainWindow
{
    Q_OBJECT

public:
    Emp_Login(QWidget *parent = nullptr);
    ~Emp_Login();
public slots:
    void Mybtn();
    void Updater();

signals:
    void timerupdated(const QString &timeText);

private:
    Ui::Emp_Login *ui;
    QTimer *timer;
    int seconds=0;

};
#endif // EMP_LOGIN_H
