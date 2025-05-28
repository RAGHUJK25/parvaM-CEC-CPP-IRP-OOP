#include<iostream>
using namespace std;

class vehicle{ //base class
    private:
        string riding_mode;

    public:
        void setMode(string mode){
            riding_mode = mode;
        }

        string useMode(){
            return riding_mode;
        }
};

class Bike : public vehicle { //Derived class can access the data & member fuction of base class (via public)
    private:
        string brand;

    public:
        void setName(string name) {
            brand = name;
        }

        string showName(){
            return brand;
        }
};

int main(){
    string mode_of_transport, brand_name;

    cout << "Enter the mode of transport & Brand name of your Bike : ";
    cin >> mode_of_transport >> brand_name;

    Bike bike1; // object created of the derived class 
    bike1.setMode(mode_of_transport); // accessing the member function of base class (inheriting the properties)
    bike1.setName(brand_name);

    cout << "I've a " << bike1.showName() << " bike , Itravel to my native via " << bike1.useMode() << "." << endl;
}