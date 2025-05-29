#include<iostream>
#include<fstream>
using namespace std;

class Teacher{
    private:
        string name, branch;
        int age ,experience;

    public:
        void setInfo(string n, string b, int a, int e) {
            name = n;
            branch = b;
            age = a;
            experience = e;
        }

        void wtiteToFile() {
            ofstream write("write.txt"); 
            write << "Teacher Details are as followed!"<< endl;
            write << "Name: " << name << endl;   
            write << "Age: " << age << endl;
            write << "Branch: " << branch << endl;
            write << "Experience: " << experience << " years" << endl;
        }
};

int main(){
    string teacher_Name, teacher_Branch;
    int teacher_Age, teacher_Experience;

    cout << "Enter the Teacher's Name,  Age, Branch, and Experience: ";
    cin >> teacher_Name >> teacher_Age >> teacher_Branch >> teacher_Experience;

    Teacher t1;
    t1.setInfo(teacher_Name, teacher_Branch, teacher_Age, teacher_Experience);
    t1.wtiteToFile();
}