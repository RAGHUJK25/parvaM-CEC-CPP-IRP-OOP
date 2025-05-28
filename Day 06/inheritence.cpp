#include<iostream>
using namespace std;

class Parent{ // Base class
    private:
        int net_worth = 0 ;
    public:
        string family_name, family_head;
        int n_of_members;

        void setData(int worth, string familyName,string familyHead, int member_count) {
            net_worth = worth;
            family_name = familyName;
            family_head = familyHead;
            n_of_members = member_count;
        }

        int showNetworth(){//getter function
            return net_worth;
        }

        int getFamilyInfo(){// getter function
            cout << " I'm from " << family_name
            << " family, My family head is " << family_head << ". our Family's Net-worth is About "  << showNetworth() << endl;
        }
};

//syntax fir declaring a derived class

// class derived_class_name : accessibility mode base_class_name

//1] by default, the accessibility mode is private

// 2] if derived class uses private accessibility mode, then the PUBLIC DATA & member fuction of the base class become private 

// 3] if derived class uses public accessibility mode, then the PUBLIC DATA & member fuction of the base class remains public

// 4] Derive class cannot inherit the data & member function of private member of base class

//class child : Parent { // Derived class(By default, it is private)
//class child :private Parent { // Derived class(private Accessbility mode))

class child : public Parent { // Derived class(public Accessbility mode)
    public:
        string member_name;
        int age;

        void addDetails(string name, int person_Age) {// member function
            member_name = name;
            age = person_Age;
        }
        void getFamilyDetails() {// member function
           cout <<"My name is " << member_name <<  "And I'm " << age << "years old." << endl;
           getFamilyInfo() ;// inheriting the function from Parent class
        }
};

int main(){
    string fName, fHead ,cName;
    int childage, fWorth ,fMembers;
    
    cout << "Enter Family Name:\n family Head:\n number of Members:\n Net Worth:\n";
    cin >> fName >> fHead >> fMembers >> fWorth;

    Parent p1;
    p1.setData(fWorth, fName, fHead, fMembers);
    p1.getFamilyInfo();

    cout << "Enter Child Name:\n Age:\n";
    cin >> cName >> childage;

    child c1;
    // c1.family-head ;(As child class is derived with public- accessebiliity mode
    // we can directly access the public members of base class)
    c1.setData(fWorth, fName, fHead, fMembers);
    c1.addDetails(cName, childage);

    c1.getFamilyDetails();
    return 0;
}
