#include <iostream>

int main()
{
    int n,i;

    std::cout << "Informe o tamanho do vetor: ";
    std::cin >> n;

    while(n <= 0)
    {
        std::cout << "Informe o tamanho do vetor: ";
        std::cin >> n;
    }

    int *vetor = new int[n];

    for(i = 0; i < n; i++)
    {
        vetor[i] = i;
    }

    std::cout << "[ ";

    for(i = 0; i < n; i++)
    {
        std::cout << vetor[i] << " ";
    }

    std::cout << "]";

    delete[] vetor;

    return 0;
}