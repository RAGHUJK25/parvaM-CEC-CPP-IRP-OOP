#include<iostream>
using namespace std;

class Name {
    private:
        string name,branch;
        int sem;
    public:
        void setName(string n) { 
           name = n;
        }

        void setDetails(string branch ,int sem) {//As the parametr name & private member name is same , it will assign the gaebage value 
            // To avoid the issue, we can use 'this' keyword to assign the parameter value to the private member variable 
           this-> branch = branch;
            this-> sem = sem;
        }

        void showName() { 
            cout << "your name is: " << name << endl; 
        }
        void showDetails() {
            cout << "your from : " << branch << " branch, and your studying in: " << sem << "sem." << endl;
        }
};

int main(){
    string studentName ,studentBranch;
    int studentSem;

    cout << "Enter your name, Branch & sem: ";
    cin >> studentName >> studentBranch >> studentSem;

    Name name1;
    name1.setName(studentName);
    name1.showName();
    name1.setDetails(studentBranch, studentSem);
    name1.showDetails();
}