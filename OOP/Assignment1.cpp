#include<iostream>
using namespace std;
class company{
    string company_name;
    public:
    void setcompany(string name){
        company_name=name;
    }
    string getcompany(){
        return company_name;
    }
    class Departments{
        public:
            int dep_id;
            string dep_name;
        
        Departments(int i , string n){
            dep_id=i;
            dep_name=n;
        }
        void ShowDepartment(){
            cout << "Department id::"<<dep_id<<endl;
            cout<< "Department name::"<<dep_name<<endl;
        }
    };
};

class Employee{
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
    void Display_Employee(){
        cout<<"Employee id::" <<emp_id<<endl;
        cout<<"Employee Name::"<<emp_name<<endl;
        cout<<"Employee Joining date::"<<joiningdate<<endl;
        cout<<"Employee designation::" <<designation<<endl;
    }
};
class Employee_HRDepartment:public Employee{
    public:
    void Human_Resource_department(){
    cout << "Welcome in HR Department" <<endl;
    }
};

class Employee_SalesDepartment:public Employee{
    public:
    void Sales_department(){
    cout << "Welcome in Sales Department" <<endl;
    }
};
class Employee_MarketingDepartment:public Employee{
    // public:
    // int emp_id;
    // string emp_name;
    // string joiningdate;
    // string designation;
    
    public:
    void Marketing_department(){
    cout << "Welcome in Marketing Department" <<endl;
    }
    // void Employeedata(int i, string n , string jd, string d){
    //     emp_id=i;
    //     emp_name=n;
    //     joiningdate=jd;
    //     designation=d;
    // }
    // void Display_Employee(){
    //     cout<<"Employee id::" <<emp_id<<endl;
    //     cout<<"Employee Name::"<<emp_name<<endl;
    //     cout<<"Employee Joining date::"<<joiningdate<<endl;
    //     cout<<"Employee designation::" <<designation<<endl;
    // }

};
class Employee_FinanceDepartment{
    public:
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
    
    public:
    void Finance_department(){
    cout << "Welcome in Finance Department" <<endl;
    }
    void Employeedata(int i, string n , string jd, string d){
        emp_id=i;
        emp_name=n;
        joiningdate=jd;
        designation=d;
    }
    void Display_Employee(){
        cout<<"Employee id::" <<emp_id<<endl;
        cout<<"Employee Name::"<<emp_name<<endl;
        cout<<"Employee Joining date::"<<joiningdate<<endl;
        cout<<"Employee designation::" <<designation<<endl;
    }

};

class Employee_ITDepartment{
    public:
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
    
    public:
    void IT_department(){
    cout << "Welcome in IT Department" <<endl;
    }
    void Employeedata(int i, string n , string jd, string d){
        emp_id=i;
        emp_name=n;
        joiningdate=jd;
        designation=d;
    }
    void Display_Employee(){
        cout<<"Employee id::" <<emp_id<<endl;
        cout<<"Employee Name::"<<emp_name<<endl;
        cout<<"Employee Joining date::"<<joiningdate<<endl;
        cout<<"Employee designation::" <<designation<<endl;
    }

};

int main(){
    // main class object
    company c;
    c.setcompany("Pixelwise Tehcnology");
    cout<<c.getcompany()<<endl;
    
    // Hr Department Object
    Employee_HRDepartment obj;
    Employee_HRDepartment obj1;
    Employee_HRDepartment obj2;
    obj. Employee_Data(101, "sakshi" , "3/8/2020","HUman Resource");
    obj1. Employee_Data(102, "poonam" , "3/8/2020","HR");
    obj2. Employee_Data(103, "saksham" , "4/8/2020","HUman Resource");
    
    // sale Department object
    Employee_SalesDepartment obj3;
    Employee_SalesDepartment obj4;
    Employee_SalesDepartment obj5;
    obj3. Employee_Data(104, "sakshi" , "3/8/2020","sales");
    obj4. Employee_Data(105, "poonam" , "3/8/2020","sales");
    obj5. Employee_Data(106, "saksham" , "4/8/2020","sales");
    
    // Marketing Departmenty object
    Employee_MarketingDepartment obj6;
    Employee_MarketingDepartment obj7;
    Employee_MarketingDepartment obj8;
    obj6. Employee_Data(107, "sakshi" , "3/8/2020","marketing");
    obj7. Employee_Data(108, "poonam" , "3/8/2020","marketing");
    obj8. Employee_Data(109, "saksham" , "4/8/2020","marketing");
    
    
    
    
    
    
    

   
     
    // sales department employee object
    // Employee_SalesDepartment empsale1;
    // Employee_SalesDepartment empsale2;
    // Employee_SalesDepartment empsale3;
    // empsale1.Employeedata(104, "Poonam" , "3/8/2020","sales");
    // empsale2.Employeedata(105, "pratik" , "7/1/2029","sales");
    // empsale3.Employeedata(106, "sanika" , "6/8/2020","sales");
    
    
    // Marketing Department Employee object
    
    // Employee_MarketingDepartment empmarket1;
    // Employee_MarketingDepartment empmarket2;
    // Employee_MarketingDepartment empmarket3;
    // empmarket1.Employeedata(107, "Poonam" , "3/8/2020","Marketing");
    // empmarket2.Employeedata(108, "pratik" , "7/1/2029","Marketing");
    // empmarket3.Employeedata(109, "sanika" , "6/8/2020","Marketing");
    
    
    // finance department employee object
    Employee_FinanceDepartment empfinance1;
    Employee_FinanceDepartment empfinance2;
    Employee_FinanceDepartment empfinance3;
    empfinance1.Employeedata(110, "Poonam" , "3/8/2020","finance");
    empfinance2.Employeedata(111, "pratik" , "7/1/2029","finance");
    empfinance3.Employeedata(112, "sanika" , "6/8/2020","finance");
    
    
    //  it department employee object
    
     Employee_ITDepartment empit1;
     Employee_ITDepartment empit2;
     Employee_ITDepartment empit3;
     empit1.Employeedata(113, "Poonam" , "3/8/2020","Information Techology");
    empit2.Employeedata(114, "pratik" , "7/1/2029","Information Techology");
    empit3.Employeedata(115, "sanika" , "6/8/2020","Information Techology");
    
    // All employee List
    // EmployeeList el;
    // el.Display_Employee();
     
    
    
   
    // object od departments
    company::Departments hr( 1 , "hr");
    company::Departments sales( 1 , "sales");
    company::Departments Marketing( 1 , "Marketing");
    company::Departments Finance( 1 , "Finance");
    company::Departments IT( 1 , "It");
    
    
    int choice;
    cout << "Select a Department:" << endl;
    cout << "1. Human Resources" << endl;
    cout << "2. Sales" << endl;
    cout << "3. Marketing" << endl;
    cout << "4. Finance" << endl;
    cout << "5. IT" << endl;
    cout << "Enter your choice: ";
    cin >>choice;
    

    switch (choice) {
        case 1: 
            hr.ShowDepartment();
            cout<<"*********"<<endl;
            obj.Human_Resource_department();
            cout<<"-----------"<<endl;
            obj1.Display_Employee();
            cout<<"............"<<endl;
            obj1.Display_Employee();
            cout<<"............"<<endl;
            obj2.Display_Employee();
            cout<<"............"<<endl;
            break;
        case 2: 
            sales.ShowDepartment(); 
            obj3.Sales_department();
             cout<<"-----------"<<endl;
             obj3.Display_Employee();
            cout<<"............"<<endl;
             obj4.Display_Employee();
            cout<<"............"<<endl;
             obj5.Display_Employee();
            cout<<"............"<<endl;
            break;
        case 3: 
            Marketing.ShowDepartment(); 
             obj6.Marketing_department();
             cout<<"-----------"<<endl;
              obj6.Display_Employee();
            cout<<"............"<<endl;
              obj7.Display_Employee();
            cout<<"............"<<endl;
              obj8.Display_Employee();
            cout<<"............"<<endl;
            break;
        case 4: 
            Finance.ShowDepartment(); 
             empfinance1.Finance_department();
             cout<<"-----------"<<endl;
              empfinance1.Display_Employee();
            cout<<"............"<<endl;
             empfinance2.Display_Employee();
            cout<<"............"<<endl;
              empfinance3.Display_Employee();
            cout<<"............"<<endl;
            
            break;
        case 5: 
            IT.ShowDepartment(); 
            empit1.IT_department();
             cout<<"-----------"<<endl;
              empit1.Display_Employee();
            cout<<"............"<<endl;
             empit2.Display_Employee();
            cout<<"............"<<endl;
              empit3.Display_Employee();
            cout<<"............"<<endl;
            break;
        default: 
            cout << "Invalid choice!" << endl;
    };
    
    
    
}
