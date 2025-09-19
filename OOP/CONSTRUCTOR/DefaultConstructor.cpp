#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    student(){
        name="bhagyashri";
        age=21;
        cout<<"Default constructor"<<endl;
    }
    void display(){
        cout<<"name::"<<name<<endl;
        cout<<"age::"<<age<<endl;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}
