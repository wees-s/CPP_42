#include "phone.hpp"

class PhoneBook{
    private:
        Contact contacts;
        int count;
        int next;
    public:
        PhoneBook() : count(0), next(0) {}
};
