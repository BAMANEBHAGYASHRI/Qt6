#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    void setRoll(int r){
        roll=r;
    }
    void displayRoll(){
        cout<<"roll NUmber:"<<roll<<endl;
    }
};
class Test:virtual public Student{
    public:
    int m1, m2;
    void setMark(int m1, int m2){
        m1=m1;
        m2=m2;
    }
    void DisplayMark(){
        cout<<"marks in subject 1::"<<m1<<endl;
        cout<<"marks in subject 1::"<<m2<<endl;
    }
};
class Sport:virtual  public Student{
    public:
    int score;
    void setScore(int s){
        score=s;
    }
    void displayScore(){
        cout<<"SPort Score::"<<score<<endl;
    }
};
class  Result:public Test, public Sport{
    public:
    void displayResult(){
        int total=m1+m2+score;
        displayRoll();
        DisplayMark();
        displayScore();
        cout<<"total::"<<total<<endl;
    }
};
int main(){
    Result r;
    r.setRoll(12);
    r.setMark(45,90);
    r.setScore(34);
    r.displayResult();


    return 0;
}


