#include "phone.hpp"

int main(void){
    //PhoneBook pb;
    Contact   ct;
    std::string input;

    while(input != "EXIT"){
        std::cout << "=========PhoneBook==========" << std::endl;
        std::cout << "OPTIONS: ADD | SEARCH | EXIT" << std::endl;
        std::cin >> input;
        if (input == "ADD")
        {
            system("clear");
            ct.addContact();
            ct.printContact();
        }
        else if (input == "SEARCH")
            break ;//funcao();
        else
            system("clear");
    }
}