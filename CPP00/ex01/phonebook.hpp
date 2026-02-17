#include "phone.hpp"

class PhoneBook{
    private:
        Contact contacts[8];
        int count;
        int next;
    public:
        PhoneBook( void );
        void	    addContact(void);
        void        allContacts(void);
        int         getCount(void);
        std::string addName(void);
        std::string addLastname(void);
        std::string addNickame(void);
        std::string addPhonenumber(void);
        std::string addSecret(void);
};
