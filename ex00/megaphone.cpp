#include <iostream>
#include <cctype>

int main(int ac, char **av){
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (short i = 0; av[i]; i++)
            for (short j = 0; av[i][j]; j++)
                std::cout << toupper(av[i][j]);
    }
    std::cout << std::endl;
    return (0);
}