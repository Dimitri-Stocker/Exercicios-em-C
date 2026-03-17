/*Faça um algoritmo que receba dois números, verifique se estes são pares ou ímpares e exiba a mensagem sobre a situação de cada um.
Além disso, exiba o resultado das seguintes operações com base na tabela abaixo:

SITUAÇÃO									OPERAÇÃO
Dois números pares 							Adição
Dois números ímpares						Subtração
O primeiro ser par e o segundo ímpar		Multiplicação
O primeiro ser ímpar e o segundo par		Divisão
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	float resultado;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 % 2 == 0)
		printf("\nO primeiro numero e par.");
		
	else
		printf("\nO primeiro numero e impar.");
		
	if (num2 % 2 == 0)
		printf("\nO segundo numero e par.");
		
	else 
		printf("\nO segundo numero e impar.");
		
	
	if (num1 % 2 == 0 && num2 % 2 == 0)//par par
	{
		resultado = num1 + num2;
		printf("\nO resultado e: %.2f", resultado);
	}
	
	else if (num1 % 2 != 0 && num2 % 2 != 0) 
	{
		resultado = num1 - num2;
		printf("\nO resultado e: %.2f", resultado);
	}
	
	else if (num1 % 2 == 0 && num2 % 2 != 0)
	{
		resultado = num1 * num2;
		printf("\nO resultado e: %.2f", resultado); 
	}
	
	else if (num1 % 2 != 0 && num2 % 2 == 0)
	{
		resultado = (float)num1 / num2;
		printf("\nO resultado e: %.2f", resultado);
	}
}

