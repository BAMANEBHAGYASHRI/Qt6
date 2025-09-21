#include<iostream>
using namespace std;



class Female{
    public:
    void textF(){
        cout<<"I am girl"<< endl;
    }

};
class Male{
    public:
    void textM(){
        cout << "i am boyy"<<endl;
    }
};
class Student:public Female , public Male{
        // cout<< "Who am i??" <<endl;
};
int main(){
    Student s1;
    s1.textF();
    return 0;
}