#include<iostream>
using namespace std;

class book{
    public:
    string title;
    string bookname;

    book(string t , string bn){
        title=t;
        bookname=bn;
    }
    void display(){
        cout<<"book title::"<<title<<endl;
        cout<<"book name::"<<bookname<<endl;
    }
};
int main(){
    book b("good vibes only" ,"xyxxxxx");
    b.display();
    return 0;
}