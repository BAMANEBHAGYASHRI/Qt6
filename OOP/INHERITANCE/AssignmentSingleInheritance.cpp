#include<iostream>
using namespace std;
class  Animal{
    public:
    string name;
    void setName(string s){
        name=s;
    }
    void displayname(){
        cout<<"Name::"<<name<<endl;
    }
};
class Dog :public Animal{
    public:
    void bark(){
        cout<<"dog is barking..."<<endl;
    }
};
int main(){
    Dog d;
    d.setName("bunny");
    d.displayname();
    d.bark();
    return 0;
}