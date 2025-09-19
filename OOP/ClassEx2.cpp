#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int price;
    
    void PrintBook(){
        cout << "Title of book::"<< title <<endl;
        cout << "author of book::" << author <<endl;
        cout << "price of book::" <<price <<endl;
    }
};
int main(){
    Book b1;
    b1.title="syamchi aai";
    b1.author="sane guruji";
    b1.price=200;

    b1.PrintBook();
    return 0;
}
