/*Faça um algoritmo que carregue uma matriz com números reais, calcule e exiba a soma dos elementos da diagonal principal. */

#include <stdio.h>
#define TFL 5
#define TFC 5

int main()
{
	int i, j;
	float mNumeros[TFL][TFC], soma = 0;
	
	//Preencher a Matriz
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Linha %d, Coluna %d: ", i+1, j+1);
			scanf("%f", &mNumeros[i][j]);
			if (i == j)
				soma += mNumeros[i][j];
		}
	}
	
	//Exibir a Matriz
	for (i = 0; i < TFL; i++)
	{
		printf("\n");
		for (j = 0; j < TFC; j++)
		{
			printf("[%.2f]", mNumeros[i][j]);
		}
	}
	
	printf("\nSoma da diagonal principal: %.2f", soma);
}
