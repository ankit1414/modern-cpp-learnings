#include <iostream>
using namespace std;

void mightGoWrong(){
    bool error1 = false;
    bool error2 = false;
    bool error3 = true;
    if(error1){
        throw 8;
    }
    if(error2){
        throw "here is a spicy exception for you";
    }
    if(error3){
        throw string("here is a spicy exception for you directly from string class");
    }
}
int main() {
    cout << "Hello, World!" << std::endl;
    try{
        mightGoWrong();
    } catch(int e){
        cout<<"error code : "<< e<<endl;
    } catch (char const * e){
        cout<<"error message : "<<e<<endl;
    } catch(string e){
        cout<<"error string : "<<e<<endl;
    }
    cout<<"still running";
    return 0;
}