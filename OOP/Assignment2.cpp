#include <iostream>
#include <string>
using namespace std;

class Company {
public:
    string company_name;
public:
    Company(string name) {
        company_name = name;
    }
    void showName() {
        cout << "Company Name from class::: " << company_name << endl;
    }
};

class Department : public Company {
     public:
        int dep_id;
        string dep_name;
public:
    Department(string name) : Company(name) {};
    friend class IT;
    
   
    
    Department(int i , string n){
        dep_id=i;
        dep_name=n;
    }
    void ShowDepartment(){
        cout << "Department id::"<<dep_id<<endl;
        cout<< "Department name::"<<dep_name<<endl;
    }
    
};

class Employee{
    public:
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
    public:
    void Employee_Data(int i, string n , string jd, string d){
        emp_id=i;
        emp_name=n;
        joiningdate=jd;
        designation=d;
    }
    void employeecomp(Department &obj) {
        cout << "Company Name from employee:: " << obj.company_name << endl;
    }
    void Display_Employee(){
        // cout<<"Company name::" <<obj.company_name<<endl;
        cout<<"Employee id::" <<emp_id<<endl;
        cout<<"Employee Name::"<<emp_name<<endl;
        cout<<"Employee Joining date::"<<joiningdate<<endl;
        cout<<"Employee designation::" <<designation<<endl;
    }
};

class IT:public Employee , public Department{
public:
    void ItDepartment(Department &dep) {
        cout << "Company Name from It Department: " << dep.company_name << endl;
    }
    void it_department(){
    cout << "Welcome in Informartion Technology Department" <<endl;
    }
};

class Marketing:public Employee , public Department{
public:
    void MarketingDepartment(Department &dep) {
        cout << "Company Name from Marketing Department: " << dep.company_name << endl;
    }
    void marketing_department(){
    cout << "Welcome in Marketing Department" <<endl;
    }
};
class Sales:public Employee , public Department{
public:
    void SalesDepartment(Department &dep) {
        cout << "Company Name from Sales Department: " << dep.company_name << endl;
    }
    void sales_department(){
    cout << "Welcome in SalesDepartment Department" <<endl;
    }
};

int main() {
    // Department object
    Department d1("PixelWise Technology LLP");
    // d1.showName();   //company name from Department class
    
    // empolyee object
    Employee e;
    // e.employeecomp(d1);     // company name from employee class
    

    // IT object
    IT i;
    IT ii;
    IT itdep;
    // i.ItDepartment(d1);  // acess company name from department class
    // It object for employee
    // i.it_department();
    i.Employee_Data(1, "sakshi" , "3/8/2020","it");
    ii.Employee_Data(2, "saksham" , "12/8/2110","it");
    cout<<"*********************"<<endl;

    
    // marketing object
    Marketing m1;
    Marketing m2;
    Marketing marketdep;
    // m1.MarketingDepartment(d1);
    // m1.marketing_department();
    // Marketing object for employee
    m1.Employee_Data(1, "sakshi" , "3/8/2020","marketing");
    m2.Employee_Data(2, "saksham" , "12/8/2110","marketing");
    cout<<"*********************"<<endl;
    
    // sales object
    Sales s1;
    Sales s2;
    Sales saledep;
    // s1.SalesDepartment(d1);
    // s1.sales_department();
    // sales object for employee
    s1.Employee_Data(1, "sakshi" , "3/8/2020","marketing");
    s2.Employee_Data(2, "saksham" , "12/8/2110","marketing");
    
    
    
    
     Department itdep(1,"Information Technology");
    Department  marketdep(2,"Marketing");
   Department  saledep(3,"sales");
    
    
    int choice;
    cout << "Select a Department:" << endl;
    cout << "1. IT" << endl;
    cout << "2.Marketing" << endl;
    cout << "3. Sales" << endl;
    cout << "Enter your choice: ";
    cin >>choice;
    
    
    
    switch (choice) {
        case 1: 
            i.ShowDepartment();
            i.it_department();
            i.ItDepartment(d1);
            cout<<"*********"<<endl;
             i.Display_Employee();
             ii.Display_Employee();
            
            break;
        case 2: 
            m1.ShowDepartment();
            m1.MarketingDepartment(d1);
            m1.marketing_department();
            cout<<"*********"<<endl;
             m1.Display_Employee();
             m2.Display_Employee();
            
            break;
        case 3: 
            s1.ShowDepartment();
            s1.SalesDepartment(d1);
            s1.sales_department();
             cout<<"*********"<<endl;
            s1.Display_Employee();
            s1.Display_Employee();
            break;
        default: 
            cout << "Invalid choice!" << endl;
    };
    
    return 0;
}
