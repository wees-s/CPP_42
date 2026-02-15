#include "phone.hpp"

void    Contact::setContact(
    std::string name,
    std::string lastname,
    std::string nickname,
    std::string number,
    std::string secret)
{
    name_ = name;
    lastname_ = lastname;  
    nickname_ = nickname; 
    number_ = number;  
    secret_ = secret;
}

void printOptions(void)
{
	std::cout << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::setw(10) << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "NICKNAME"  << std::endl;
}

void    Contact::printContacts(int index)
{
    std::string name = name_;
    std::string lastname = lastname_;
    std::string nickname = nickname_;
    std::string number = number_;
    std::string secret = secret_;

    std::cout << std::setw(10) << index;
    std::cout << "|";
    if (name.length() > 10)
    {
        name.resize(10);
        name[9] = '.';
    }
    std::cout << std::setw(10) << name;
    std::cout << "|";
    if (lastname.length() > 10)
    {
        lastname.resize(10);
        lastname[9] = '.';
    }
    std::cout << std::setw(10) << lastname;
    std::cout << "|";
    if (nickname.length() > 10)
    {
        nickname.resize(10);
        nickname[9] = '.';
    }
    std::cout << std::setw(10) << nickname << std::endl;
}

void    Contact::fullContact(void)
{
    std::cout << "NAME: ";
    std::cout << name_ << std::endl;
    std::cout << "LAST NAME: ";
    std::cout << lastname_ << std::endl;
    std::cout << "NICKNAME: ";
    std::cout << nickname_ << std::endl;
    std::cout << "PHONE: ";
    std::cout << number_ << std::endl;
    std::cout << "DARKEST SECRET: ";
    std::cout << secret_ << std::endl;
}