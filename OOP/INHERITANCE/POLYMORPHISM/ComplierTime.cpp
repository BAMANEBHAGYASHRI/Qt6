#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a , int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
int main(){
    Calculator cal;
    cout<< cal.add(12,12)<<endl;
    cout<<cal.add(2,5,8)<<endl;
    return 0;
}