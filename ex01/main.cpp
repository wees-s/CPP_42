#include "phone.hpp"

static void    printPhonebook(void)
{
    std::cout << "===========================================" << std::endl;
    std::cout << "=================PhoneBook=================" << std::endl;
    std::cout << "OPTIONS:   ";
    std::cout << std::setw(10) << "ADD";
    std::cout << "|";
    std::cout << std::setw(10) << "SEARCH";
    std::cout << "|";
    std::cout << std::setw(10) << "EXIT" << std::endl;
}

int main(void){
    PhoneBook pb;
    std::string input;

    system("clear");
    while(input != "EXIT"){
        printPhonebook();
        if (!(std::getline(std::cin, input)))
        {
            std::cout << "(EOF detected)." << std::endl;
            break ;
        }
        if (input == "ADD")
        {
            system("clear");
            pb.addContact();
        }
        else if (input == "SEARCH")
        {
            if (pb.getCount() == 0)
            {
                system("clear");
                std::cout << "ERROR: NO CONTACTS TO SEARCH" << std::endl;
                continue ;
            }
            printOptions();
            pb.allContacts();
        }
        else
            system("clear");
    }
    return (0);
}