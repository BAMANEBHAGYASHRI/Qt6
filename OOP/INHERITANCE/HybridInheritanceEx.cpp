#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
     void setEmployee(int i , string n){
        id=i;
        name=n;
     }
     void displayEmployee(){
        cout<<"id::"<<id<<endl;
        cout<<"name::"<<name<<endl;
     }
};
class  Department:virtual public Employee{
    public:  
    string deptName;
    void setDeptName(string n){
        deptName=n;
    }
    void displayDepartment(){
        cout<<"Department name::"<<deptName<<endl;
    }
};
class Salary: virtual public Employee{
    public:
   float basicSalary;
    void setSalary(float s){
        basicSalary=s;
    }
    void displaySalary(){
        cout<<"salary::"<<basicSalary<<endl;
    }
};
class Manager: public  Department , public  Salary{
    public:
    void displayManager(){
        displayEmployee();
        displayDepartment();
        displaySalary();
    }
};
int main(){
    Manager m;


    m.setEmployee(201, "John Doe");
    m.setDeptName("IT");
    m.setSalary(75000);



    m.displayManager();
    return 0;
}