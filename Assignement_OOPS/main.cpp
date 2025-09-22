// #include <QCoreApplication>

// int main(int argc, char *argv[])
// {
//     QCoreApplication a(argc, argv);

//     // Set up code that uses the Qt event loop here.
//     // Call a.quit() or a.exit() to quit the application.
//     // A not very useful example would be including
//     // #include <QTimer>
//     // near the top of the file and calling
//     // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
//     // which quits the application after 5 seconds.

//     // If you do not need a running Qt event loop, remove the call
//     // to a.exec() or use the Non-Qt Plain C++ Application template.

//     return a.exec();
// }



#include<iostream>
using namespace  std;


class Pixelwise{
public:
    int dep_id;
    string dep_name;
    Pixelwise( int i , string n){
        this->dep_id=i;
        this-> dep_name=n;
    }
    void department_display(){
        cout<<"Department Id::"<<dep_id<<endl;
        cout<<"Department name::"<<dep_name<<endl;
    }
};
int main(){

    Pixelwise hr(1, "Human Resources");
    Pixelwise sales(2, "Sales");
    Pixelwise marketing(3, "Marketing");
    Pixelwise finance(4, "Finance");
    Pixelwise it(5, "IT");


    int choice;
    cout << "Select a Department:" << endl;
    cout << "1. Human Resources" << endl;
    cout << "2. Sales" << endl;
    cout << "3. Marketing" << endl;
    cout << "4. Finance" << endl;
    cout << "5. IT" << endl;
    cout << "Enter your choice: ";
    cin >> choice;


    switch (choice) {
    case 1:
        hr.department_display();
        break;
    case 2:
        sales.department_display();
        break;
    case 3:
        marketing.department_display();
        break;
    case 4:
        finance.department_display();
        break;
    case 5:
        it.department_display();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
