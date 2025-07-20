#include <iostream>
#include <string>

int main (){

    std::string name{};
    std::cout<<"Enter your full name: ";
    std::getline(std::cin>>std::ws,name);

    int age{};
    std::cout<<"\nEnter your age: ";
    std::cin>> age;

    std::cout<<"Your age + length of name is: "<<name.length()+age;
    return 0;
}