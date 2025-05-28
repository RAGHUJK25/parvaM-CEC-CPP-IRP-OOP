#include<iostream>
using namespace std;

class calculate{
    public:
        int res;
        // Function Overloading: compile time polymorphism
        int sum(int num){ //sum expected 1 parameter(int)
            res = num + num;
            return res;
        }

        int sum(int num1 ,int num2){//sum expected 2 parameter(int)
            res = num1 + num2;
            return res;
        }

        float sum(float n1 ,float n2){//sum expected 2 parameter(float)
            res = n1 + n2;              
            return res ;
        }
};

int main() {
    int number1, number2;
    float decimal1,decimal2;

    cout << "Enter any two integer :" ;
    cin >> number1 >> number2;

    cout << "Enter any two decimal numbers :" ;
    cin >> decimal1 >> decimal2;

    calculate cal1;
    cout << " Adding the number itself :" << cal1.sum(number1) << endl;
    cout << " Addition of two integer :" << cal1.sum(number1 ,number2) << endl;
    cout << " Addition of two decimal :" << cal1.sum(decimal1, decimal2) << endl;
}