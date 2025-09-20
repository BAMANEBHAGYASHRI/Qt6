#include<iostream>
using namespace std;
class student{
    int age;
    public:
     void setdata(int a){
        if(a>0){
            age=a;
        }
        else{
            age=0;
        }
     }
     int display(){
        return age;
     }
};

int main(){
    student s1;
    s1.setdata(21);
    cout <<"age::"<<s1.display()<<endl;
}