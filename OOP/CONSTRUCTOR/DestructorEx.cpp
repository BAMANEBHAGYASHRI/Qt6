#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    
    Book(string t , string a){
        title=t;
        author=a;
        cout<<"Constructor called for::"<<title<<endl;
        cout <<"Constructor called for::"<<author<<endl;

    }
    ~Book(){
        cout<< "Destructor called for book::"<<title<<endl;
        cout<<"Destructor called for book::"<<author<<endl;

    }
};
int main(){
    Book b1("xyzzz" ,"aaaaaaaaaa");
    Book b2("aaaaaa" ,"ssssssssss");

    cout<< b1.title <<endl << b1.author<<endl;
    cout<<b2.title <<endl << b2.author<<endl;

    return 0;


}