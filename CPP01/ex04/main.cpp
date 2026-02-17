#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << "ERROR: Try: ./program <archive name> <str_to_find> <str_replace>\n";
        return (1);
    }

    std::ifstream   archive(av[1]);
    std::string     str1 = av[2];
    std::string     str2 = av[3];

    if (!archive.is_open()){
        std::cerr << "Error opening the file\n";
        return (1);
    }
    std::string     outfile_name = av[1];
    std::ofstream   outfile((outfile_name + ".replace").c_str());
    std::string     result;
    std::string     temp;
    while (std::getline(archive, temp)){
        if (!result.empty())
            result = result + '\n' + temp;
        else
            result = result + temp;
        size_t  pos = result.find(str1);
        while (pos != std::string::npos){
            result.erase(pos, str1.length());
            result.insert(pos, str2);
            pos = result.find(str1, pos + str2.size());
        }
    }
    outfile << result << std::endl;

    archive.close();
    return 0;
}