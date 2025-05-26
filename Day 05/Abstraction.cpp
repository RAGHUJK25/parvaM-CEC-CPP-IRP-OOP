#include<iostream>
using namespace std;

class bike{
    public:
        string brand ,model , Engine_type;
        int year ,price;

    void InjectFuel(){ // internal data-Hidden
        cout << "Inject the Fuel-petrol!"<< endl;
    }    

    void IgniteFuel(){// internal data-Hidden
        cout << "Ignite the Fuel"<< endl;
    }    

    void start(string bikeModel){
        InjectFuel();//abstraction
        IgniteFuel();//abstraction
        cout << model << "Started , happy journey!";
    }

    void stopAccelaration(){// internal data-Hidden
        cout << " Accelaration stopped!" << endl;
    }

    void stopFuelFlow(){// internal data-Hidden
        cout << "Stopping the Fuel" << endl;
    }

    void stop(){
        stopAccelaration();//abstraction
        stopFuelFlow();//abstraction
        cout << model << "stopped, Lock the Vehicle!";
    }
};

int main(){
    bike bike1;
    bike1.brand = "Bajaj";
    bike1.model = "Pulsar NS125";
    bike1.Engine_type = "BS6";
    bike1.year = 2022;
    bike1.price = 150000;
    bike1.start(bike1.model); 
    bike1.stop();
}