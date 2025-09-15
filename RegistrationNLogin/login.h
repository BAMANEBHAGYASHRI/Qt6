#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

public slots:
    void setdata(const QString &email, const QString &password);

private slots:
    void onLoginClicked();

private:
    Ui::Login *ui;
    QString storedEmail;
    QString storedPassword;
};

#endif
