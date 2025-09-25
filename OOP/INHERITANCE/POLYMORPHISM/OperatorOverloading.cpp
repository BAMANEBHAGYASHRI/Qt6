#include<iostream>
using namespace std;

class Complex{
    int real , image;
    public:
    Complex(int r=0, int i=0){
        real=r;
        image=i;
    }

    Complex  operator+ (Complex &obj){
        return Complex(real+obj.real , image+obj.image);
    }
    void display(){
        cout<<real<<"+"<<image<<"i"<<endl;
    }
};
int main(){
    Complex c1(3,4);
    Complex c2(12,80);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}