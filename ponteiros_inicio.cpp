#include <stdio.h>
#include <stdlib.h>

void somaUmNormal(int i)
{
	i = i + 1;
}

void somaUmPonteiro(int *i)
{
	*i = *i + 1;
}

int main()
{
	char *c;

	int a, b;
    int *pi = NULL;
	int **ppi = NULL;
	int* matrizinteiro;
	int matrizSemPonteiro[5] = {2,4,6,8,10};
	// Uso tradicional
	a = 5;
	b = a;

	printf("\n a = %d, b = %d", a, b);
	printf("\n a = %d (%d), b = %d (%d)", a, &a, b, &b);
	

	// Ponteiro
	
	a = 5;
	pi = &a;
	a = 8;

	printf("\n a = %d, = %d", a, pi);
	printf("\n a = %d, = %d", a, *pi);

	// Ponteiro para ponteiro

	a = 5;
	pi = &a;
	ppi = &pi;

	printf("\n a = %d, pi = %d, ppi = %d ", a, *pi, **ppi);

	// Passagem por valor
	a = 5;
	somaUmNormal(a);
	printf("\n Soma normal: a = %d", a);


    // Passagem por referencia
	a = 5;
	somaUmPonteiro(&a);
	printf("\n Soma normal: a = %d", a);

	// Alocacao dinamica de memoria
	matrizinteiro =(int *) malloc(5 * sizeof(int));

	if (!matrizinteiro)
	{
		printf("Erro");
	}

	matrizinteiro[0] = 5;
	matrizinteiro[1] = 10;
	printf("\n Posicao[0] = %d posicao[1] = %d", matrizinteiro[0], matrizinteiro[1]);

	free(matrizinteiro);

	// Aritmetica de ponteiro
	pi = &matrizSemPonteiro[0];
	printf("\n pi vale agora: %d", *pi);

	pi++;
	printf("\n pi Vale agora: %d", *pi);

	pi = pi + 2;
	// pi += 2;

	printf("\n pi Vale agora: %d", *pi);
	
	scanf("%c", &c);
	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
