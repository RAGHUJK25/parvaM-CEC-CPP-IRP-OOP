#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void setPersonDetails(string n, int a){
            name = n;
            age = a;
        }

        void showPersonDetails(){
            cout << " My Name is : " << name << ", And I'm : " << age << "years old. " << endl;
        }
};

class Employee: public Person{
    private:
        string company_name, emp_id;

        public:
             void setEmployeeDetails(string compName, string empId) {
                company_name = compName;
                emp_id = empId;
            }

            void showEmployeeDetails () {
                cout << "I'm working in  " << company_name << " My Employee ID is : " << emp_id << "." << endl;
            }
};

class Developer : public Employee {
    private:
        string deptName;
        int experience;

    public:
        void setDeveloperDetails(string dept, int exp){
            deptName = dept;
            experience = exp;
        }

        void showDeveloperDetails(){
            cout << "I'll be workin in " << deptName << " department, And I have " << experience << " years of experience." << endl;
        }
};

int main (){
    string Person_Name,companyName, dept_Name, Employee_Id;
    int Person_Age,devExperience;

    cout << "Enter your Name & Age : ";
    cin >> Person_Name >> Person_Age;

    cout << "Enter your Company Name & Employee ID : "; 
    cin >> companyName >> Employee_Id;

    cout << "Enter your Deparatement Name & Year of Experience: ";
    cin >> dept_Name >> devExperience;

    Developer dev1; // object creation of the Developer class
    // dev1,name-cannot acces private member out the class (person)
    dev1.setPersonDetails(Person_Name, Person_Age);

    dev1.setEmployeeDetails(companyName, Employee_Id); 

    dev1.setDeveloperDetails(dept_Name, devExperience);

    dev1.showPersonDetails(); 
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
}