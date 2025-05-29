#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrAge = &age; // Address of the Age(Pointer Reference)

    string name;
    string *ptrName = &name; 
    cout << "Enter ypur Name & Age: ";
    cin >> name >> age; 

    // *ptrAge & *namePtr pointer Dereference
    cout  <<"your Name is: " << (*ptrName) << ",you're " << (*ptrAge)  << "years old." << endl;
    cout << " the Address of name is stored in pointer ptrName: " << ptrName << endl;
    cout << " the Address of age is stored in pointer ptrAge: " << ptrAge << endl;   
    
    int *num1 = new int(5); // Dynamic memory allocation
    // The reference variable is not  needed for Assining the Address to the pointer we can use new keyword
    cout << "The value within the pointer num1: " << (*num1);
    int size;

    int *arr = new int[size]; // Dynamic memory allocation for an integer array
    cout << "Enter the Size of an Array";
    cin >> size;

    cout << " Enter the " << size << " elements into an array: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i]; 
    }

    cout << " the Array cointains: " << size << " elemnts , They are: " << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}