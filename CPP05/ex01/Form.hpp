#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool assigned;
        const int signGrade;
        const int execGrade;
    public:
        ~Form();
        Form();
        Form(std::string newName, const int newSign, const int newExec);
        Form(const Form& copy);
        Form& operator=(const Form& copy);

        
};

#endif
