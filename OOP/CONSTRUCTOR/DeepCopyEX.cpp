#include<iostream>
using namespace std;

class Book{
    public:
    string *title;
    string *bookname;
    float *price;

    public:
    Book(string t, string bn, float p){
        title=new string(t);
        bookname=new string(bn);
        price=new float(p);
    }
    Book(const Book& b){
        title=new string(*b.title);
        bookname=new string(*b.bookname);
        price=new float(*b.price);
    }

    void display(){
        cout<<"title::" <<*title <<endl <<"bookname::" <<*bookname <<endl<<"price::" <<*price<<endl;
    }

};
int main(){
    Book b1("abccc" ,"xyzzzzzzzzz",120);
    Book b2=b1;

    b1.display();
    b2.display();


    cout<<"-----------------------------" <<endl;
    *b2.title="zzzzz";
    *b2.bookname="aaaaaaaaaaaaaa";
    *b2.price=140;

    b1.display();
    b2.display();
}

