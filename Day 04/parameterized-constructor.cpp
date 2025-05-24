#include<iostream>
using namespace std;

class Area{
    private:
      int length, breadth;
    public:
        int res;
        Area(){// Default constructor(no parameters)
            length = 0;
            breadth = 0;
        }
        Area(int a, int b){// Parameterized constructor(eg . 2 parameter)
        length = a;
        breadth = b;
    }

    void calculatearea(){
        res = length * breadth;
        cout << "Area of rectangle with length: " << length << "and Breadth: " << breadth << "is Equal to" << res << endl;
    }
};

int main(){
    int len, wid;
    Area rect1; // objecte 1 created
    rect1.calculatearea();

    cout << " Enter the lrngth & Breadth for finding the Area of Reactangle:";
    cin >> len >> wid;

    Area rect2(len , wid); // objecte 2 created
    rect2.calculatearea();
}