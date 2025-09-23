#include<iostream>
using namespace std;

class Shape{
    public:
    void display(){
        cout<<"this is shape"<<endl;

    }
};
class  Circle:public Shape{
    public:
    void area(int r){
        cout<<"area of circle::"<<3.14*r*r<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void area(int l ,int b){
        cout<<"Area of rectangle::"<<l*b<<endl;

    }
};

int main(){
    Circle c;
    Rectangle r;

    c.display();
    c.area(3);

    r.display();
    r.area(3,2);

    return 0;
}