#include<iostream>
using namespace std;

class company{
    private:
    string cin;
    int totalworth=0;

    public:
    string gstNum, location;
    int numOfEmp;

    //setter method
    void setDetails(string cinNum, int worth){
        cin = cinNum;
        totalworth = worth;
    }
    // getter method
    void getDetails(string gstNum){
        cout << "corporate Identity Number: " << cin << endl;
        cout << "Total worth of the company: " << totalworth << endl;
    }
    void getBasicDetails();//Declared member function
};

//function Defination outside the class
//syntax: return_type class_name :: member_function
void company :: getBasicDetails(){
    //scope resolution operator 
    cout << "GST NUmber: " << gstNum << endl;
    cout << "Location: " << location << endl;
    cout << "Number of the Employee: " << numOfEmp << endl;
}

int main(){
    company comp1; // object created
    comp1.gstNum = "1234656ABCD454";
    comp1.location = "Bengalore";
    comp1.numOfEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyworth;

    cinNumber = "98432468AR12" ;
    companyworth = 5000000;

    comp1.setDetails(cinNumber, companyworth);
    comp1.getDetails(comp1.gstNum);
}