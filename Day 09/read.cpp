#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream read("a.txt");
    string file_contant;
//syntax for using getline():
//getline(object, string):
    getline(read, file_contant); 
    cout << " the First line contains: " << file_contant << endl;
    read.close();

    // To print all the line ,we need to make use of a loop
    ifstream show("a.txt");
    string all_lines;
    cout << "The file contains: " << endl;
    while(getline(show, all_lines)) {
        cout << all_lines  << endl;
    }
    read.close();

    // to Print the first character of the file
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "The first letter of the file is:" << letter << endl;
    fin.close();
}