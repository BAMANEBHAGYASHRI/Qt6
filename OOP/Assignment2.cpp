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
    Employee emp1;
    Employee emp2;
    void ShowItDepartment() {
        cout << "\nWelcome in Information Technology Department" << endl;
        emp1.Display_Employee();
        emp2.Display_Employee();
    }
};

class SaleDepartment : virtual public Employee {
public:
    Employee emp1;
    Employee emp2;
    void ShowSaleDepartment() {
        cout << "\nWelcome in Sales Department" << endl;
        emp1.Display_Employee();
        emp2.Display_Employee();
    }
};

class MarketingDepartment : virtual public Employee {
public:
    Employee emp1;
    Employee emp2;
    void ShowMarketingDepartment() {
      
        cout << "\nWelcome in Marketing Department" << endl;
        emp1.Display_Employee();
        emp2.Display_Employee();
    }
};
class Company {     
public:
    ItDepartment it;
    SaleDepartment sale;
    MarketingDepartment m;
    
    void ShowItEmployee() { 
        it.ShowItDepartment();
    }
    void ShowSaleEmployee() { 
        sale.ShowSaleDepartment();
    }
    void ShowMarketingEmployee() { 
        m.ShowMarketingDepartment(); 
    }
    
     void ShowAllDepartmentEmployee(){
         cout<<"All DEpartment Employee::"<<endl;
         it.ShowItDepartment();
           sale.ShowSaleDepartment();
            m.ShowMarketingDepartment(); 
     }
     
     void ExitCompany(){
         cout<<"Thank You!!"<<endl;
         
     }

    void showDepartments() {
        cout << "\nDepartments in Company:\n";
        cout << "1. IT Department\n";
        cout << "2. Sales Department\n";
        cout << "3. Marketing Department\n";
        cout << "4. All Department Employee\n";
         cout << "5.Exit\n";
        cout << "Enter your choice: ";
    }

    void showEmployeesByChoice(int choice) {
        switch (choice) {
            case 1: 
                ShowItEmployee();
                break;
            case 2: 
                ShowSaleEmployee(); 
                break;
            case 3: 
                ShowMarketingEmployee(); 
                break;
            case 4: 
                ShowAllDepartmentEmployee(); 
                break;
            case 5: 
                ExitCompany(); 
                break;
            
            default: 
                cout << "Invalid choice!\n"; 
                break;
        }
    }
};

int main() {

    Company c;

    c.it.emp1.Employee_Data("PixelWise Technology", 101, "Bhagyashri", "12/8/2023", "Developer");
    c.it.emp2.Employee_Data("PixelWise Technology", 102, "Vishal", "12/8/2023", "Designer");
    
    c.sale.emp1.Employee_Data("PixelWise Technology", 201, "poonam", "12/8/2023", "sale exective");
    c.sale.emp2.Employee_Data("PixelWise Technology", 202, "prajkta", "12/8/2023", "sale");

    c.m.emp1.Employee_Data("PixelWise Technology", 301, "prasad", "12/8/2023", "marketing");
    c.m.emp2.Employee_Data("PixelWise Technology", 302, "Vrun", "12/8/2023", "marketing");

    
    int choice;
    c.showDepartments();
    cin >> choice;
    c.showEmployeesByChoice(choice);
    
    return 0;
}
