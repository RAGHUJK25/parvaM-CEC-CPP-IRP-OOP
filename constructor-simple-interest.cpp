#include<iostream>
using namespace std;

class Interest{
    private:
        int principle, term, rate,Totalinterest;
        float rateInPercent;

    public:
    int simpleInterest = 0;

        Interest(){
            // Default constructor
            principle = 0;
            term = 0;
            rate = 0;
            Totalinterest = 0;
            rateInPercent = 0;
            cout << "Total Interest Earned:" << Totalinterest << endl;
        }
        void setValues(int a ,int y){
            principle = a;
            term = y;
        }

        void setrateValueInteger(int rateInInterest){
            rate = rateInInterest;
        }

        void setrateValuefloat(int rateInfloat){
            rateInPercent = rateInfloat;
        }

        Interest(int p, int t, int r){// parameterized constructor
            setValues(p , t);
            setrateValueInteger(r);
            simpleInterest =(principle*term*rate)/100;
            cout << "simple Interest for the following Details:" << endl;
            cout << "Principle Ammount:" << principle << endl;
            cout << "no.of Years(term):" << term << endl;
            cout << "Rate of Interest(in Interest):" << rate << endl;
            Totalinterest = principle + simpleInterest;
            cout << "Total Interest Earned:" << Totalinterest << endl;
        }

        Interest(int p, int t, float rateInDecimal){// parameterized constructor
            setValues(p , t);
            setrateValuefloat(rateInDecimal);
            simpleInterest =(principle*term*rateInPercent);
            cout << "simple Interest for the following Details:" << endl;
            cout << "Principle Ammount:" << principle << endl;
            cout << "no.of Years(term):" << term << endl;
            cout << "Rate of Interest(in Decimal):" << rate << endl;
            Totalinterest = principle + simpleInterest;
            cout << "Total Interest Earned:" << Totalinterest << endl;
        }
        ~Interest(){ //Automatically called to free up the memory used by constructor when object is lost the scope
            cout <<"Destructor has been called to destroy or free up the memory used by constructor" << endl;
        };
};

int main(){
    int Ammount,year,rateOfInterest;
    float interestRate;

    Interest int1;//default constructor
    Interest int4;

    cout << " Enter the Principle Ammount, No.of Years & Rate of Interest(eg.5):";
    cin >> Ammount >> year >> rateOfInterest;

    Interest int2(Ammount, year, rateOfInterest);

    cout << " Enter the Principle Ammount, No.of Years & Rate of Interest(eg.0.05):";
    cin >> Ammount >> year >> interestRate;

    Interest int3(Ammount, year, interestRate);
}