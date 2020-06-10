// exercicio_matrizes.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* c;

    int x, y,z;
    int matrizA[5] = {2, 2, 3, 3, 4 };
    int matrizB[5];
    int* matrizC = NULL;
    int* matrizD[5];
    int matrizBD[2][3] = { {1,2,3},{4,5,6} };
    int matrizTD[2][2][2];



    matrizB[0] = 1;
    matrizB[1] = 3;
    matrizB[2] = 5;
    matrizB[3] = 7;
    matrizB[4] = 9;

    for (x = 0; x < 5; x++)
    {
        printf("\n matrizA [%d] = %d, matrizB[%d] = %d", x, matrizA[x], x, matrizB[x]);
    }

    for (x = 0; x < sizeof(matrizA) / sizeof(int); x++)
    {

        printf("\n matrizA [%d] = %d, matrizB[%d] = %d", x, matrizA[x], x, matrizB[x]);
    }

    matrizC = (int*) malloc(5 * sizeof(int));
    matrizC[0] = 10;
    matrizC[1] = 20;
    matrizC[2] = 30;
    matrizC[3] = 40;
    matrizC[4] = 50;

    for (x = 0; x < 5; x++)
    {
        printf("\n matrizC [%d] = %d", x, matrizC[x]);
    }
     
    free(matrizC);

    matrizD[0] = &matrizA[0];
    matrizD[1] = &matrizA[1];
    matrizD[2] = &matrizB[0];
    matrizD[3] = &matrizB[1];
    y = 3;
    matrizD[4] = &y;

    for (x = 0; x < 5; x++)
    {
        printf("\n matrizD [%d] = %d", x, *matrizD[x]);
    }

    matrizBD[0][0] = 55;
    matrizBD[1][2] = 111;

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 3; y++)
        {
            printf("\n matrizBD[%d][%d] = %d", x, y, matrizBD[x][y]);
        }
    }

    matrizTD[0][0][0] = 1;
    matrizTD[0][0][1] = 2;
    matrizTD[0][1][0] = 3;
    matrizTD[0][1][1] = 4;
    matrizTD[1][0][0] = 5;
    matrizTD[1][0][1] = 6;
    matrizTD[1][1][0] = 7;
    matrizTD[1][1][1] = 8;

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            for (z = 0; z < 2; z++)
            {
                printf("\n matrizTD[%d][%d][%d] = %d", x, y,z, matrizTD[x][y][z]);
            }
        }
    }


    scanf("%c", &c);
    return 0;
}

