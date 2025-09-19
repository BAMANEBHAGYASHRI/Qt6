#include<iostream>
using namespace std;
class student{
    public:
        int rollno;
        string name;
        int marks;
    
    void StudentData(){
        cout<<"roll no:"<<rollno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main(){
    student s1;
    s1.rollno=101;
    s1.name="shruti";
    s1.marks=80;

    student s2;
    s2.rollno=102;
    s2.name="pooja";
    s2.marks=75;
    
    // s1.student();
    s1.StudentData();
    s2.StudentData();
    return 0;
}