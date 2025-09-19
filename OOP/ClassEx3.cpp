#include<iostream>
using namespace std;

class Rectangle{
    public:
        int length , breath;
    
    int setData(int l , int b){
        length=l;
        breath=b;
    }
    int area(int l , int b){
        return l*b;
    }
};
int main(){
    Rectangle r1;
    // r1.setData(2,7);
    cout << "Area of rectangle" << r1.area(2,2) <<endl;
    return 0;
}