#include "phone.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int count;
        int next;
    public:
        PhoneBook() : count(0), next(0) {}
        void	addContact(void);
        void    allContacts(void);
        int     getCount(void);
};
