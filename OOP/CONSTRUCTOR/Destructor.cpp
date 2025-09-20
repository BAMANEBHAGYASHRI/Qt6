#include<iostream>
using namespace std;

class Student{
    public:
    string name;

    Student(string n){
        name=n;
        cout<<"called form constructor::"<<name<<endl;
    }
    
    ~Student(){
        cout<<"callled from deconstructor::" <<name<<endl;
    }
};
int main(){
    Student s1("sri");
    Student s2("aaa");

    cout<<"main function called"<<endl;

    return 0;
}