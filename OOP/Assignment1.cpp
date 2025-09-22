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
};
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
    Employee_HRDepartment(int new_id, string new_name , string new_jd, string new_d){
        Employee::Employee_Data(new_id,new_name ,new_jd, new_d);
         cout<<"Add successfully Memebers" <<endl;
    };
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
   public:
    void Marketing_department(){
    cout << "Welcome in Marketing Department" <<endl;
    }
};
class Employee_FinanceDepartment:public Employee{
    public:
    void Finance_department(){
    cout << "Welcome in Finance Department" <<endl;
    }
};

class Employee_ITDepartment:public Employee{
    public:
    void IT_department(){
    cout << "Welcome in IT Department" <<endl;
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
    obj. Employee_Data(101, "sakshi" , "3/8/2020","HR");
    obj1. Employee_Data(102, "poonam" , "3/8/2020","HR");
    obj2.Employee_Data(103, "saksham" , "4/8/2020","HR");
    
    cout<<endl;
    // add another employee
    //  Employee_HRDepartment emp1(201, "Prashant", "8/2/2010", "HR");
    // emp1.Display_Employee();
     
    
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
    
    // finace department object
    Employee_FinanceDepartment obj9;
    Employee_FinanceDepartment obj10;
    Employee_FinanceDepartment obj11;
    obj9. Employee_Data(110, "sakshi" , "3/8/2020","Finance");
    obj10. Employee_Data(111, "poonam" , "3/8/2020","Finance");
    obj11. Employee_Data(112, "saksham" , "4/8/2020","Finance");
    
    // IT Department Object
    Employee_ITDepartment obj12;
    Employee_ITDepartment obj13;
    Employee_ITDepartment obj14;
    obj12.Employee_Data(113, "sakshi" , "3/8/2020","It");
    obj13.Employee_Data(114, "poonam" , "3/8/2020","IT");
    obj14.Employee_Data(115, "saksham" , "3/8/2020","IT");
    
 
    // object od departments
    Departments Employee_HRDepartment( 1 , "hr");
    Departments Employee_SalesDepartment( 2 , "sales");
    Departments Employee_MarketingDepartment( 3 , "Marketing");
    Departments Employee_FinanceDepartment( 4 , "Finance");
    Departments Employee_ITDepartment( 5 , "It");
    
    
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
            Employee_HRDepartment.ShowDepartment();
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
            Employee_SalesDepartment.ShowDepartment(); 
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
           Employee_MarketingDepartment.ShowDepartment(); 
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
            Employee_FinanceDepartment.ShowDepartment(); 
             obj9.Finance_department();
             cout<<"-----------"<<endl;
              obj9.Display_Employee();
            cout<<"............"<<endl;
             obj10.Display_Employee();
            cout<<"............"<<endl;
              obj11.Display_Employee();
            cout<<"............"<<endl;
            
            break;
        case 5: 
            Employee_ITDepartment.ShowDepartment(); 
            obj12.IT_department();
             cout<<"-----------"<<endl;
              obj12.Display_Employee();
            cout<<"............"<<endl;
             obj13.Display_Employee();
            cout<<"............"<<endl;
              obj14.Display_Employee();
            cout<<"............"<<endl;
            break;
        default: 
            cout << "Invalid choice!" << endl;
    };
    
    
    
}
