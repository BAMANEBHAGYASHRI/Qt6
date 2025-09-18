#include<iostream>
using namespace std;
class Empty{

};
int main(){
    Empty t1 , t2;
    cout << "size of empty class::" <<sizeof(Empty) <<endl;
    cout << &t1<<endl;
    cout<<&t2<<endl;
    return 0;

}