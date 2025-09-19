#include<iostream>
using namespace std;

class Test{
    private:
    int rollno;
    public:
    string name;

    void Print(){
        cout << "roll no:" << rollno <<endl;
         cout << "Name::" << name <<endl;
    }
    void setData(int n){
        rollno=n;
    }
    int getData(){
        return rollno;
    }

};
int main(){
    Test t1;
    // t1.rollno=102;
    t1.setData(102);
    cout<< "roll no::" << t1.getData() <<endl;
    t1.name="bhagyashri";
    t1.Print(); 
    return 0;
}