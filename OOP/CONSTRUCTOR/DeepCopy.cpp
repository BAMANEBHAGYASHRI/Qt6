#include<iostream>
using namespace std;

class Student{
    public:
    int* id;
    string* name;
    int*age;


    public:
    Student(int i, string n , int a){
        id=new int(i);
        name=new string(n);
        age=new int(a);
    }
    Student(const Student& s){
        id=new int(*s.id);
        name=new string(*s.name);
        age=new int(*s.age);
    }
    void display(){
        cout<< "id::"<<*id <<endl << "name::" << *name <<endl<<"age::" <<*age <<endl;
    }       
    ~Student(){
        delete id;
        delete name;
        delete age;
    }
};
int main(){
    Student s1(1,"pooja", 12);
    Student s2=s1;

    cout<<"before change::"<<endl;
    s1.display();
    cout<<"-----------"<<endl;
    s2.display();


    // modify s2

    *s2.id=2;
    *s2.name="shruti";
    *s2.age=15;
 cout<<"***************************************"<<endl;
    cout<<"After change::"<<endl;
    s1.display();
    cout<<"-----------"<<endl;
    s2.display();






}