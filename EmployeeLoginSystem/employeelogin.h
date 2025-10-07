#ifndef EMPLOYEELOGIN_H
#define EMPLOYEELOGIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class EmployeeLogin;
}
QT_END_NAMESPACE

class EmployeeLogin : public QMainWindow
{
    Q_OBJECT

public:
    EmployeeLogin(QWidget *parent = nullptr);
    ~EmployeeLogin();

private:
    Ui::EmployeeLogin *ui;
};
#endif // EMPLOYEELOGIN_H
