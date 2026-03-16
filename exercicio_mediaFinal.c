/*Na disciplina de algoritmos, a nota final do estudante é calculada a partir de 3 notas atribuídas respectivamente a um trabalho de laboratório, uma avaliação semestral e um exame final.
As notas variam de 0 a 10 e a nota final é a média ponderada das 3 notas mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório -> peso 2
Av.Semestral -> peso 3
Exame Final -> peso 5

Faça um algoritmo que receba as 3 notas do estudante, calcule e imprima a média final e o conceito desse estudante. O conceito segue a tabela abaixo:

Média Final			Conceito
8.0 a 10			A
7.0 a 8.0			B
6.0 a 7.0			C
5.0 a 6.0			D
< 5.0				E
*/

#include <stdio.h>

int main()
{
	float laboratorio, av_semestral, exame_final, nota_final;
	int peso2 = 2, peso3 = 3, peso5 = 5;
	
	printf("Digite a nota do trabalho de laboratorio: ");
	scanf("%f", &laboratorio);
	
	printf("Digite a nota da avaliacao semestral: ");
	scanf("%f", &av_semestral);
	
	printf("Digite a nota do exame final: ");
	scanf("%f", &exame_final);
	
	nota_final = (laboratorio * peso2 + av_semestral * peso3 + exame_final * peso5)/ (peso2 + peso3 + peso5);
	
	printf("Sua nota final e: %.2f\n", nota_final);
	
	if (nota_final > 0)
	{
		if (nota_final < 5)
			printf("Conceito: E");
			
		if (nota_final >= 5 && nota_final <= 6)
			printf("Conceito: D");
			
		if (nota_final > 6 && nota_final <=7)
			printf("Conceito: C");
			
		if (nota_final >7 && nota_final <=8)
			printf("Conceito: B");
			
		if (nota_final >8 && nota_final <=10)
			printf("Conceito: A");
	}
	
	else
		printf("Dados invalidos.");
}
