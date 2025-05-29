#include<iostream>
using namespace std;

class Employee {//base class
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

class skill : public Employee {//Derived class (single inheritance)
    private:
        int skillcount;
        string *skills; //pointer Array

    public:
        skill() {
              cout << " No Data found! " << endl;
        } // Default constructor without initializing any value
        void setSkills(int count ) {// prameterized constructor
            skillcount = count; 
            skills = new string[skillcount]; //Dynamically allocating memory for the skills array based on skillcount
            cout << "Dynamically created the pointer Array -skills" << endl;
            cout << "Enter the " << skillcount << " Techniques you're familier with: " << endl;
            for(int i = 0; i < skillcount; i++) {// Array initialization
                cout << " Skill " << (i + 1) << ": ";
                cin >> skills[i];
            }
        }

        void showSkill() {
            cout << "skills: " << endl;
            for(int i = 0; i < skillcount; i++) {// Dispaly the content og Skills Array
                cout << i+1 << " . " << skills[i] << endl;
            }
        }

        ~skill(){
            delete[] skills; ///free up the memory allocating by pointer Array using delst Keyword
            cout << "Memory has been cleared by the Destructor! ";
        }
};

int main(){
    string emp_Name, emp_ID;
    int emp_Exp ,skill_count;
    float emp_Salary;

    cout << "Enter the following Details of the Employee: ";
    cout << "Name, Employee ID, years of Experience and Salary: ";
    cin >> emp_Name >> emp_ID >> emp_Exp >> emp_Salary;

    cout << "Enter the number of techniques you know: " << endl;
    cin >> skill_count;

    //ponter reffering to the object of class skill which can also inherits the properties of class Employee
    skill s1;
    skill *emp1 = &s1; //pointer object ---> *emp1

    emp1->addDeatails(emp_ID, emp_Name, emp_Exp, emp_Salary);


    emp1->setSkills(skill_count);
    emp1->showDetails();
    emp1->showSkill();

    skill s2;
}


