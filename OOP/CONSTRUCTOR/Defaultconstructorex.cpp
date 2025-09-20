#include<iostream>
using namespace std;


class Employee{
    public:
    int id;
    string name;
    int salary;

    Employee(){
        id=101;
        name="pooja";
        salary=12,888;
    }
    void display(){
        cout<< id << name <<salary<<endl;
    }
};
int main(){
    Employee e1;
    e1.display();
}
