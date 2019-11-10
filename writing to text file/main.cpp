#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //std::cout << "Hello, World!" << std::endl;
    //ofstream outFile;
    fstream outFile; // this can be used for reading and writing to file

    string outputFileName = "text.txt";
    //outFile.open(outputFileName);
    outFile.open(outputFileName , ios::out); // ios::out specifies that we are opening it in write mode
    if(outFile.is_open()){
        outFile<<"hello there bro"<<endl;
        outFile<<"\n1234";
        outFile.close();
    } else{
        cout<<"cant open the file : " <<outputFileName<<endl;
    }
    return 0;
}