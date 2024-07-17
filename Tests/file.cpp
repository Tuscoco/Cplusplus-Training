#include <iostream>
#include <fstream>

int main()
{
    std::ofstream arquivo("teste.txt");

    if(arquivo.is_open()){

        arquivo << "Hello World!" << std::endl;

        arquivo.close();

    }else{
        std::cerr << "FALHA AO ABRIR O ARQUIVO!!!" << std::endl;
    }

    std::ifstream arquivo2("teste.txt");

    if(arquivo2.is_open()){

        std::string linha;

        while(std::getline(arquivo2,linha)){
            std::cout << linha << std::endl;
        }

        arquivo2.close();

    }else{
        std::cerr << "ERRO AO ABRIR O ARQUIVO!" << std::endl;
    }

    return 0;
}