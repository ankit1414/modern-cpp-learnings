#include <iostream>
using namespace std;

class CanGoWrong{
public:
    CanGoWrong(){
        char *pmemory = new char[99999999999999999];
        delete[] pmemory;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    try{
        CanGoWrong canGoWrong;
    } catch (bad_alloc e){
        cout<<"what() : "<< e.what()<<endl;
    }
    cout<<"still running";
    return 0;
}