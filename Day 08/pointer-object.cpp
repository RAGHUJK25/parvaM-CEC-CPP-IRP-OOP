#include<iostream>
using namespace std;

class Employee {
    private:
        string employeeID,employeeName;
        int experience;
        float salary;
    public:
        void addDeatails(string id, string name, int exp, float sallary) {
            employeeID = id;
            employeeName = name;
            experience = exp;
            this->salary = sallary;
        }

        void showDetails() {
            cout << "The Employee with Name: " << employeeName << " Bearing Employee ID: " << employeeID << " have Experience: " << experience << " years and receive a sallary of Rs." << salary << "/." << endl;
        }
};

int main(){
    string empName, empID;
    int empExp;
    float empSalary;

    cout << "Enter the Employee Name ,Employee ID, years of Experience and Salary: ";
    cin >> empName >> empID >> empExp >> empSalary;


    Employee emp1; //obect created
    Employee *ptrEmp = &emp1; // pointer is pointing /refering to the object emp1

    // using the pointer we are assimg the vslues to the object emp1 pointer dereferencening & dot operator
    (*ptrEmp).addDeatails(empID, empName, empExp, empSalary); 
    (*ptrEmp).showDetails(); 

    // using the pointer we are assimg the vslues to the object emp1 pointer dereferencening & Arrow operator
    ptrEmp->addDeatails(empID, empName, empExp, empSalary); 
    ptrEmp->showDetails(); 

    // dynamically Allocating the memory for an poiinter object (NO object refferd)
    //syntax: ClassName *pointerName = new ClassName;
    Employee *empPtr = new Employee; // Dynamic memory allocation for an pointer object
    ptrEmp->addDeatails("Pm123","RAghu.J",3,10000.00);
    ptrEmp->showDetails();

    // emp1.addDeatails <==> (*empPtr).addDeatails <==> empPtr->addDeatails
}