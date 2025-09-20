#include<iostream>
using namespace std;

class Test{
    int *id;
    string *name;
    public:
    Test(int i , string n){
        id=new int(i);
        name=new string(n);

    }
    void setvalue(int i, string n){
        *id=i;
        *name=n;
    }
    void getvalue( ){
        cout<< "id::" <<id  <<"\n" <<"name::" <<name <<endl;
    }
};
int main(){
    Test t1(1,"bhagyashri");
   
    Test t2=t1;
    t2.setvalue(2,"pooja");

    t1.getvalue();
    t2.getvalue();
    return 0;
}