#include<iostream>
using namespace std;

class  Grandparent{
    public:
    void displayGrandparent(){
        cout<<"I am Grandparent"<<endl;
    }
};
class Parent:public Grandparent{
    public:
    void displayParent(){
        cout<<"I am Parent"<<endl;
    }
};
class  Child:public Parent{
    public:
    void displayChild(){
        cout<<"I am Child"<<endl;
    }
};
int main(){
    Child c;
    c.displayGrandparent();
    c.displayParent();
    c.displayChild();

    return 0;
}