/* Crie um programa que permita cadastrar partidas da Copa do Mundo. Cada partida deve conter os seguintes atributos:
Número da partida, Nome da Seleção X, Nome da Seleção Y, cidade, estádio, horário da partida, quantidade de gols da Seleção X e Y.
O sistema deve armazenar os dados e apresentar um menu com as opções:
1 - Cadastrar Partida
2 - Listar Partidas Cadastradas
3 - Sair
*/ 

#include <stdio.h>
#include <string.h>

typedef struct{
	char selecao1[50], selecao2[50], cidade[50], estadio[50];
	int numero, horario, golSelecao1, golSelecao2;
}Cadastro;

int busca(FILE *fp, int numero){
	Cadastro partida;
	rewind(fp);
	
	fread(&partida, sizeof(Cadastro), 1, fp);
	while (!feof(fp) && numero != partida.numero){
		fread(&partida, sizeof(Cadastro), 1, fp);
	}
	if (!feof(fp)){
		return (ftell(fp) - sizeof(Cadastro));
	}
	else{
		return -1;
	}
}

void cadastrar(){
	Cadastro partida;
	char resposta[8];
	int pos;
	FILE *fp = fopen("cadastroPartida.bin", "ab+");
	if (fp == NULL){
		printf("Erro ao ler ou abrir arquivo.");
	}
	
	printf("Deseja cadastrar partida? (Sim/Nao): "); fflush(stdin);
	gets(resposta);
	while (stricmp(resposta,"sim") == 0){
		printf("Numero da partida: ");
		scanf("%d", &partida.numero);
		pos = busca(fp, partida.numero);
		if (pos == -1){
			printf("Nome da primeira selecao: "); fflush(stdin);
			gets(partida.selecao1);
			
			printf("Nome da segunda selecao: ");
			fgets(partida.selecao2, sizeof(partida.selecao2), stdin);
			
			printf("Cidade: ");
			fgets(partida.cidade, sizeof(partida.cidade), stdin);
			
			printf("Estadio: ");
			fgets(partida.estadio, sizeof(partida.estadio), stdin);
			
			printf("Horario: ");
			scanf("%d", &partida.horario);
			
			printf("Gols da primeira selecao: ");
			scanf("%d", &partida.golSelecao1);
			
			printf("Gols da segunda selecao: ");
			scanf("%d", &partida.golSelecao2);
			
			fwrite(&partida,sizeof(Cadastro),1,fp);
			printf("Dados cadastrados com sucesso.");
		}
		else{
			printf("Essa partida ja foi cadastrada.");
		}
		
		printf("Deseja cadastrar nova partida? (Sim/Nao): "); fflush(stdin);
		gets(resposta);
	}
	fclose(fp);
}

void listar(){
	Cadastro partida;
	FILE *fp = fopen("cadastroPartida.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	
	while (fread(&partida, sizeof(Cadastro), 1, fp) == 1){
		printf("Numero da partida: %d\n", partida.numero);
		printf("Primeira selecao: %s\n", partida.selecao1);
		printf("Segunda selecao: %s\n", partida.selecao2);
		printf("Cidade: %s\n", partida.cidade);
		printf("Estadio: %s\n", partida.estadio);
		printf("Horario: %d\n", partida.horario);
		printf("Gols Primeira Selecao: %d\n", partida.golSelecao1);
		printf("Gols Segunda Selecao: %d\n\n", partida.golSelecao2);
	}
	fclose(fp);
}

int main() {
	int opcao;
	
	printf("1 - Cadastrar Partida\n");
	printf("2 - Listar Partidas\n");
	printf("3 - Sair\n");
	printf("Opcao: \n");
	scanf("%d", &opcao);
	
	while (opcao != 3){
		switch(opcao){
			case 1:cadastrar();
				break;
				
			case 2:listar();
				break;
			
			default: printf("Opcao invalida.\n"); break;
		}
		
		printf("1 - Cadastrar Partida\n");
		printf("2 - Listar Partidas\n");
		printf("3 - Sair\n");
		printf("Opcao: \n");
		scanf("%d", &opcao);
	}
}
