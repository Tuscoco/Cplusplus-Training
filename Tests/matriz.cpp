#include <iostream>

int main()
{
    int **matriz = new int*[4];
    int i,j;

    for(i = 0; i < 4; i++)
    {
        matriz[i] = new int[4];
    }


    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            matriz[i][j] = 0;
        }
    }


    for(i = 0; i < 4; i++)
    {
        std::cout << "||";
        for(j = 0; j < 4; j++)
        {
            std::cout << matriz[i][j] << "||";
        }
        std::cout << std::endl;
    }


    for(i = 0; i < 4; i++)
    {
        delete[] matriz[i];
    }

    delete matriz;

    return 0;
}