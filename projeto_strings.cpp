
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main()
{
    // Declaração de variáveis
    char *c;

    char strA[6] = "teste";
    char strB[6] = { 't','e','s','t','e' };
    char strC[] = "teste";
    char* strD;
    char ch;
    int x;
    char buffer[5];
    char matrizDeStrings[3][20];

    strD = "teste";

    printf("\n %s", strA);
    printf("\n %s", strB);
    printf("\n %s", strC);
    printf("\n %s", strD);

    printf("\n Digite uma string: ");
    // gets(strA);puts(strA); Não funciona mais por ser perigoso no programa
    fgets(strA, 6, stdin);
    strtok(strA, "\n");

    if (strlen(strA) == 6 - 1)
    {
        while ((ch = getchar()) != '\n' && ch != EOF);
    }
    
    puts("Texto digitado: ");
    puts(strA);

    for (x = 0; x < 3; x++)
    {
        sprintf(buffer, "\n Digite o nome %d", x);
        puts(buffer);

        fgets(matrizDeStrings[x], 20, stdin);
        strtok(matrizDeStrings[x], "\n");
        if (strlen(matrizDeStrings[x]) == 20 - 1)
        {
            while ((ch = getchar()) != 'n' && ch != EOF);
        }
    }

    for (x = 0; x < 3; x++)
    {
        puts(matrizDeStrings[x]);
    }

    puts("Funções interessantes");

    strcpy(buffer, "Novo Valor");
    puts(buffer);

    strcat(buffer, "Concatenando");
    puts(buffer);

    x = strlen(buffer);
    sprintf(buffer, "O tamanho do Buffer era: %d (repetindo : %d)", x, x);
    puts(buffer);

    scanf("%c", &c);
    return 0;
}

