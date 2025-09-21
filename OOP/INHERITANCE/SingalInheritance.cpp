#include<iostream>
using namespace std;

class Collage{
    string name;
    public:
    void SetCollage(string s){
        name=s;
    }
    string getCollage(){
        return name;
    }
};
class  Student: public Collage{
    string Student_name;
    public:
    void Setname(string name){
        Student_name=name;
    }
    string getname(){
        return Student_name;
    }

    // void display(){
    //     cout<< "CollageName::" <<getCollage();

    // }
};
int main(){

    Student s1;
    s1.Setname("bhagyashri vijay bamane");
    cout << "student name::" <<s1.getname() << endl;
    s1.SetCollage("AITRC");
    cout<<"collage name::" <<s1.getCollage()<<endl;


    Student s2;
    s2.SetCollage("PVPIT");
    cout<< s2.getCollage();


    
    return 0;
}