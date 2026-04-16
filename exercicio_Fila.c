/*
1 - Escreva uma função que retorne a quantidade de elementos maiores que 10 e múltiplos de 5 da Fila.
2 - Faça uma função que exiba o(s) elemento(s) da Fila se for(em) par(es).
3 - Escreva uma função que retorne a quantidade de números ímpares da Fila.
4 - Escreva uma função que exiba quem está na frente da Fila, ou seja, o candidato a ser removido.
5 - Escreva uma função que calcule o maior, o menor e a média aritmética dos elementos da Fila.
6 - Implemente uma função que permita ao usuário procurar um determinado valor dentro da fila.
A função deve receber como parâmetro o número a ser buscado e verificar se ele está presente entre os elementos armazenados.
Caso o elemento seja encontrado, o programa deve informar sua posição na Fila(considerando o índice ou a ordem de entrada).
Se o elemento não existir, o programa deve exibir uma mensagem informando que o valor não foi localizado.

7 - Implemente uma função que permita ao usuário esvaziar completamente a fila de inteiros.
A função deve redefinir os índices de controle para os valores iniciais, de modo que todos os elementos sejam descartados de uma só vez.
Após a execução, a Fila deve estar vazia, pronta para receber novos elementos.
O programa deve informar ao usuário que a operação foi realizada com sucesso ou, caso a fila já esteja vazia, exibir uma mensagem apropriada.

8 - Implemente uma função que percorra todos os elementos da fila e insira novamente cada um deles ao final, mantendo a mesma ordem original.
Por exemplo, se a fila contém os elementos [1, 2, 3], após a execução da função ela deve se tornar [1, 2, 3, 1, 2, 3].
A função deve verificar se há espaço disponível no vetor antes de duplicar os elementos.
Caso não haja espaço suficiente para duplicar todos os elementos, o programa deve informar ao usuário que a operação não pode ser realizada.
*/

#include <stdio.h>
#include <windows.h>
#define TF 10

int fim, fila[TF];

//1 - Inicia a fila
void criarFila() {
	fim = 0;
	printf("\nFila criada com sucesso.");
}

//2 - Insere elementos. Se o Fim for igual ao Tamanho Fìsico, a fila está cheia, e não é possível inserir novos elementos.
void inserir(int elemento) {
	if (fim == TF) {
		printf("\nA fila esta cheia, nao e possivel inserir novos elementos.");
	}
	
	else {
		fila[fim] = elemento;
		fim++;
		printf("\nElemento inserido com sucesso.");
	}
}

//3 - Remove elementos. Se o Fim for 0, está na posição inicial, a fila não possui elementos, então não é possível retirar nada.
void remover() {
	int aux, i;
	
	if (fim == 0) {
		printf("\nA fila esta vazia, nao e possivel remover elementos.");
	}
	
	else{
		aux = fila[0];
		for (i = 0; i < fim; i++) {
			fila[i] = fila[i+1];
		}
		fim--;
		printf("\nElemento removido: %d", aux);
	}
}

//4 - Exibe a fila inteira. Se estiver vazia, retorna uma mensagem avisando.
void exibirFila() {
	int i;
	
	if (fim == 0) {
		printf("\nA fila atualmente esta vazia.");
	}
	
	else {
		printf("\nFila: ");
		for (i = 0; i < fim; i++) {
			printf(" %d", fila[i]);
		}
	}
}

//Mostra a primeira posição da fila.
void primeiraPosicao() {
	
	if (fim == 0) {
		printf("\nA fila esta vazia.");
	}
	else {
		printf("\nPrimeira posicao: %d", fila[0]);
	}
}

//6 - Tamanho da fila
void tamanhoFila() {
	
	if (fim == 0) {
		printf("\nA fila esta vazia.");
	}
	
	else {
		printf("\nA fila tem %d elementos.", fim);
	}
}

//7 - Maiores de 10 e multiplos de 5
int maioresDez() {
	int i, cont = 0;
	
	if (fim == 0) {
		printf("\nA fila esta vazia.");
		return;
	}
	
	else {
		for (i = 0; i < fim; i++) {
			if (fila[i] > 10 && fila[i] % 5 == 0) {
				cont++;
			}
		}	
		return cont;
	}
}

//8 - Elementos pares
void pares() {
	int i;
	
	if (fim == 0) {
		printf("\nA fila esta vazia.");
	}
	
	else {
		for (i = 0; i < fim; i++) {
			if (fila[i] % 2 == 0) {
				printf("\nElemento par: %d", fila[i]);
			}
		}
	}
}

//9 - Elementos ímpares
int impares() {
	int i, cont = 0;
	
	if (fim == 0) {
		printf("\nA fila esta vazia.");
		return;
	}
	
	else {
		for (i = 0; i < fim; i++) {
			if (fila[i] % 2 != 0) {
				cont++;
			}
		}
		return cont;
	}
}

//10 - Maior, Menor, Media Aritmetica
void maiorMenorMedia() {
	int i, maiorValor = 0, menorValor = 9999, soma = 0, cont = 0;
	
	//Maior Valor
	for (i = 0; i < fim; i++) {
		if (fila[i] > maiorValor) {
			maiorValor = fila[i];
		}
	}
	printf("\nO maior valor da fila e: %d", maiorValor);
	
	//Menor Valor
	for (i = 0; i < fim; i++) {
		if (fila[i] < menorValor) {
			menorValor = fila[i];
		}
	}
	printf("\nO menor valor da fila e: %d", menorValor);
	
	//Media Aritmetica
	for (i = 0; i < fim; i++) {
		soma += fila[i];
		cont++;
	}
	printf("\nA media aritmetica dos elementos da Fila e: %d", soma / cont);
}

//11 - Procurar valor na Fila
void procurarValor(int valor) {
	int i, encontrou = 0;
	
	for (i = 0; i < fim; i++) {
		if (fila[i] == valor) {
			printf("\nValor encontrado na posicao %d da Fila", i+1);
			encontrou = 1;
		}
	}
	
	if (encontrou == 0) {
		printf("\nEsse valor nao foi encontrado na fila.");
	}
}

//12 - Esvaziar Fila
void esvaziarFila() {
	if (fim == 0) {
		printf("\nA fila ja esta vazia.");
	}
	
	else {
		fim = 0;
		printf("\nFila esvaziada com sucesso.");
	}
}

//13 - Duplicar Fila
void duplicarFila() {
	int i, fim2;
	
	if (fim == 0) {
		printf("\nA fila esta vazia, nao e possivel duplica-la.");
	}
	
	else {
		if (fim * 2 > TF) {
			printf("\nNao existe espaco suficiente para duplicar a fila.");
		}
		
		else {
			fim2 = fim;
			for (i = 0; i < fim2; i++) {
				fila[fim] = fila[i];
				fim++;
			}
			
			printf("\nFila duplicada: ");
			for (i = 0; i < fim; i++) {
				printf(" %d", fila[i]);
			}
		}
	}
}

void menu() {
	printf("\n1 - Criar Fila");
	printf("\n2 - Inserir Elemento");
	printf("\n3 - Remover Elemento");
	printf("\n4 - Mostrar Fila");
	printf("\n5 - Exibir Primeira Posicao");
	printf("\n6 - Mostrar tamanho da Fila");
	printf("\n7 - Quantidade de elementos maiores de 10 e multiplos de 5");
	printf("\n8 - Elementos Pares da Fila");
	printf("\n9 - Numeros impares da Fila");
	printf("\n10 - Exibir maior valor, menor valor e media aritmetica.");
	printf("\n11 - Procurar Valor");
	printf("\n12 - Esvaziar Fila");
	printf("\n13 - Duplicar Fila");
	printf("\n14 - Sair");
}

int main() {
	int opcao, elemento, valor;
	
	menu();
	printf("\nEscolha sua opcao: ");
	scanf("%d", &opcao);
	
	while (opcao != 14) {
		switch(opcao) {
			case 1: criarFila();
				break;
				
			case 2:
				printf("\nDigite o elemento que deseja inserir: ");
				scanf("%d", &elemento);
				inserir(elemento);
				break;
				
			case 3: remover();
				break;
				
			case 4: exibirFila();
				break;
				
			case 5: primeiraPosicao();
				break;
				
			case 6: tamanhoFila();
				break;
				
			case 7: printf("\nExistem %d elementos maiores que 10 e multiplos de 5 na Fila." , maioresDez());
				break;
			
			case 8: pares();
				break;
				
			case 9: printf("\nQuantidade de numeros impares: %d", impares());
				break;
				
			case 10: maiorMenorMedia();
				break;
				
			case 11:
				printf ("\nDigite o valor que deseja buscar: ");
				scanf("%d", &valor);
				procurarValor(valor);
				break;
				
			case 12: esvaziarFila();
				break;
				
			case 13: duplicarFila();
				break;
			default: printf("\nOpcao invalida."); break;
		}
		
		printf("\n");
		system("pause");
		system("cls");
		
		menu();
		printf("\nEscolha sua opcao: ");
		scanf("%d", &opcao);
	}
}
