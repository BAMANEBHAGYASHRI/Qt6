#include<iostream>
using namespace std;

class BankAccount{
    private:
    double balance;

    public:
    BankAccount(double b){
        balance=b;
    }

    void deposite(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
        }
        else{
            cout<<"insufficient funds"<<endl;
        }
    }

    double getbalance(){
        return balance;
    }
};
int main(){
    BankAccount acc(1000);
    acc.deposite(500);
    acc.withdraw(200);
    cout<<"balance::"<<acc.getbalance()<<endl;
}