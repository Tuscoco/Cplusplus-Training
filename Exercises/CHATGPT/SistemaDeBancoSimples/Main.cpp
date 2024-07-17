#include <iostream>
#include <exception>
#include "Funcs.hpp"
#include "Funcs.cpp"

using namespace classe;

int main()
{
    Conta c1;
    double aux;
    int op;
    char son;

    system("cls");

    std::cout << "===============BANCO===============" << std::endl;
    std::cout << "Gostaria de iniciar o programa?" << std::endl;
    std::cout << "===================================" << std::endl;

    std::cin >> son;

    if(son == 'N' || son == 'n'){
        return 0;
    }

    system("cls");

    while(1)
    {
        std::cout << "================================" << std::endl;
        std::cout << "1 - Imprimir Info" << std::endl;
        std::cout << "2 - Depositar" << std::endl;
        std::cout << "3 - Sacar" << std::endl;
        std::cout << "0 - Encerrar Programa" << std::endl;
        std::cout << "================================" << std::endl;

        std::cin >> op;

        if(op == 0){
            break;
        }else if(op == 1){
            c1.imprimirInfo();
        }else if(op == 2){
            std::cout << "Informe a quantia: ";
            std::cin >> aux;

            c1.deposito(aux);
        }else if(op == 3){
            std::cout << "Informe a quantia: ";
            std::cin >> aux;

            c1.sacar(aux);
        }
    }

    return 0;
}