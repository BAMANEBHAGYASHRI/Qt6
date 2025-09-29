#include<iostream>
#include<vector>

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
        vector<Employee>emps;
        void AddEmployee(Employee e){
            emps.push_back(e);
        }
        
        void ShowItDepartment() {
                cout << "\nWelcome in Information Technology Department" << endl;
                if (emps.empty()) {
                    cout << "No employees in IT Department.\n";
                    return;
                }
                for (Employee &emp : emps) {
                    emp.Display_Employee(); 
                }
                // for (int i = 0; i < emps.size(); i++) {
                //      emps[i].Display_Employee();
                //  }
            }
    
};

class SaleDepartment : virtual public Employee {
public:
    vector<Employee> emps;

    void AddEmployee(Employee e){
        emps.push_back(e);
    }

    void ShowSaleDepartment() {
        cout << "\nWelcome in Sales Department" << endl;
        if (emps.empty()) {
            cout << "No employees in Sales Department.\n";
            return;
        }
        for (Employee &emp : emps) {
            emp.Display_Employee();
        }
    }
};

class MarketingDepartment : virtual public Employee {
public:
    vector<Employee> emps;

    void AddEmployee(Employee e){
        emps.push_back(e);
    }

    void ShowMarketingDepartment() {
        cout << "\nWelcome in Marketing Department" << endl;
        if (emps.empty()) {
            cout << "No employees in Marketing Department.\n";
            return;
        }
        for (Employee &emp : emps) {
            emp.Display_Employee();
        }
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
        cout << "1. Add Employee to IT\n";
        cout << "2. Add Employee to Sale\n";
        cout << "3. Add Employee to Marketing\n";
        cout << "4. All Department Employee\n";
         cout << "5.Exit\n";
        cout << "Enter your choice: ";
    }


    void showEmployeesByChoice(int choice) {
        switch (choice) {
            case 1: 
                
                addEmployeeDynamically(1);
                ShowItEmployee();
                break;
            case 2: 
            addEmployeeDynamically(2);
                ShowSaleEmployee(); 
                break;
            case 3: 
            addEmployeeDynamically(3);
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
    
    void addEmployeeDynamically(int dept){
        Employee e;
        int id;
        string cname;
        string name;
        string jd;
        string des;
        
        cin.ignore();
        cout << "Enter Company Name: ";
        getline(cin, cname);
        cout << "Enter Employee ID: ";
        cin >> id;  
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Joining Date: ";
        getline(cin, jd);
        cout << "Enter Designation: ";
        getline(cin, des);

        e.Employee_Data(cname, id, name, jd, des);
        
        
        if(dept==1){
             it.AddEmployee(e);
        }
        else if(dept==2){
               sale.AddEmployee(e);
        }
        else if(dept==3){
             m.AddEmployee(e);
        }
       
     
       
        
    }
};

int main() {

    Company c;
    int choice;
    for(int i=0; i<=choice; i++){
         c.showDepartments();
        cin >> choice;
        c.showEmployeesByChoice(choice);
    }
  
    return 0;
}
