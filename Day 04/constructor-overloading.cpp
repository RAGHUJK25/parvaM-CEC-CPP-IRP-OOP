#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth,height;
        float radius;

        public:
            int res;
            Area(){ // Default Constructor(no parameter)
                length = 0;
                breadth = 0;
                radius = 0;
                height = 0 ;
                res = 0;
                cout <<" Area:" << res << endl;
            }
            Area(int a){ // prameterized construcrtor with 1 parameter integer
                length = a;
                res = length * length;
                cout <<" Area of square :" << res << endl;
            }

            Area(float r){// prameterized construcrtor with 1 parameter float
                radius = r;
                res = 2*3.142 *radius;
                cout <<" Area of circle :" << res << endl;
            }
            Area(int c, int d){// prameterized construcrtor with 2 parameter
                length = c;
                breadth = d;
                res = length * breadth;
                cout <<" Area of Rectangle :" << res << endl;
            }
            Area(int l, int b, int h){// prameterized construcrtor with 3 parameter
                length = l;
                breadth = b;
                height = h;
                res = length * breadth *height;
                cout <<" Area of cube :" << res << endl;
            }
};

int main(){
    Area a1; //object created

    int len, wid, hgt;
    float rad;

    cout << " enter the length of the square:";
    cin >> len;
    Area a2(len);// finding the area of square ( 1 prameter - inter)

    cout << " enter the length & breadth of the reactangle:";
    cin >> len >> wid;
    Area a3(len,wid);// finding the area of rectangle 2 parameter

    cout << " enter the Radius of the circle:";
    cin >> rad;
    Area a4(rad);// finding the area of circle (1 prameter - float)

    cout << " enter the length, breadth & Height of the cube:";
    cin >> len >> wid >> hgt;
    Area a5(len,wid,hgt);// finding the area of cube 3 parameter
}