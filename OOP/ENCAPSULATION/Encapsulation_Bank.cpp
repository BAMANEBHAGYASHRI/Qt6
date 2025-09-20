#include<iostream>
using namespace std;

class BankAccount{
    double balance;
    public:
    BankAccount(double bal){
        if(bal>=0){
            balance=bal;
        }
        else{
            balance=0;
        }
    }
    double getbalance(){
        return balance;
    }
    void deposite(double amount){
        if(amount>0){
        balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdraw amount!" << endl;
        }
        
    }
};
int main(){
     BankAccount b(500);
    cout << "Initial Balance: " << b.getbalance()<< endl;

    b.deposite(200);
    b.withdraw(100);
    b.withdraw(20);
    b.deposite(100);

    
    cout << "Final Balance: " << b.getbalance() << endl;

    return 0;
}