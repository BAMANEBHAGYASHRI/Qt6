#include<iostream>
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

class ItDepartment : virtual public Employee {
public:
Employee itdep;
    void ShowItDepartment() {
        
        cout << "\nWelcome in Information Technology Department" << endl;
        itdep.Display_Employee();
    }
};

class SaleDepartment : virtual public Employee {
public:
  Employee saledep;
    void ShowSaleDepartment() {
      
        cout << "\nWelcome in Sales Department" << endl;
        saledep.Display_Employee();
    }
};

class MarketingDepartment : virtual public Employee {
public:
  Employee madep;
    void ShowMarketingDepartment() {
      
        cout << "\nWelcome in Marketing Department" << endl;
        madep.Display_Employee();
    }
};

class Company{     
    public:
    ItDepartment it;
    SaleDepartment sale;
    MarketingDepartment m;
    
    void ShowAllDepartment(){
        it.ShowItDepartment();
        sale.ShowSaleDepartment();
        m.ShowMarketingDepartment();
    }
};

int main() {
    Company c;
    Company c1;

    
    c.it.itdep.Employee_Data("PixelWise Technology", 101, "Bhagyashri", "12/8/2023", "Developer");
     c.sale.saledep.Employee_Data("PixelWise Technology", 102, "shri", "11/8/2021", "sale executive");
     c.m.madep.Employee_Data("PixelWise Technology", 102, "shri", "11/8/2021", "marketing");
     cout<<"-------------"<<endl;
     c1.it.itdep.Employee_Data("PixelWise Technology", 101, "Bhagyashri", "12/8/2023", "Developer");
     c1.sale.saledep.Employee_Data("PixelWise Technology", 102, "shri", "11/8/2021", "sale executive");
     c1.m.madep.Employee_Data("PixelWise Technology", 102, "shri", "11/8/2021", "marketing");

   
    c.ShowAllDepartment();

    return 0;
}
