#include<iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string name;
    int balance;

   
    void deposit(int amount) {
        balance += amount; 
        cout << "Deposited: " << amount << endl;
    }

    
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount; 
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

   
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount ab;
    ab.accountNumber = 234557890;
    ab.name = "bhagyashri";
    ab.balance = 20000;

    ab.deposit(1000);       
    ab.withdraw(500);       
    ab.displayBalance();    

    return 0;
}
