#include <iostream>
using namespace std;

class MyException: public exception{
public:
    virtual const char * what(){
        return "something bad happened";
    }

};
class Base{
public:
    void throwException() {
        throw MyException();
    }
//    void throwException() throw(){ //this is error it indicates that it does not throw any exception coz no parameters passed
//        //in throw() ..and if i specify certain exception and i throw exception of different type it will give error again.
//
//    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Base base;
    try{
        base.throwException();
    } catch (MyException &e){
        cout<<"error : "<<e.what()<<endl;
    }
    //while catching exceptions always catch subclasses(exception ex : bad_alloc i.e. subclass of exception class) first then super classes(exception ex: exception) bcoz of polymorphism
    cout<<"still running";
    return 0;
}