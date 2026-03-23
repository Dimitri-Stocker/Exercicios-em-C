/*Foi realizada uma pesquisa de algumas características físicas de cinco habitantes de certa região.
De cada habitante foram coletados os seguintes dados: sexo, cor dos olhos(Azuis, Verdes ou Castanhos), cor dos cabelos(Louros, Pretos ou Castanhos) e idade.
Leia os 5 registros.
Faça uma função que determine a média de idade das pessoas com olhos Castanhos e cabelos Pretos.
Faça uma função que determine e devolva ao programa principal a maior idade entre os habitantes.
Faça uma função que determine e devolva ao programa principal a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos (inclusive).
*/

#include <stdio.h>
#include <string.h>
#define TF 5

typedef struct {
	char sexo[15], corOlhos[15], corCabelo[15];
	int idade;
}ficha;

void mediaIdade(ficha pessoa[]){
	int i;
	char buscaOlhos[15] = "Castanhos";
	char buscaCabelo[15] = "Pretos";
	float soma = 0;
	int cont = 0;
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaOlhos, pessoa[i].corOlhos) == 0 && stricmp(buscaCabelo, pessoa[i].corCabelo) == 0){
			soma += pessoa[i].idade;
			cont++;
		}
	}
	printf("\nA media de idade das pessoas com olhos castanhos e cabelos pretos e: %.2f", soma/cont);
}

int maiorIdade(ficha pessoa[]){
	int i, maiorIdade = 0;
	
	for (i = 0; i < TF; i++) {
		if (pessoa[i].idade > maiorIdade)
			maiorIdade = pessoa[i].idade;
	}
	return maiorIdade;
}

int idadeMulheres(ficha pessoa[]){
	char buscaSexo[15] = "Feminino";
	int i, contM = 0;
	
	for (i = 0; i < TF; i++) {
		if (stricmp(buscaSexo, pessoa[i].sexo) == 0 && pessoa[i].idade >= 18 && pessoa[i].idade <= 35){
			contM++;
		}
	}
	return contM;
}

int main() {
	ficha pessoa[TF];
	int i;
	
	for (i = 0; i < TF; i++) {
		printf("\nInsira o sexo da pessoa: ");
		fflush(stdin);
		gets(pessoa[i].sexo);
		
		printf("\nInsira a cor dos olhos da pessoa (Azuis, Verdes ou Castanhos): ");
		fflush(stdin);
		gets(pessoa[i].corOlhos);
		
		printf("\nInsira a cor do cabelo da pessoa (Louros, Pretos ou Castanhos): ");
		fflush(stdin);
		gets(pessoa[i].corCabelo);
		
		printf("\nInsira a idade da pessoa: ");
		scanf("%d", &pessoa[i].idade);
	}
	
	mediaIdade(pessoa);
	
	printf("\nA maior idade entre os habitantes e: %d", maiorIdade(pessoa));
	printf("\nA quantidade de mulheres entre 18 e 35 anos e: %d", idadeMulheres(pessoa));
}
