#include<iostream>
using namespace std;

class Employee{
    int x, y;
    public:
        Employee(int a, int b){
            x=a;
            y=b;
        }
    void display(){
        cout<<"ADDition::"<< x+y<<endl;
    }
};
int main(){
    Employee e1(10,20);
    e1.display();

}