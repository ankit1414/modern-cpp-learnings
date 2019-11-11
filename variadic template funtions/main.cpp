#include <iostream>
template <typename T>
T reconcatinate(T t){
    return t;
}

template <typename T , typename ... Args>
T reconcatinate(T t , Args ... args){
    return reconcatinate(args ...) + " " + t;

}

int main() {
    std::string s1 = "ankit" , s2 = "is" , s3 = "coding";
    std:: string cc = reconcatinate(s1 ,s2 , s3);
    std::cout<<cc<<std::endl;
    return 0;
}