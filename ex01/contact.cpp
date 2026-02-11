#include "phone.hpp"

void    Contact::addContact(void)
{
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

    setContact(name, lastname, nickname, number, secret);
}

void    Contact::setContact(
    std::string name,
    std::string lastname,
    std::string nickname,
    std::string number,
    std::string secret)
{
    name_ = name;
    if (name_.length() > 10)
    {
        name_.resize(10);
        name_[9] = '.';
    }
    lastname_ = lastname;
    if (lastname_.length() > 10)
    {
        lastname_.resize(10);
        lastname_[9] = '.';
    }    
    nickname_ = nickname;
    if (nickname_.length() > 10)
    {
        nickname_.resize(10);
        nickname_[9] = '.';
    }    
    number_ = number;
    if (number_.length() > 10)
    {
        number_.resize(10);
        number_[9] = '.';
    }    
    secret_ = secret;
    if (secret_.length() > 10)
    {
        secret_.resize(10);
        secret_[9] = '.';
    }
}

void    Contact::printContact(void)
{
    std::cout << name_ << std::endl;
    std::cout << lastname_ << std::endl;
    std::cout << nickname_ << std::endl;
    std::cout << number_ << std::endl;
    std::cout << secret_ << std::endl;
}