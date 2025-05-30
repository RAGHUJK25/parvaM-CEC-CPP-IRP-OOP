#include<iostream>
#include<fstream>
using namespace std;

class car{
    private:
        string brand ,model, variant, feature[10];
        int year,price,featurecount;
    public:
        addCarDetails(string carbramd, string carmodel, string carvariant, int year, int price) {
            brand = carbramd;
            model = carmodel;
            variant = carvariant;
            this->year = year;
            this->price = price; 
        }
        void addCarFeature(int count) {
            featurecount = count;
            cin.ignore();
            cout << " Enter the " << count << " car features: " << endl;
            for(int i = 0; i < count; i++) {
                getline(cin,feature[i]); //can enter multiple words as feature alon with space
            }
            cout << "Click Enter botton for next input." << endl;
        }
        void storeCarDetails() {
            ofstream store("car_details.txt",ios::app);
            store << "Car Details are follows: " << endl;
            store << "Car Brand: " << brand << endl;
            store << "Car Model: " << model << endl;
            store << "Car Variant: " << variant << endl;
            store << "Luanch Year: " << year << endl;
            store << "Offer Price: Rs." << price << endl;
            store << "Car hs this Features:\n";
            for(int i = 0; i < featurecount; i++) {
                    store << "\t" << i+1 <<" . " << feature[i] << endl;
                }
            store << "----------------------------------------\n" ;
        }
};

    
    int main() {
       string car_brand, car_model, car_variant ,car_feature[10];
       int feature_count, launch_year, launch_price;

       cout << "Enter the car Details: " << endl;
       cout << "brand , model, variant, launch year,launch price: ";
       cout << "EX: Tata,curvv, (petrol/EV/Diesel),2025,1500000: ";
       cin >> car_brand >> car_model >> car_variant >> launch_year >> launch_price;

       cout << "Enter the number of features: ";
       cin >> feature_count;

       car car1;
       car1.addCarDetails(car_brand, car_model, car_variant, launch_year, launch_price);
       car1.addCarFeature(feature_count);
       car1.storeCarDetails();

       car car2;
       car2.addCarDetails("Audi", "Q6", "petrol", 2010, 1500000);
       car2.addCarFeature(4);
       car2.storeCarDetails();
    }
