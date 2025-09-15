#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

public slots:
    void setdata(const QString &email , const QString &password);

private slots:
    void onLogin();

private:
    Ui::LoginDialog *ui;
    QString storedEmail;
    QString storedPassword;
};

#endif // LOGINDIALOG_H
