#include<iostream>
using namespace std;


class  BankAccount{
    public:
    int accountnumber;
    double balance;

    BankAccount(int acc , int bal){
        accountnumber=acc;
        balance=bal;
    }
    BankAccount(const BankAccount& b){
        accountnumber=b.accountnumber;
        balance=b.balance;
        cout<<"copy constructor successfully" <<endl;
    }
    void display(){
        cout<<"accountnumber::" <<accountnumber<<endl;
        cout<<"balance::" <<balance<<endl;
    }
};
int main(){
    BankAccount ba1(12345,78990);
    BankAccount ba2=ba1;
    ba1.display();
    ba2.display();
}