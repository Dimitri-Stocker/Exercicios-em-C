/*Criar um sistema de gerenciamento de Compras de uma loja de autopeças.
O sistema precisa permitir cadastrar pedidos de compra de peças.
Os pedidos possuem os seguintes atributos:
Número do Pedido, Descrição, Marca, Quantidade, Valor, Endereço de entrega (contendo rua, bairro, número e CEP).
Utilize um menu com as opções: cadastrar um pedido de compra, listar pedidos (todos), consultar peças pela descrição, listar peças pela marca, alterar valor ou quantidade, e sair.
Na listagem geral, mostrar o total (quantidade * valor).
*/
#include <stdio.h>
#include <string.h>

typedef struct{
	char rua[50], bairro[50], cep[12];
	int numero;
}Ficha;

typedef struct{
	Ficha endereco;
	char descricao[50], marca[20];
	int codigo, quantidade;
	float preco;
}Cadastro;

//Funções de Busca

int buscaCodigo(FILE *fp, int codigo){
	Cadastro pedido;
	rewind(fp);
	
	fread(&pedido, sizeof(Cadastro), 1, fp);
	while(!feof(fp) && codigo != pedido.codigo){
		fread(&pedido, sizeof(Cadastro), 1, fp);
	}
	if (!feof(fp)){
		return (ftell(fp) - sizeof(Cadastro));
	}
	else{
		return -1;
	}
}

int buscaDescricao(FILE *fp, char descricao[]){
	Cadastro pedido;
	rewind(fp);
	
	fread(&pedido, sizeof(Cadastro), 1, fp);
	while(!feof(fp) && stricmp(descricao, pedido.descricao) != 0){
		fread(&pedido, sizeof(Cadastro), 1, fp);
	}
	if (!feof(fp)){
		return (ftell(fp) - sizeof(Cadastro));
	}
	else{
		return -1;
	}
}

int buscaMarca(FILE *fp, char marca[]){
	Cadastro pedido;
	rewind(fp);
	
	fread(&pedido, sizeof(Cadastro), 1, fp);
	while(!feof(fp) && stricmp(marca, pedido.marca) != 0){
		fread(&pedido, sizeof(Cadastro), 1, fp);
	}
	if (!feof(fp)){
		return (ftell(fp) - sizeof(Cadastro));
	}
	else{
		return -1;
	}
}

void cadastrar(){
	Cadastro pedido;
	int pos;
	char resposta[8];
	FILE *fp = fopen("cadastroPedidos.bin", "ab+");
	if (fp == NULL){
		printf("Erro ao criar ou abrir arquivo.");
	}
	
	printf("Deseja cadastrar pedido? (Sim/Nao): "); fflush(stdin);
	gets(resposta);
	
	while (stricmp(resposta, "sim") == 0){
		printf("Codigo do pedido: ");
		scanf("%d", &pedido.codigo);
		pos = buscaCodigo(fp, pedido.codigo);
		if (pos == -1){
			printf("Descricao do pedido: "); fflush(stdin);
			gets (pedido.descricao);
			
			printf("Marca: "); fflush(stdin);
			gets(pedido.marca);
			
			printf("Quantidade: ");
			scanf("%d", &pedido.quantidade);
			
			printf("Preco: ");
			scanf("%f", &pedido.preco);
			
			printf("Rua: "); fflush(stdin);
			gets(pedido.endereco.rua);
			
			printf("Bairro: ");
			fgets(pedido.endereco.bairro, sizeof(pedido.endereco.bairro), stdin);
			
			printf("CEP: ");
			fgets(pedido.endereco.cep, sizeof(pedido.endereco.cep), stdin);
			
			printf("Numero: ");
			scanf("%d", &pedido.endereco.numero);
			
			fwrite(&pedido, sizeof(Cadastro), 1, fp);
			printf("Dados cadastrados com sucesso.");
		}
		else{
			printf("Esse pedido ja foi cadastrado.\n");
		}
			
		printf("Deseja cadastrar novo pedido? (Sim/Nao): "); fflush(stdin);
		gets(resposta);
	}
	fclose(fp);
}

void listar(){
	Cadastro pedido;
	FILE *fp = fopen("cadastroPedidos.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	while (fread(&pedido, sizeof(Cadastro), 1, fp) == 1){
		printf("Codigo: %d\n", pedido.codigo);
		printf("Descricao: %s\n", pedido.descricao);
		printf("Marca: %s\n", pedido.marca);
		printf("Quantidade: %d\n", pedido.quantidade);
		printf("Preco: %.2f\n", pedido.preco);
		printf("Rua: %s\n", pedido.endereco.rua);
		printf("Bairro: %s", pedido.endereco.bairro);
		printf("CEP: %s", pedido.endereco.cep);
		printf("Numero: %d\n", pedido.endereco.numero);
		printf("Total: %.2f\n\n", pedido.preco * pedido.quantidade);
	}
	fclose(fp);
}

void consultarDescricao(){
	Cadastro pedido;
	int pos;
	FILE *fp = fopen("cadastroPedidos.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	printf("Descricao do pedido: "); fflush(stdin);
	gets(pedido.descricao);
	
	pos = buscaDescricao(fp, pedido.descricao);
	//nao achou
	if (pos == -1){
		printf("Pedido nao encontrado.\n");
	}
	else{
		fseek(fp, pos, 0);
		fread(&pedido, sizeof(Cadastro), 1, fp);
		printf("Codigo do pedido: %d\n", pedido.codigo);
		printf("Marca: %s\n", pedido.marca);
		printf("Quantidade: %d\n", pedido.quantidade);
		printf("Preco: %.2f\n", pedido.preco);
		printf("Rua: %s\n", pedido.endereco.rua);
		printf("Bairro: %s", pedido.endereco.bairro);
		printf("CEP: %s", pedido.endereco.cep);
		printf("Numero: %d\n\n", pedido.endereco.numero);
	}
	fclose(fp);
}

void consultarMarca(){
	Cadastro pedido;
	int pos;
	FILE *fp = fopen("cadastroPedidos.bin", "rb");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	printf("Marca do pedido: "); fflush(stdin);
	gets(pedido.marca);
	
	pos = buscaMarca(fp, pedido.marca);
	//nao achou
	if (pos == -1){
		printf("Pedido nao encontrado.\n");
	}
	else{
		fseek(fp, pos, 0);
		fread(&pedido, sizeof(Cadastro), 1, fp);
		printf("Codigo do pedido: %d\n", pedido.codigo);
		printf("Descricao: %s\n", pedido.descricao);
		printf("Quantidade: %d\n", pedido.quantidade);
		printf("Preco: %.2f\n", pedido.preco);
		printf("Rua: %s\n", pedido.endereco.rua);
		printf("Bairro: %s", pedido.endereco.bairro);
		printf("CEP: %s", pedido.endereco.cep);
		printf("Numero: %d\n\n", pedido.endereco.numero);
	}
	fclose(fp);
}

void alterar(){
	Cadastro pedido;
	int pos, opcao;
	FILE *fp = fopen("cadastroPedidos.bin", "rb+");
	if (fp == NULL){
		printf("Erro ao ler arquivo.");
	}
	printf("Insira o codigo do pedido (0 para Sair): ");
	scanf("%d", &pedido.codigo);
	
	while (pedido.codigo != 0){
		pos = buscaCodigo(fp, pedido.codigo);
		if (pos == -1){
			printf("Codigo nao encontrado.\n");
		}
		
		else{
			fseek(fp, pos, 0);
			fread(&pedido, sizeof(Cadastro), 1, fp);
			printf("Escolha uma opcao para alterar: \n");
			printf("1 - Preco\n");
			printf("2 - Quantidade\n");
			scanf("%d", &opcao);
			
			if (opcao == 1){
				printf("Novo preco: ");
				scanf("%f", &pedido.preco);
				fseek(fp, pos, 0);
				fwrite(&pedido, sizeof(Cadastro), 1, fp);
				printf("Registro atualizado.");
			}
			
			else if (opcao == 2){
				printf("Nova quantidade: ");
				scanf("%d", &pedido.quantidade);
				fseek(fp, pos, 0);
				fwrite(&pedido, sizeof(Cadastro), 1, fp);
				printf("Registro atualizado.");
			}
		}
		printf("Insira o codigo do pedido (0 para Sair): ");
		scanf("%d", &pedido.codigo);
	}
	fclose(fp);
}

int main(){
	int opcao;
	
	printf("1 - Cadastrar\n");
	printf("2 - Listar Pedidos\n");
	printf("3 - Consultar Pecas (Descricao)\n");
	printf("4 - Consultar Pecas (Marca)\n");
	printf("5 - Alterar Pedido\n");
	printf("6 - Sair\n");
	printf("Opcao: ");
	scanf("%d", &opcao);
	
	while (opcao != 6){
		switch(opcao){
			case 1: cadastrar();
				break;
				
			case 2: listar();
				break;
				
			case 3:consultarDescricao();
				break;
				
			case 4: consultarMarca();
				break;
				
			case 5: alterar();
				break;
				
			default: printf("Opcao invalida.\n"); break;
		}
		
		printf("1 - Cadastrar\n");
		printf("2 - Listar Pedidos\n");
		printf("3 - Consultar Pecas (Descricao)\n");
		printf("4 - Consultar Pecas (Marca)\n");
		printf("5 - Alterar Pedido\n");
		printf("6 - Sair\n");
		printf("Opcao: ");
		scanf("%d", &opcao);
	}
}
