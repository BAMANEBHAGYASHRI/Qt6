#include<iostream>
using namespace std;


class  animal{
    public:
    void eat(){
        cout <<"i am eating "<<endl;
    }
};
class dog:public animal{
    public:
    void  bark(){
        cout <<"i am barkingg"<<endl;
    }
};
int main(){
    dog d;
    d.eat();
    d.bark();
    return 0;
}