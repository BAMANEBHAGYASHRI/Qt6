#include<iostream>
using namespace std;

class Shallow{
    int id;
    string name;

    public:
        void setvalue(int i, string n){
            id=i;
            name=n;
        }
        void display(){
            cout<< "name::" <<name <<"\n" <<"id::" <<id<<endl;
        }
};
int main(){
    Shallow s1;
    s1.setvalue(1, "bhagyashri");

    Shallow s2=s1;

    cout <<"before change"<<endl;
    s1.display();
    s2.display();

    s2.setvalue(2,"pooja");
     cout<<"after change" <<endl;
     s1.display();
     s2.display();
    
}