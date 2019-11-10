#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push , 1)
struct person{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)
int main() {
    person p1 = {"ankit" , 19 , 68};
    person p2 = {"deepak" , 21 , 70};
    string fileName = "text.bin";
    ofstream outputFile;
    //////////////  write to binary file ///////////////
    outputFile.open(fileName , ios::binary|ios::out); //ios::out is not necessary since we created ofstream object;
    if(!outputFile.is_open()){
        cout<<"couldn't create / open file"<<endl;
        return 1;
    }

    //outputFile.write((char *)&p1 , sizeof(person));
    //better way
    outputFile.write(reinterpret_cast<char *>(&p1), sizeof(person));
    outputFile.write(reinterpret_cast<char *>(&p2), sizeof(person));
    outputFile.close();

    ////////////////  read binary file  ///////////////////

    ifstream inputFile;
    inputFile.open(fileName , ios::binary|ios::in); //ios::in is not necessary since we created ifstream object;
    if(!inputFile.is_open()){
        cout<<"couldn't open file"<<endl;
        return 11;
    }

    //inputFile.read((char *)&getperson , sizeof(person));
    //better way
    person getperson = {};
    while(inputFile.read(reinterpret_cast<char *>(&getperson), sizeof(person))){

        cout<<getperson.name<<"   ||  "<<getperson.age<< "   ||    "<<getperson.weight<<endl;

    }
    inputFile.close();


    return 0;
}