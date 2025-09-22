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
class Employee_HRDepartment{
    public:
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
    
    public:
    void Human_Resource_department(){
    cout << "Welcome in HR Department" <<endl;
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
class Employee_SalesDepartment{
    public:
    int emp_id;
    string emp_name;
    string joiningdate;
    string designation;
    
    public:
    void Sales_department(){
    cout << "Welcome in Sales Department" <<endl;
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
    company c;
    c.setcompany("Pixelwise Tehcnology");
    cout<<c.getcompany()<<endl;
    
    // hr department employee object
     Employee_HRDepartment empHr;
     Employee_HRDepartment empHr1;
     Employee_HRDepartment empHr2;
     empHr.Employeedata(101, "Poonam" , "3/8/2020","Hr");
     empHr1.Employeedata(102, "pratik" , "7/1/2029","Hr");
     empHr2.Employeedata(103, "sanika" , "6/8/2020","Hr");
     
    // sales department employee object
    Employee_SalesDepartment empsale1;
    Employee_SalesDepartment empsale2;
    Employee_SalesDepartment empsale3;
    empsale1.Employeedata(104, "Poonam" , "3/8/2020","sales");
    empsale2.Employeedata(105, "pratik" , "7/1/2029","sales");
    empsale3.Employeedata(106, "sanika" , "6/8/2020","sales");
    
     
    
    
   
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
            empHr.Human_Resource_department();
            cout<<"-----------"<<endl;
            empHr.Display_Employee();
            cout<<"............"<<endl;
            empHr1.Display_Employee();
            cout<<"............"<<endl;
            empHr2.Display_Employee();
            cout<<"............"<<endl;
            break;
        case 2: 
            sales.ShowDepartment(); 
            empsale1.Sales_department();
             cout<<"-----------"<<endl;
             empsale1.Display_Employee();
            cout<<"............"<<endl;
             empsale2.Display_Employee();
            cout<<"............"<<endl;
             empsale3.Display_Employee();
            cout<<"............"<<endl;
            break;
        case 3: 
            Marketing.ShowDepartment(); 
            break;
        case 4: 
            Finance.ShowDepartment(); 
            break;
        case 5: 
            IT.ShowDepartment(); 
            break;
        default: 
            cout << "Invalid choice!" << endl;
    };
    
    
    
}
