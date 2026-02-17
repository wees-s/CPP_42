#include "HumanB.h"
#include "Weapon.h"

class HumanB{
    private:
        Weapon* weapon;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack();
        void setWeapon(Weapon& weapon);
};