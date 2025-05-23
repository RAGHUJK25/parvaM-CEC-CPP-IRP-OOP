#include<iostream>
using namespace std;

int main(){
    // Declaring the variables with diffrent datatype
    string name, college,branch, usn;
    char section;
    int age, sem;
    bool isStudent;
    float height;
    // Initializing the values for variables
    name = "RAghu.J";
    section = 'A';
    age = 20;
    college = "CEC";
    branch = "AI & ML";
    usn = "1CE24AI062";
    sem = 2;
    isStudent = true;
    height = 5.2;
    //cloning the line
    cout << "Name:" << name << endl;
    cout << "Section:" << section << endl;
    cout << "Age:" << age << endl;
    cout << "College:" << college  << ",Branch:" << branch  << endl;
    cout << "USN:" << usn << ",Sem:" << sem  << ",Is he/she Student:" << isStudent << endl;
    cout << "Height:" << height << endl;
}