#include "Harl.hpp"

void Harl::debug( void ){
    std::cout << "Harl: Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplo-picles-ketchup-especial. Eu realmente amo!" << std::endl;
}
void Harl::info( void ){
    std::cout << "Harl: Eu não acredito que adicionar bacon extra custa mais dinheiro. Vocês não colocaram bacon suficiente no meu hambúrguer! Se vocês tivessem colocado, eu não estaria pedindo por mais!" << std::endl;
}
void Harl::warning( void ){
    std::cout << "Harl: Eu acho que mereço ter bacon extra de graça. Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}
void Harl::error( void ){
    std::cout << "Harl: Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}
void Harl::complain( std::string level ){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++){
        if (levels[i] == level){
            (this->*actions[i])();
            return ;
        }
    }
    std::cout << "Harl reclamou tanto que foi de base 💀" << std::endl;
}