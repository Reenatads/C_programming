
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *c;

    int* matrizUnidimensional;
    int** matrizBidimencional;
    int x,y;
    matrizUnidimensional = (int*)malloc(5 * sizeof(int));

    matrizUnidimensional[0] = 15;
    matrizUnidimensional[1] = 25;
    matrizUnidimensional[2] = 35;
    matrizUnidimensional[3] = 45;
    matrizUnidimensional[4] = 55;


    for (x = 0; x < 5; x++)
    {
        printf("\n Matriz unidimensional[%d] = %d", x, matrizUnidimensional[x]);
    }
    free(matrizUnidimensional);

    matrizBidimencional = (int**)malloc(5 * sizeof(int*));

    matrizBidimencional[0] = (int*) malloc(2 * sizeof(int));
    matrizBidimencional[1] = (int*) malloc(2 * sizeof(int));
    matrizBidimencional[2] = (int*) malloc(2 * sizeof(int));
    matrizBidimencional[3] = (int*) malloc(2 * sizeof(int));
    matrizBidimencional[4] = (int*) malloc(2 * sizeof(int));

    matrizBidimencional[0][0] = 1;
    matrizBidimencional[0][1] = 2;
    matrizBidimencional[1][0] = 3;
    matrizBidimencional[1][1] = 4;
    matrizBidimencional[2][0] = 5;
    matrizBidimencional[2][1] = 6;
    matrizBidimencional[3][0] = 7;
    matrizBidimencional[3][1] = 8;
    matrizBidimencional[4][0] = 9;
    matrizBidimencional[4][1] = 10;

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("\n Matriz bidimensional [%d][%d] : %d", x, y, matrizBidimencional[x][y]);
        }
    }

    for (x = 0; x < 5; x++);
    {
        free(matrizBidimencional);
            
    }
    
    scanf("%c", &c);
    return 0;
}

