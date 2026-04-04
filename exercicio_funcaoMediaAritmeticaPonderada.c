/*Faça uma função que receba 3 notas de um aluno e o tipo de média a calcular (p = ponderada ou a = aritmética).
Se o tipo for a, deve ser calculada a média aritmética das notas.
Se o tipo for p, calcular a média ponderada com pesos 5, 3 e 2.
A média calculada deve ser devolvida ao programa principal, para então ser mostrada. */

#include <stdio.h>

float calcularMedia(float nota1,float nota2,float nota3,char media) {
	switch (media) {
		case 'a': return (nota1+nota2+nota3) / 3; break;
		
		case 'p': return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10; break;
		
		default: printf("Opcao invalida."); break;
	}
	return;
}

int main () {
	float n1, n2, n3;
	char media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segundaa nota: ");
	scanf("%f", &n2);
	
	printf("Insira a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Insira o tipo de media que deseja calcular. a = aritmetica. p = ponderada: ");
	scanf(" %c", &media);
	
	printf("A media e: %.2f", calcularMedia(n1,n2,n3,media));
}

