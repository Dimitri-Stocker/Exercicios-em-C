/* Definir uma estrutura para aluno (nome, idade e notas). Elabore um menu com as opções:
1 - Ler os dados de um aluno e gravar em um arquivo binário
2 - Exibir os dados gravados
3 - Sair
*/

#include <stdio.h>
#include <string.h>

typedef struct{
	char nome[50];
	int idade;
	float nota1, nota2;
}Ficha;

void gravar();
void exibir();

int main() {
	int opcao;
	
	printf("MENU\n");
	printf("1 - Gravar Dados\n");
	printf("2 - Exibir Dados\n");
	printf("3 - Sair\n");
	printf("Escolha sua opcao: ");
	scanf("%d", &opcao);
	
	while (opcao != 3) {
		switch(opcao) {
			case 1: gravar();
				break;
				
			case 2: exibir();
				break;
				
			default:
				printf("Opcao invalida.");
				break;
		}
		
		printf("MENU\n");
		printf("1 - Gravar Dados\n");
		printf("2 - Exibir Dados\n");
		printf("3 - Sair\n");
		printf("Escolha sua opcao: ");
		scanf("%d", &opcao);
	}
}

void gravar() {
	Ficha aluno;
	FILE *fp = fopen("cadastroAlunos.bin", "ab");
	if (fp == NULL) {
		printf("Erro ao abrir ou criar arquivo.");
	}
	
	printf("Nome do aluno: ");
	getchar();
	fgets(aluno.nome, sizeof(aluno.nome), stdin);
	
	printf("Idade: ");
	scanf("%d", &aluno.idade);
	
	printf("Nota da prova 1:");
	scanf("%f", &aluno.nota1);
	
	printf("Nota da prova 2: ");
	scanf("%f", &aluno.nota2);
	
	fwrite(&aluno, sizeof(Ficha), 1, fp);
	printf("Dados cadastrados com sucesso.\n\n");
	
	fclose(fp);
}

void exibir() {
	Ficha aluno;
	FILE *fp = fopen("cadastroAlunos.bin", "rb");
	if (fp == NULL) {
		printf("Erro ao ler arquivo.");
	}
	
	while (fread(&aluno, sizeof(Ficha), 1, fp) == 1) {
		printf("Nome: %s\n", aluno.nome);
		printf("Idade: %d\n", aluno.idade);
		printf("Nota da prova 1: %.2f\n", aluno.nota1);
		printf("Nota da prova 2: %.2f\n\n", aluno.nota2);
	}
	fclose(fp);
}
