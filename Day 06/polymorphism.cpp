#include<iostream>
using namespace std;

class Print{
    private:
        int number;
        float decimal;
        string word;
    public:
        void setInteger(int num);

        void setFloat(float deci);

        void setString(string str);

        void print(int n){
            cout << "printing the integer value:" << number << endl;
        }
        void print(float f){
            cout << "printing the float value:" << decimal << endl;
        }
        void print(string s){
            cout << "printing the string value:" << word << endl;
        }
};

void Print::setInteger(int num) {
    number = num;
}

void Print::setFloat(float deci) {
    decimal = deci;
}

void Print::setString(string str) {
    word = str;
}

int main(){
    int i;
    float d;
    string w;

    cout << "Enter the each of the following (1 integer , 1 float & 1 string): ";
    cin >> i >> d >> w;

    Print p1; //object creation
    p1.setInteger(i);
    p1.setFloat(d);
    p1.setString(w);
    
    p1.print(i);
    p1.print(d);
    p1.print(w);
}