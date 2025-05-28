#include<iostream>
using namespace std;

class Base {
    public:
    void showBase(){
        cout << "base member function has been called." << endl;
    }
};

class derived : public Base {
    public:
    void showBase  (){//function overiding
        cout << "derived member function has been called." << endl;
        //syntax for calling base class name:: member fuction
        Base::showBase(); // calling base class member function using scope resolution operator
    }
};

// Example 2:
class Animal{
    public:
    void makeSound(){
        cout << "Animal makes some sound!" << endl;
    } 
};

class Dog : public Animal {
    public:
        void makeSound(){ // function overriding
            Animal ::makeSound(); // calling base class member function
            cout << "Dog barks!" << endl;
            }
};

class cat : public Animal {
    public:
        void makeSound(){ // function overriding
            cout << "Cat meows!" << endl;
        }
};

int main(){
    // Base b1;
    // b1.showBase(); 

    derived d1;
    d1.showBase(); 

    Dog dog1;
    dog1.makeSound(); 

    cat cat1; 
    cat1.makeSound();
}