#include<iostream>
#include<fstream> // Header file for file handling (read and write)
// to handle ofstream and ifstream 
using namespace std;

int main(){
    // fstream header file provides 3 classes for file handling:
    // fastreambase
    // ifstream(It is Derived by fstreambase class)- read from the file
    // ofstream(It is Derived by fstreambase class)- write to the file
    // writing in the file
    ofstream out("sample.txt"); // Create an output file stream to write to "sample.txt"
    string name;
    int Age;

    cout << "Enter your name: ";
    cout << "Enter your age: ";
    cin >> name; // Read user input
    cin >> Age; 
    out << "Hello " << name << "!" <<  "you're " << Age << "years old." << endl;
    out.close(); 

    ifstream read("ABD.txt");
    string line;
    
    getline(read, line);
    cout << "file contains: " << line << endl; 
    while(getline(read, line)) {
        cout << line << endl; 
    }
    read.close();
}