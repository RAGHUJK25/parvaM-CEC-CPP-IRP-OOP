#include<iostream>
using namespace std;

class customer{
    public:
    string firstName, lastName;
    int Age, Rating;

    // Initializing the constructor
    customer(){
        firstName = "John";
        lastName = "Doe";
        Age = 10;
        Rating = 5;
    }

    void showDetails(){
        cout << "customer Name:" << firstName << " " << lastName << endl;
        cout << "customer age:" << Age<< endl;
    }

    void giveRating(int Rate);//the member function

    void showRating(int Rate);{
        cout << "you've given:" << Rating << "star Rating. thank you!" << endl;
    }
};
//scope resolution operator
void customer :: giveRating(int Rate){
    //defined the member function
    Rating = Rate;
}

int main(){
    customer cust1; //inovoked the the constructor to assing the default value

    cust1.showDetails();
    cust1.showRating();

    customer cust2;

    cust2.firstName = "Raghu";
    cust2.lastName = ".JK";
    cust2.Age = 24;

    int starRating;

    cout << "Give your Rating(0-5):";
    cin >> starRating;

    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}