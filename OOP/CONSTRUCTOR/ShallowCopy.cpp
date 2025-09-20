#include<iostream>
using namespace std;

class Shallow{
   
    int *data;
    public:
        Shallow(int val){
            data=new int(val);
        }
    
    int getvalue(){
        // cout << *data;
        return *data;
    }
    int setvalue(int val){
        *data=val;
    }
};
int main(){
    Shallow s1(10);
    Shallow s2=s1;
    s2.setvalue(20);

    
    cout<<s1.getvalue()<<endl;
    cout<<s2.getvalue()<<endl;
}