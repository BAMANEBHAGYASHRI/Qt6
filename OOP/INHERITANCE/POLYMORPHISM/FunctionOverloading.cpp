#include<iostream>
using namespace std;

class Print{
    public:
    void show(int x){
        cout<<"interger::"<<x<<endl;
    }
    void show(double y){
        cout<<"double::"<<y<<endl;
    }
    void show(string z){
        cout<<"string::"<<z<<endl;
    }
};
int main(){
    Print p;
    p.show(12);
    p.show(12.8);
    p.show("shruti");
    return 0;
}