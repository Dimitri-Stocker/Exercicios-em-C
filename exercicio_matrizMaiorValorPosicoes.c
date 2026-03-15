/*Faça um algoritmo que carregue uma matriz com números inteiros, calcule e exiba o maior elemento da matriz com sua respectiva posição, linha e coluna.
Caso esse elemento apareça várias vezes, deve-se exibir todas as posições que o mesmo se encontra. */

#include <stdio.h>
#define TFL 5
#define TFC 5

int main()
{
	int mNumeros[TFL][TFC], i, j, maiorValor = 0;
	
	//Preencher a Matriz
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Linha %d, Coluna %d: ", i+1, j+1);
			scanf("%d", &mNumeros[i][j]);
			if (mNumeros[i][j] > maiorValor)
				maiorValor = mNumeros[i][j];
		}
	}
	
	//Exibir a Matriz
	for (i = 0; i < TFL; i++)
	{
		printf("\n");
		for (j = 0; j < TFC; j++)
		{
			printf("[%d]", mNumeros[i][j]);
		}
	}
	printf("\nMaior valor: %d", maiorValor);
	
	//Exibir a posição
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			if (mNumeros[i][j] == maiorValor)
				printf("\nPosicao: Linha %d, Coluna %d", i+1, j+1);
		}
	}
}
