#include<iostream>
using namespace std;

class Teacher{
    private: //By Default all the data members of the class comes under private access Specifier
        string branch;
    public:
        string Name, qualification ;
        int experience;
        
        Teacher(){// Default constructor
            branch = " AI & ML";
            Name = " John Doe";
            qualification = " M.Tech";
            experience = 5;
            cout <<"welcome, John Doe! " << endl;
        }

        void setData(string Tname,string Tbranch,string Tqual,int exp){ //setter
            branch = Tbranch;
            Name = Tname;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName, string Teacherbranch, string Teacherqual, int Teacherexperience){
            //Parameterized constructor
            setData(TeacherName,Teacherbranch,Teacherqual,Teacherexperience);
            cout <<"welcome, " << Name <<" To " << branch <<"." << endl;
            cout << "You've graduated with,  " << qualification <<  "Degree and you've " <<  experience << "years of experience. " << endl;
        }
        //syntax for copy constructor(Reaference-construcor addrees-of-the-obeject)
        Teacher(Teacher &t){ //cpy constuctor 
            branch = t.branch;
            Name = t.Name;
            qualification = t. qualification;
            experience = t.experience;
        }

        void getData(){//getter
            cout <<"welcome, " << Name <<" To " << branch <<"branch." << endl;
            cout << "You've graduated with,  " << qualification <<  "Degree and you've " <<  experience << "years of experience. " << endl;
        }

        ~Teacher(){//Destructor 
            cout << "Object's work is done,Clearing the Memory! "<< endl;
        }
};


int main(){
    string n , b ,q , teacher;
    int e;

    Teacher teacher1;//object created and Invoked the Default contructor
     cout <<"Enter yor Name: \nqualification:\nbranch & experience:\n ";
     cin >> n >> q >> b >> e ;

     Teacher teacher2(n, q, b, e);

     Teacher teacher3 = teacher2 ;
     teacher3.getData();

}
