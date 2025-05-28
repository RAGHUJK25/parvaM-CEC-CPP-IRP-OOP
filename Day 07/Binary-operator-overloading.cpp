#include<iostream>
using namespace std;

class Complex{
    int real,imaginary; //private member

    public:
        Complex(){//default constructor
            real = 0;
            imaginary = 0;
        }

        Complex(int r, int i){ //parameterized constructor
            real = r;
            imaginary = i;
        }

        // Binaru operator overloading:
        Complex operator +(const Complex &c) { 
            Complex temp;
            temp.real = real + c.real;
            temp.imaginary = imaginary + c.imaginary;
            cout << " First Number sum is(comp1): " << real << " + " << imaginary << "i" << endl;
            cout << " Second Number sum is(comp2): " << c.real << " + " << c.imaginary << "i" << endl;
            return temp; 
        }

        Complex operator -(const Complex &c) { 
            Complex temp;
            temp.real = real - c.real;
            temp.imaginary = imaginary - c.imaginary;
            cout << " First Number Difference is(comp1): " << real << " - " << imaginary << "i" << endl;
            cout << " Second Number Difference is(comp2): " << c.real << " - " << c.imaginary << "i" << endl;
            return temp; 
        }

        void showSum(){
            cout << "Sum of 2 complex numbers: " << real << " + " << imaginary << "i" << endl;
        }
        void showDifference(){
            cout << "Difference of 2 complex numbers: " << real << " - " << imaginary << "i" << endl;
        }
};

int main(){
    int r1, i1, r2, i2;

    cout << "Enter the first complex number(real and imaginary number: eg.5 + 3i): " << endl;
    cin >> r1 >> i1;

    cout << "Enter the  second complex number(real and imaginary number: eg.5 + 3i): " << endl;
    cin >> r2 >> i2;

    Complex comp1(r1,i1);// obejct creation 
    Complex comp2(r2,i2);// obeject creation

    Complex sum = comp1 + comp2; // using overloaded + operator
    Complex Difference = comp1 - comp2; // using overloaded + operator

    cout << "The first sum complex number is: " << r1 << " + " << i1 << "i" << endl;
    cout << "The second sum complex number is: " << r2 << " + " << i2 << "i" << endl;

    cout << "The first Difference complex number is: " << r1 << " -" << i1 << "i" << endl;
    cout << "The second Difference complex number is: " << r2 << " - " << i2 << "i" << endl;


    sum.showSum();
    sum.showDifference();
    return 0;
}