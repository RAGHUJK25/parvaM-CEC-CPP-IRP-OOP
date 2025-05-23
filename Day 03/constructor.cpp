#include<iostream>
using namespace std;

class calculate{
    public: //member data
    int num1, num2;
    float res;

    // Declared the constructor & it is also a Default Constructor
    calculate(){ 
        num1 = 5;
        num2 = 10;
    }

    // member fuction
    void showOutput(){
        cout << "Addition: " << num1 + num2 << endl;
        cout << "subtraction: " << num1 - num2 << endl;
        cout << "multiplication: " << num1 * num2 << endl;
        cout << "quotient: " << num1 / num2 << endl;
        cout << "Remainder: " << num1 % num2 << endl;
    }
};

int main(){
    // Initializing the default value using constructor automatically when object is is declared
    calculate c1;
    // object
    // Assigning hte values to the data Members
    calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();
}
