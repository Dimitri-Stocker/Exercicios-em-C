/* Faça um algoritmo que receba os valores das vendas de 5 produtos em 3 lojas distintas nos meses de Junho, Julho e Agosto.
Armazene esses valores em 3 matrizes distintas em que cada linha represente um produto e cada coluna represente uma loja.
Calcule e exiba:
- o total vendido de cada produto em cada loja no trimestre;
- o total vendido de cada produto em todas as lojas no trimestre;
- o total vendido em cada loja no trimestre;
- se todos os produtos em todas as lojas tiverem um aumento de 15%, quais seriam os novos valores do trimestre.
*/

#include <stdio.h>
#define TFL 5
#define TFC 3

int main ()
{
	float mJunho[TFL][TFC], mJulho[TFL][TFC], mAgosto[TFL][TFC], totalTrimestre = 0, totalLojas = 0, totalProdutos = 0;
	int i, j;
	
	printf("\tVENDAS DE JUNHO\n");
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Produto %d, Loja %d: ", i+1, j+1);
			scanf("%f", &mJunho[i][j]);
		}
	}
	printf("\n");
	
	printf("\tVENDAS DE JULHO\n");
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Produto %d, Loja %d: ", i+1, j+1);
			scanf("%f", &mJulho[i][j]);
		}
	}
	printf("\n");
	
	printf("\tVENDAS DE AGOSTO\n");
	for (i = 0; i < TFL; i++)
	{
		for (j = 0; j < TFC; j++)
		{
			printf("Produto %d, Loja %d: ", i+1, j+1);
			scanf("%f", &mAgosto[i][j]);
		}
	}
	printf("\n");
	
	
	printf("\tJUNHO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mJunho[i][j]);
		}
		printf("\n");
	}
	
		printf("\n");
		printf("\tJULHO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mJulho[i][j]);
		}
		printf("\n");
	}
		printf("\n");
		printf("\tAGOSTO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mAgosto[i][j]);
		}
		printf("\n");
	}
	
	
	//ITEM 1 - Total vendido de cada produto em cada loja no trimestre
	printf("\n\nItem 1 - TOTAL VENDIDO DE CADA PRODUTO EM CADA LOJA NO TRIMESTRE\n\n");	
	for (j = 0; j < TFC; j++)
	{
		for (i = 0; i < TFL; i++)
		{
			totalProdutos = 0;
			totalProdutos = mJunho[i][j] + mJulho[i][j] + mAgosto[i][j];
			printf("\nTotal do Produto %d na Loja %d: %.2f", i+1, j+1, totalProdutos);
		}
	}
	
	
	//ITEM 2 - Total vendido de cada produto em todas as lojas no trimestre
	printf("\n\nItem 2 - TOTAL VENDIDO DE CADA PRODUTO EM TODAS AS LOJAS NO TRIMESTRE\n\n");
	for (i = 0; i < TFL; i++)
	{
		totalLojas = 0;
		for (j = 0; j < TFC; j++)
		{
			totalLojas += mJunho[i][j] + mJulho[i][j] + mAgosto[i][j];
		}
		printf("\nTotal do Produto %d em todas as Lojas: %.2f", i+1, totalLojas);
	}
	
	
	
	//ITEM 3 - Total vendido de cada loja no trimestre
	printf("\n\nItem 3 - TOTAL VENDIDO DE CADA LOJA NO TRIMESTRE\n\n");
	for (j = 0; j < TFC; j++)
	{
		totalTrimestre = 0;
		for (i = 0; i < TFL; i++)
		{
			totalTrimestre += mJunho[i][j] + mJulho[i][j] + mAgosto[i][j];
		}
		printf("\nTotal vendido da Loja %d: %.2f", j+1, totalTrimestre);
	}
	
	
	
	//ITEM 4 - Aumento de 15%
	printf("\n\nITEM 4 - AUMENTO DE 15 POR CENTO\n\n");
	printf("\tJUNHO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mJunho[i][j] * 1.15);
		}
		printf("\n");
	}
	
		printf("\n");
		printf("\tJULHO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mJulho[i][j] * 1.15);
		}
		printf("\n");
	}
	
		printf("\n");
		printf("\tAGOSTO\n");
	
	printf("	   	      Loja 1 	      Loja 2          Loja 3\n");
	for (i = 0; i < TFL; i++)
	{
		printf("Produto %d", i+1);
		for (j = 0; j < TFC; j++)
		{
			printf("		%.2f", mAgosto[i][j] * 1.15);
		}
		printf("\n");
	}
}
