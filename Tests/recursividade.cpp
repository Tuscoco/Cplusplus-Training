#include <iostream>

int i = 0;

void contar(int n){
    if(i > n){
        return;
    }
    std::cout << i;
    i++;
    contar(n);
}

int main(){
    int num = 10;

    contar(num);

    return 0;
}