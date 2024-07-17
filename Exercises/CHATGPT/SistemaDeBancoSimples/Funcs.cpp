#include "Funcs.hpp"
#include <iostream>
#include <exception>

classe::Conta::Conta(){
    saldo = 0;
}

void classe::Conta::deposito(double din){
    try{

        if(din < 0){
            throw "Valor invalido!";
        }

        saldo += din;

    }catch(int e){
        std::cerr << "ERRO ENCONTRADO: " << e << std::endl;
    }
}

void classe::Conta::sacar(double din){
    try{

        if(din < 0){
            throw 200;
        }

        if(din > saldo){
            throw 100;
        }

        saldo -= din;

    }catch(int e){
        std::cerr << "ERRO ENCONTRADO: " << e << std::endl;
    }
}

double classe::Conta::getSaldo(){
    return saldo;
}

void classe::Conta::imprimirInfo(){
    system("cls");
    std::cout << "===============" << std::endl;
    std::cout << "Saldo: " << getSaldo() << std::endl;
    std::cout << "===============" << std::endl;
}