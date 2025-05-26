#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;
    
    public:
        string pizzatype ,size;
        int price;
        bool ispaymentDone;

    void orderPizza(){
        cout << "Order your Pizza by selecting your favourate Pizza:" << endl;
    }

    void bookPizza(){
        cout << "Booking Pizza!" << endl;
    }

    void bakePizza(string type , string pizzasize){
        pizzatype = type;
        size = pizzasize;
        cout << "Pizza Type:" << pizzatype << ",Size " << size << endl;
    }
    void addIngredient(string secret){
        secretIngredient = secret;
    }

    void ConfirmOrder(){
        cout << "order confirmed! " << endl;
    }

    bool checkpayment(int money , bool payment){
            price = money;
            ispaymentDone = payment;
            if(ispaymentDone){ 
                cout << "Ammount paid: Rs." << money << ". payment Successful!" << endl;
                ConfirmOrder();
                bookPizza();
                return true;
            }
            else{
                cout << "Ammount Due: Rs." << money << ". payment Pending!" << endl;
                return false;
            }    
    }

    void servePizza(int Ammount, bool paid, string typeOfPizza,string sizeOfpizza ,string secretIteam){
        if(!checkpayment(Ammount, paid)){
            cout << "order Cancelled due to the pending payment!" << endl;
        }
        else{
        bakePizza(typeOfPizza ,sizeOfpizza);
        addIngredient(secretIteam);
        cout << "pizza served! Enjoy Your Pizza";
        }
    }

};

int main(){
    string pizType, size ,secretIng;
    int pizzaAmmount;
    bool AmmountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout << "enter the pizza type (veg or Non-veg),size( regular/Medium/large):" << endl;
    cin >> pizType >> size;

    pizzaAmmount = 399;// example Ammount
    cout << "Did the pay the Ammount (Type '1' if Paid /type '0' if not paid)" << endl;
    cin >> AmmountPaid;


    customer1.servePizza(pizzaAmmount , AmmountPaid,pizType,size ,secretIng);
    return 0;
}