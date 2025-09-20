#include<iostream>
using namespace std;

class  Studentdata{
    public:
    int rollno;
    string name;
    int marks;

    Studentdata(int r, string n, int m){
        rollno=r;
        name=n;
        marks=m;
    }
    Studentdata(const Studentdata& ss){
        rollno=ss.rollno;
        name=ss.name;
        marks=ss.marks;
        cout <<"copy constructor successfully"<<endl;
    }
    void show(){
        cout<<"rollno::"<<rollno <<"\n"<<"name::"<<name << "\n" <<"marks::" <<marks<<endl;
    }
};
int main(){
    Studentdata s1(1,"pooja",78);
    s1.show();

    return 0;
}