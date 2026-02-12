#include "phone.hpp"

class Contact{
    private:
        std::string name_;
        std::string lastname_;
        std::string nickname_;
        std::string number_;
        std::string secret_;
    public:
        Contact() {};
        void    setContact
        (
            std::string name,
            std::string lastname,
            std::string nickname,
            std::string number,
            std::string secret
        );
        void    printContacts(int index);
};
