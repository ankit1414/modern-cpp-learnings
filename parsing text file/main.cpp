#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream file;
    string filename = "formatedFile.txt";
    file.open(filename);


    if(!file.is_open())
        return 1;

    while(!file.eof()){
        string line, whitespaces;
        int population;
        getline(file , line , ':');
        file>>population;
        file>> ws; // this is similar to --  getline(file , whitespaces);
        cout<<line << " -- " <<population <<endl;
    }

    file.close();
    return 0;
}