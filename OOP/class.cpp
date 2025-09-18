#include<iostream>
using namespace std;

 class test{
    public:
        int val;
        string surname;
        string name="bhagyashri";

    void printTest(){
        cout << val << endl;
         cout << surname<< endl;
        cout << name << endl;
       
    }
 };

 
 int main(){
    test t1;
    t1.printTest();
    return 0;
 }