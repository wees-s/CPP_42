#include "phone.hpp"

void    PhoneBook::addContact(void)
{
    if (next == 8)
        next = 0;
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string number;
    std::string secret;

    std::cout << "FIRST NAME: ";
    std::getline(std::cin, name);
    if (name.empty())
        exit(EXIT_FAILURE);
    std::cout << "LAST NAME: ";
    std::getline(std::cin, lastname);
    if (lastname.empty())
        exit(EXIT_FAILURE);    
    std::cout << "NICKNAME: ";
    std::getline(std::cin, nickname);
    if (nickname.empty())
        exit(EXIT_FAILURE);
    std::cout << "PHONE NUMBER: ";
    std::getline(std::cin, number);
    if (number.empty())
        exit(EXIT_FAILURE);
    std::cout << "SECRET: ";
    std::getline(std::cin, secret);
    if (secret.empty())
        exit(EXIT_FAILURE);
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
        std::getline(std::cin, input);
        if (input.empty())
            exit(EXIT_FAILURE);
        if (input.length() > 1)
        {
            std::cout << "ERROR: WRONG INDEX" << std::endl;
            continue ;
        }
        else if ((nb = input[0] - '0') - 1 < count)
        {
            contacts[nb].fullContact();
            break ;
        }
        else
            std::cout << "ERROR: WRONG INDEX" << std::endl;
    }
}

int PhoneBook::getCount(void)
{
    return(count);
}