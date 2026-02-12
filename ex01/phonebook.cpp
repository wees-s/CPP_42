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
    std::cout << "LAST NAME: ";
    std::getline(std::cin, lastname);
    std::cout << "NICKNAME: ";
    std::getline(std::cin, nickname);
    std::cout << "PHONE NUMBER: ";
    std::getline(std::cin, number);
    std::cout << "SECRET: ";
    std::getline(std::cin, secret);
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
    for (int i = 0; i < count; i++)
    {
        contacts[i].printContacts(i + 1);
    }
}