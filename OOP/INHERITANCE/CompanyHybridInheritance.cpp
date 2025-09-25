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

class HrDepartment:virtual public Employee{
    public:
    string deptName;
    void sethrDept(string dn){
        deptName=dn;
    }
    void ShowHRDep(){
        // cout<<"Welcome in Hr Department"<<endl;
        cout<<"DEpartment Name::"<<deptName<<endl;
        Display_Employee();
    }
};
class ItDepartment: virtual public Employee{
    public:
    string dname = "-";
    void setitDept(string d){
        dname=d;
    }
    void ShowItDep(){
        // cout<<"Welcome in It Department"<<endl;
        cout<<"DEpartment Name::"<<dname<<endl;
        Display_Employee();
    }
};
class SaleDepartment: virtual public Employee{
    public:
    string deptName;
    void setsaleDept(string dn){
        deptName=dn;
    }
    void ShowSaleDep(){
        // cout<<"Welcome in Sale Department"<<endl;
        cout<<"DEpartment Name::"<<deptName<<endl;
        // Display_Employee();
    }
};

class Company: public HrDepartment , public ItDepartment , public SaleDepartment{
    public:
        void AllDepartment(){
            ShowHRDep();
            cout<<"pd-1"<<endl;
            ShowItDep();
            // ShowSaleDep();
        }
};
int main()
{
    Company c;
    
    c.Employee_Data("pixelwise Technology",102,"shruti bamane","12/7/20024","HR");
    c.sethrDept("HR DEPARTMENT");
    cout<<"###############"<<endl;
    c.AllDepartment();
  
    cout<<"-----------------"<<endl;
    Company c1;
    c1.Employee_Data("pixelwise Technology",103,"pooja","12/7/20024","HR");
    c1.sethrDept("HR DEPARTMENT");
    // c1.Display_Employee();
    c1.AllDepartment();
    
    // cout<<"----------------------IT DEpartment------------------"<<endl;
    Company c2;
    c2.Employee_Data("pixelwise Technology",1,"SARITA","11/7/2004","Developer");
    c2.setitDept("IT DEPARTMENT");
    c2.AllDepartment();
    cout<<"-----------------"<<endl;
    Company c3;
    c3.Employee_Data("pixelwise Technology",2,"pratiksha","12/7/20024","Tester");
    c3.setitDept("IT DEPARTMENT");
    c3.AllDepartment();
    
    
   

   

    return 0;
}