/*Faça um algoritmo que carregue uma matriz 3x3 e exiba o maior elemento dessa matriz. */

#include <stdio.h>
#define TFL 3
#define TFC 3

int main()
{
	float mNumeros[TFL][TFC];
	int maiorValor = 0, i, j;
	
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Linha %d, Coluna %d: ", i+1, j+1);
			scanf("%f", &mNumeros[i][j]);
			if (mNumeros[i][j] > maiorValor)
				maiorValor = mNumeros[i][j];
		}
		
	}
	
	for (i = 0; i < TFL; i++)
	{
		printf("\n");
		for (j = 0; j < TFC; j++)
		{
			printf("[%.2f]", mNumeros[i][j]);
			
		}
	}
	printf("\nMaior valor: %d", maiorValor);
}
