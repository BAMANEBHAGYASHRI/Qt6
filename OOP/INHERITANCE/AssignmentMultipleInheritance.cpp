#include<iostream>
using namespace std;

class Printer{
    public:
    void printDoc(){
        cout<<"Printing Document"<<endl;
    }
};
class Scanner{
    public:
    void scanDoc(){
        cout<<"Scanning DOcument"<<endl;
    }
};
class AllinOne: public Printer , public Scanner{

};

int main(){
    AllinOne a;
    a.printDoc();
    a.scanDoc();

    return 0;
}