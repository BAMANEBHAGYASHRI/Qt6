#include <iostream>
using namespace std;
class Employee {
public:
    string company_name;
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
 
    void Employee_Data(string cname, int i, string n , string jd, string d) {
        company_name = cname;
        emp_id = i;
        emp_name = n;
        joiningdate = jd;
        designation = d;
    }
    
    void Display_Employee() {
        cout << "Company Name:: " << company_name << endl;
        cout << "Employee ID:: " << emp_id << endl;
        cout << "Employee Name:: " << emp_name << endl;
        cout << "Employee Joining Date:: " << joiningdate << endl;
        cout << "Employee Designation:: " << designation << endl;
    }
};

class ItDepartment:public Employee {
public:
    void ShowItDepartment() {
        cout << "\nWelcome in Information Technology Department" << endl;
        cout<<"Employee of the Department"<<endl;
        Display_Employee();
        
    }
};

class HrDepartment:public Employee {
public:
    void ShowHrDepartment() {
        cout << "\nWelcome in Human Resource Department" << endl;
        cout<<"Employee of the Department"<<endl;
        Display_Employee();
        
    }
};

class SaleDepartment:public Employee {
public:
    void ShowSaleDepartment() {
        cout << "\nWelcome in  Sale Department" << endl;
        cout<<"Employee of the Department"<<endl;
        Display_Employee();
        
    }
};

class Company:public ItDepartment , public HrDepartment{
    public:
    void ShoWCompanyDetails(){
        cout<<"It Department EMployeee::::::::"<<endl;
        ShowItDepartment();
        cout<<"111111111111111111111111111111111111"<<endl;
        // cout<<"Hr Department Employee::::::::::"<<endl;
    ShowHrDepartment();
    }
};



int main()
{
  Company c;
  c.ShoWCompanyDetails();

    
    
    
    
    
    
    
    
    // it department
    ItDepartment obj1; 
    obj1.Employee_Data("TCX",101,"pooja","12/8/2005","tester");
    ItDepartment obj2;
    obj2.Employee_Data("TCS",1001,"satish","17/9/2015","Developer");

    obj1.ShowItDepartment();
    obj2.ShowItDepartment();
    cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
    
    // hr department
  HrDepartment hobj1;
    hobj1.Employee_Data("TCX",101,"pooja","12/8/2005","tester");
    HrDepartment hobj2;
    hobj2.Employee_Data("TCS",1001,"satish","17/9/2015","Developer");

    hobj1.ShowHrDepartment();
    hobj2.ShowHrDepartment();
     cout<<"+++++++++++++++++++++++++++++++++++++++++"<<endl;
//     // Sale department
//     SaleDepartment sobj1;
//     sobj1.Employee_Data("TCX",101,"pooja","12/8/2005","tester");
//     SaleDepartment sobj2;
//     sobj2.Employee_Data("TCS",1001,"satish","17/9/2015","Developer");

//     sobj1.ShowSaleDepartment();
//     sobj2.ShowSaleDepartment();

    return 0;
}