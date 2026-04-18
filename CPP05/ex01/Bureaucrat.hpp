#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        ~Bureaucrat();
        Bureaucrat();
        Bureaucrat(std::string newName, int newGrade);
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat& operator=(const Bureaucrat& copy);

        /*getters*/
        const std::string   getName() const;
        int                 getGrade() const;
        /*grades*/
        void    upGrade();
        void    downGrade();
        /*excepts*/
        class GradeTooHighException : public std::exception {
            public:
                const char * what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };


};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif