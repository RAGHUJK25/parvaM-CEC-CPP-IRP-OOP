#include<iostream>
using namespace std;

class wish{
    private:
        string name;
        int age;

    public:
        wish(){
            //default constructor
            name = "Unknown:";
            age = 0;
        }

        wish(string n , int a);
            //parameterized constructor

        void Birthdaywishes();
};

//defining the parameterized constructor outside the class using scope resolution operator
wish :: wish(string n , int a){
    name = n;
    age = a;
}

void wish :: Birthdaywishes(){//defining member function outside of the class using scope resolution operator
            cout << "Happy Birthday " << name << " ! Now you're " << age << " years old. "<< endl;
        }

int main(){
    string personName;
    int personAge;

    wish person1; //object declared
    person1.Birthdaywishes();

    cout << " Enter your Name :" ;
    cin >>personName;
    cout <<" enter your age :";
    cin >> personAge;

    wish person2(personName, personAge);
    person2.Birthdaywishes();
}
