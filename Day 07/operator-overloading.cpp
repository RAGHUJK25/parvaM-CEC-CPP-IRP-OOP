#include<iostream>
using namespace std;

class  Increament{
    private:
        int number, value, value1;
    public:
        void setNumber(int num){
            number = num;
        }

        // syntax for operator overloading:
        // return_type operator symbol(parameter) { parameter is optional}
        // Unary operator overloading:
        void operator ++(){
            value = number + 5; // incrementing the number by 1
        }

        void operator --(){
            value1 = number - 5; // decrementing the number by 1
        }

        void showValue(){
            cout << " before icreamenting : " << number << endl;
            cout << "after icreamenting : " << value << endl;
            cout << " before decreamenting : " << number << endl;
            cout << "after decreamenting : " << value1 << endl;
        }
};

int main(){
    int n;

    cout << "Enter any number to incrementing and decreamenting its by 1: ";
    cin >> n;
    Increament num1;

    num1.setNumber(n);
    ++num1;

    num1.setNumber(n);
    --num1;

    num1.showValue();

    cout << " number after incrementing : " << ++n << endl;
    cout << " number after decrementing : " << --n << endl;
}