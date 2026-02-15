#include "phone.hpp"

void    PhoneBook::addContact(void)
{
    if (next == 8)
        next = 0;
    std::string name = addName();
    std::string lastname = addLastname();
    std::string nickname = addNickame();
    std::string number = addPhonenumber();
    std::string secret = addSecret();

    system("clear");
    std::cout << "MESSAGE:";
    std::cout << std::setw(35) << "CONTACT ADDED SUCCESSFULLY" << std::endl;
    contacts[next].setContact(name, lastname, nickname, number, secret);
    next++;
    if (count < 8)
        count++;
}

void PhoneBook::allContacts(void)
{
    std::string input;
    int         nb;

    for (int i = 0; i < count; i++)
        contacts[i].printContacts(i + 1);
    while (1)
    {
        std::cout << "CHOISE A CONTACT INDEX:";
        if (!(std::getline(std::cin, input))){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (input.empty()){
            std::cout << "ERROR: WRONG INDEX" << std::endl;
            break ;
        }
        if (input.length() > 1){
            std::cout << "ERROR: WRONG INDEX" << std::endl;
            continue ;
        }
        else if ((nb = input[0] - '0') - 1 < count){
            if (nb == 0)
            {
                std::cout << "ERROR: WRONG INDEX" << std::endl;
                break ;
            } 
            contacts[nb - 1].fullContact();
            break ;
        }
        else{
            std::cout << "ERROR: WRONG INDEX" << std::endl;
            break ;
        }
    }
}

int PhoneBook::getCount(void)
{
    return(count);
}