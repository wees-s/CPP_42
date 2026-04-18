#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string newName, int newGrade) : name(newName)
{
    if (newGrade < 1)
        throw GradeTooHighException();
    else if (newGrade > 150)
        throw GradeTooLowException();
    else
        grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        this->grade = copy.grade;
    return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too Low");
}

const std::string Bureaucrat::getName() const {
    return (name);
}

int Bureaucrat::getGrade() const {
    return (grade);
}

void Bureaucrat::upGrade()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void Bureaucrat::downGrade()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", grade: " << b.getGrade();
    return (os);
}