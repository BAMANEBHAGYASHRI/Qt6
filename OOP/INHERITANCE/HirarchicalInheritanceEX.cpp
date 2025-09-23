#include<iostream>
using namespace std;

class Vehicle{
    public:
     void start(){
        cout<<"VehicleStarted..."<<endl;
     }
};
class  Car:public Vehicle{
    public:
    void drive(){
        cout<<"car is driving" <<endl;
    }
};
class  Bike:public Vehicle{
    public:
    void  ride(){
        cout<<"BIke is  riding"<<endl;
    }
};
int main(){
    Car c;
    Bike b;

c.start();
c.drive();

b.start();
b.ride();

return 0;
}
