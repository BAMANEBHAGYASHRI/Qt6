#include<iostream>
using namespace std;

 class test{
    public:
        int val;
        string surname;
        string name;
    
        test(){
            val=0;
            surname="bamane";
            name="sonali";
        }
        test(int v, string s, string n){
            val=v;
            surname=s;
            name=n;
        }

    void printTest(){
        cout << "value::" << val << endl;
         cout <<"surname::" << surname<< endl;
        cout << "name::" <<name << endl;
       
    }
 };

 
 int main(){
    // static allocation
    test t1;
    t1.val=1;
    t1.name="bhagyashri";
    t1.surname="bamane";

    // dynamic allocation
    test *t2=new test(2,"shruti","bamane");
    
    t1.printTest();
    t2->printTest();
    return 0;
 }