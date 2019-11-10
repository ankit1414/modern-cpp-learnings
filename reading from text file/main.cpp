#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream fileHandler;
    string fileName = "textfile.txt";
    fileHandler.open(fileName , ios::in);

    if(fileHandler.is_open()){

        string line;
        //fileHandler>>line; // this input operator will stop reading when a white space appears
        //if we want to read a line we should better use getline(fileHandler , name of string to which it will write);
        while(!fileHandler.eof()) { // while(fileHandler) this will also work coz of magic done by operator overloading
            getline(fileHandler, line);
            cout << line<<endl;
        }
        fileHandler.close();
    } else{
        cout<<"couldn't open file : "<<fileName<<endl;
    }

    return 0;
}