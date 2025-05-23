#include<iostream>
using namespace std;

void sayHello(){
    cout << " Hello!" << endl;
}
int sayHi(string name){
    cout << " Hi, "<< name << endl;
}
int greet(string fname, string lname,int age){
    cout << " Hi, "<< " " <<lname << ",Age" << age << endl;
}

int main(){
    string firstName,lastName,friendsName;
    int Age;
    cout << " enter your first name: ";
    cin >> firstName;
    cout << " Enter your last name:";
    cin >> lastName;
    cout <<" Enter your age:";
    cin >> Age;
    cout <<" Enter your friends name:";
    cin >> friendsName;
    sayHello(); // fuction call
    sayHi(firstName);
    sayHi(friendsName);
    greet(firstName,lastName,Age);
}