#include<iostream>
using namespace std;
class  Person{
    public:
    string name;
    void setName(string n){
        name=n;
    }
    void displayName(){
        cout<<"Name::"<<name<<endl;
    }
};
class  Student:public Person{
    public:
    void  study(){
        cout<<"I am studying"<<endl;
    }
};
class Teacher:public Person{
    public:
    void teach(){
        cout<<"i am teaching"<<endl;
    }
};
int main(){
    Student s;
    Teacher t;
    s.setName("priyaa");
    t.setName("poojaa");


    s.displayName();
    t.displayName();
    return 0;
}