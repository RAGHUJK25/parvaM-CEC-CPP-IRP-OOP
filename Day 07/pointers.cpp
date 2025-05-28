#include<iostream>
using namespace std;

int main(){
    int a;
    int *ptr = &a ;
    // pointer declaration
    // datatype *pointer_name
    //assing the address of the pointer : &variable_name
    // datatype of pointer should be same as the datatype of the variable whose address is being assigned to the pointer
    // * refers to the pointer variable
    // & refers to the address of the variable
    // ptr refers to the address of ponters
    //* ptr refers to the value pointed by the pointer

    float decimal;
    float *f = &decimal; 
    
    cout << " Enter the Value of a: ";
    cin >> a; 

    cout << " Enter the Value of decimal: ";
    cin >> decimal;

    cout << " Value of a:" << a << endl;
    cout << " Address of a: " << &a << endl; // address of a
    cout << " Value of pointer(ptr): " << ptr << endl;
    cout << " Address of ptr: " << &ptr << endl; 
    cout << " value pointed by ptr: " << *ptr << endl; 
    cout << " Value of a:" << a << endl;

    cout << " Address of decimal: " << decimal << endl; // address of a
    cout << " Value of decimal): " << &decimal << endl;
    cout << " Value of pointer(f): " << f << endl;
    cout << " Address of ptr: " << &f << endl; 
    cout << " value pointed by ptr: " << *f << endl; 
} 