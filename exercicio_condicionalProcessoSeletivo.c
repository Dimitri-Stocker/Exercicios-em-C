/* Crie um programa em C para coletar os dados de candidatos a uma vaga de emprego.
Para cada candidato, devem ser informados:
- Idade (0 para Sair)
- Sexo (M ou F)
- Experiência Profissional (Sim ou Não)

Ao final, o programa deve:
- Informar o total de candidatos do sexo masculino e feminino
- Calcular e mostrar a idade média dos homens que possuem experiência
- Calcular a porcentagem de homens com mais de 45 anos em relação ao total de homens
- Informar a quantidade de mulheres com menos de 21 anos e que possuem experiência
- Informar a menor idade entre as mulheres que possuem experiência.
*/

#include <conio.h>
#include <stdio.h>

int main() {
	int idade, total = 0, totalF = 0, totalM = 0, soma1 = 0, contM1 = 0, contM2 = 0, contF1 = 0, menorIdade;
	float mediaIdade, perc;
	char sexo, exp;
	
	printf("\nIdade (0 para Sair): ");
	scanf("%d", &idade);
	
	while (idade != 0) {
		printf("\nSexo (M/F): ");
		fflush(stdin);
		scanf("%c", &sexo);
		
		printf("\nExperiencia (S/N): ");
		fflush(stdin);
		scanf("%c", &exp);
		
		if (sexo == 'F' && exp == 'S') {
			if (total == 0) {
				menorIdade = idade;
				total = 1;
			}
			
			else if (idade < menorIdade) {
				menorIdade = idade;
			}
		}
		
		switch(sexo) {
			case 'M':
				totalM += 1;
				if (idade > 45) {
					contM1 += 1;
				}
				
				if (exp == 'S') {
					soma1 += idade;
					contM2 += 1;
				}
				break;
				
			case 'F':
				totalF += 1;
				if (idade < 21 && exp == 'S') {
					contF1 += 1;
				}
				break;
		}
		
		printf("\nIdade (0 para Sair): ");
		scanf("%d", &idade);
	}
	
	printf("\nTotal de candidatos do sexo Feminino: %d", totalF);
	printf("\nTotal de candidatos do sexo Masculino: %d", totalM);
	
	if (contM2 == 0) {
		printf("\nNenhum homem com experiencia. ");
	}
	
	else {
		mediaIdade = (float) soma1 / contM2;
		printf("\nIdade media dos homens com experiencia: %.2f", mediaIdade);
	}
	
	if (totalM == 0) {
		printf("\nNenhum homem.");
	}
	
	else {
		perc = (float) contM1 * 100 / totalM;
		printf("\nPorcentagem de homens com mais de 45 anos entre o total de homens: %.2f", perc);
	}
	
	printf("\nQuantidade de mulheres menores de 21 anos e com experiencia: %d", contF1);
	printf("\nA menor idade entre as mulheres com experiencia: %d", menorIdade);
	getch();
}
