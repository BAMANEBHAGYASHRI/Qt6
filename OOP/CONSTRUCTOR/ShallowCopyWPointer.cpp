#include<iostream>
using namespace std;

class  Employee{
    int *id;
    int *salary;
    string *name;

    public:
        Employee(int i , int s, string n){
            id=new int(i);
            salary=new int(s);
            name=new string(n);
        }
    //     Employee(const Employee& e){
    //         id=new int(*e.id);
    //         salary=new int(*e.salary);
    //         name=new string(*e.name);
    //     }
         void getvalue() {
        cout << "ID: " << *id << ", Salary: " << *salary << ", Name: " << *name << endl;
    }
    //      ~Employee() {
    //     delete id;
    //     delete salary;
    //     delete name;
    // }
};
int main(){
    Employee e1(1,100000 ,"pooja");
    Employee e2=e1;
    
    // cout<<"before chnage" <<endl;
    e1.getvalue();
    e2.getvalue();

    // *e2.id=2;
    // *e2.salary = 50000;
    // *e2.name = "Sarita";

    // cout<<"after chnage"<<endl;
    // e1.getvalue();
    // e2.getvalue();



    return 0;



}