// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str_fn;
    std::string str_ln;
    std::cout << "Enter your first name: "<< std::endl;
    std::cin >> str_fn;
    std::cout << "Enter your last name: "<< std::endl;
    std::cin >> str_ln;
    std::cout << "Your name is: " << str_fn <<" "<<str_ln<< std::sndl;

    std::cout << std::endl << std::endl;
    return (0);
}
