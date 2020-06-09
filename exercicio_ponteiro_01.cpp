// Crie uma função, cujo tipo de retorno seja VOID, que receba dois ponteiros referentes a duas
//variáveis inteiras e troque seus valores.Exibir os valores das variáveis antes e depois da
//função ser invocada.

#include <stdio.h>
void TrocaValores(int *val1, int *val2)
{        
     int troca;

     troca = *val1;
     *val1 = *val2;
     *val2 = troca;
}
int main()
{
    char* caractere;
    int a, b;
    a = 1;
    b = 2;

    printf("\n O valor de a = %d e o valor de b = %d", a, b);

    TrocaValores(&a, &b);
    printf("\n O valor depois da troca a = %d e o valor de b = %d", a, b);
    

    scanf("%c", &caractere);
    return 0;

}


