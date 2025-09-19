#include<iostream>
using namespace std;

class Student{
    int age;
    string name;

    public:
    Student(string n , int a){
        this->name=n;
        this->age=a;
    }
    Student(Student& s){
        name=s.name;
        age=s.age;
    }
    void display(){
        cout<<"name::"<< name <<"\n" <<"age::"<<age <<"\n" <<endl;
    }
};
int main(){
    Student s1("amit",90);
    Student s2(s1);
    s1.display();
    s2.display();
    return 0;
}
