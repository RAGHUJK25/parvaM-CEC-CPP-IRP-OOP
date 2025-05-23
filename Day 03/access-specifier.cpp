#include<iostream>
using namespace std;

class Bank{
    private:
    int balance = 10000;
    public:
    //member data of the fuction
    string custName, custEmail;
    int AccountNo;

    void CreateAccount(string cName,string cEmail){
        custName =cName;
        custEmail =cEmail;
    }

    void displayInfo(){
        cout << "Customer Name: " << custName << endl;
        cout << "Customer email: " << custEmail << endl;
    }

    void AddBalance(int account,int Ammount){
        balance += Ammount;
        cout << "the Ammount has been Deposited successfully" << endl;
    }

    void WithdrawAmmount(int account,int Ammount){
        balance -= Ammount;
        cout << "the Ammount has been Withdrawed successfully" << endl;
    }   

    void CheckBalance(){
        cout << "Bank Balance: " << balance << endl;
    }
};

int main(){
    Bank cust1; // object declaired
    string name, email;
    int AccountNo,Ammount;

    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your Email ID:";
    cin >> email;
    cout << "Enter your Account NUmber:";
    cin >> AccountNo;
    cout << "Enter your Ammount to be Deposited:";
    cin >> Ammount;


    cust1.CreateAccount(name, email);
    cust1.displayInfo();
    cust1.AddBalance(AccountNo, Ammount);
    cust1.CheckBalance();

    cout << "Enter the Ammount to be Withdraw:";
    cin>> Ammount;

    cust1.WithdrawAmmount(AccountNo, Ammount);
    cust1.CheckBalance();
}