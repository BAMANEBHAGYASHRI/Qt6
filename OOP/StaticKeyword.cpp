#include<iostream>
using namespace std;


class  test{
    int id;
    string name;
    static int count;

        public:
        test(int i , string n){
            id=i ;
            name=n;
            count++;
        }
        void display(){
            cout<< "id::" <<id <<endl <<"name::" <<name<<endl;
        }
        static void showcount(){
            cout<<"count::"<<count<<endl;
        }
};
int test::count=0;

int main(){
    test t1(1, "pooja");
    test t2(2, "poonam");
    test t3(3, "konica");
    test t4(3, "konica");

    t1.display();
    t2.display();
    t3.display();
    t4.display();
    

    test::showcount();


    return 0;
}