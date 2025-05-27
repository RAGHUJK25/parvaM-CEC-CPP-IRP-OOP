#include<iostream>
using namespace std;

class Animal { // Base class-level 0
        string name;
    public:
        void setName(string animalName) { 
            name = animalName;
        }

        void showAnimal() { // Getter function
            cout << "Animal Name: " << name << endl;
        }
};
 // Mammal --> carnivore (Symbolic representation)

 // animal class is deriving the carnivore class
//  carnivore class is derivined from Animal class

class carnivore: public Animal{ // Derived class /base class-level 1
    string vegetation;
    public:
        void setFood(string Food) {
            vegetation = Food;
        }

        void showFood() { 
            cout << "Type of Animal: " << vegetation << endl;
        }

};

// Mammal --> carnivore (Symbolic representation)
class Mammal : public carnivore{
 // Derived-level 2 
    string habitat;
    public:
        void setHabitat(string place) {
            habitat = place;
        }

        void showHabitat() { 
            cout << "Living place: " << habitat << endl;
        }
};

int main(){
    string animal_name, food_type, place_of_living;

    cout << "Enter Animal Name , its food type & place of living: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);

    carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);

    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}