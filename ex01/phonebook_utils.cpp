#include "phone.hpp"

std::string PhoneBook::addName(void)
{
    std::string name;
    while (1)
    {
        std::cout << "📝FIRST NAME: ";
        if (!std::getline(std::cin, name)){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (!name.empty()){
            break ;
        }
        std::cout << "Name cannot be empty, try again:" << std::endl;
    }
    return name;
}

std::string PhoneBook::addLastname(void)
{
    std::string lastname;
    while (1)
    {
        std::cout << "📝LAST NAME: ";
        if (!std::getline(std::cin, lastname)){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (!lastname.empty()){
            break ;
        }
        std::cout << "Name cannot be empty, try again:" << std::endl;
    }
    return lastname;
}

std::string PhoneBook::addNickame(void)
{
    std::string nickname;
    while (1)
    {
        std::cout << "📝NICKNAME: ";
        if (!std::getline(std::cin, nickname)){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (!nickname.empty()){
            break ;
        }
        std::cout << "Name cannot be empty, try again:" << std::endl;
    }
    return nickname;
}

std::string PhoneBook::addPhonenumber(void)
{
    std::string phonenumber;
    while (1)
    {
        std::cout << "☎️ PHONE NUMBER: ";
        if (!std::getline(std::cin, phonenumber)){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (!phonenumber.empty()){
            break ;
        }
        std::cout << "Name cannot be empty, try again:" << std::endl;
    }
    return phonenumber;
}

std::string PhoneBook::addSecret(void)
{
    std::string secret;
    while (1)
    {
        std::cout << "🤫DARKEST SECRET: ";
        if (!std::getline(std::cin, secret)){
            std::cout << "(EOF detected)." << std::endl;
            std::exit(1);
        }
        if (!secret.empty()){
            break ;
        }
        std::cout << "Name cannot be empty, try again:" << std::endl;
    }
    return secret;
}