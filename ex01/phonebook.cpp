#include "phonebook.hpp"

int main(void){
    std::string input;

    while(input != "EXIT"){
        std::cout << "=========PhoneBook==========" << std::endl;
        std::cout << "OPTIONS: ADD | SEARCH | EXIT" << std::endl;
        std::cin >> input;
        if (input == "ADD")
            funcao();
        else if (input == "SEARCH")
            funcao();
        else
            system("clear");
    }
}