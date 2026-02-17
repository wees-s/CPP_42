#include "Zombie.h"

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void setName( std::string name );
        void announce( void );
};