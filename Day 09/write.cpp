#include<iostream>
#include<fstream>
using namespace std;

int main() {
    //we have defined the write object of ofstream class
    ofstream write("a.txt");//opening the file & writing in the file using write object
    write << " Good Morning! Students " << endl;
    write << " we shall work on file handling!." << endl;
    write.close();  //closing the file after writing

    ofstream fout("b.txt"); 
    fout << "written the file using another user Defined object: fout." << endl;
    fout.close();

    // we can use any word to makje an object, EX: write, fout, file, out, w , etc.
    
} 