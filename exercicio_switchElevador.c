/*Crie um programa em C que receba, para vários usuários, informações sobre o uso de elevadores de um prédio.
Para cada usuário, deve ser informado:
- O elevador que o usuário utilizava com mais frequência (A, B ou C)
- O andar de destino
- O período que o usuário costumava utilizar o elevador (M - Matutino, V - Vespertino, N - Noturno).
A entrada de dados deve se repetir até que o usuário escolha encerrar.

Ao final, o programa deve:
- Informar qual elevador foi mais utilizado
- Informar qual período do dia teve maior uso
- Mostrar o andar mais alto visitado
- Calcular e exibir a porcentagem de uso do período matutino em relação ao total de utilizações.
*/

#include <conio.h>
#include <stdio.h>

int main() {
	int andar, andarMaisAlto = 0, contEA = 0, contEB = 0, contEC = 0, contPM = 0, contPV = 0, contPN = 0;
	float porc;
	char periodo, elevador;
	
	printf("Elevador que utilizava com maior frequencia: A, B ou C (S - para sair): ");
	scanf("%c", &elevador);
	
	while (elevador != 'S') {
		printf("\nAndar a qual se dirige: ");
		scanf("%d", &andar);
		printf("\nO Periodo que utilizava o elevador: ");
		printf("\nM - Matutino ");
		printf("\nV - Vespertino ");
		printf("\nN - Noturno ");
		fflush(stdin);
		scanf("%c", &periodo);
		
		if (andar > andarMaisAlto) {
			andarMaisAlto = andar;
		}
		
		switch(elevador) {
			case 'A': contEA += 1; break;
			case 'B': contEB += 1; break;
			case 'C': contEC += 1; break;
			default: printf("\nOpcao invalida."); break;
		}
		
		switch(periodo) {
			case 'M': contPM += 1; break;
			case 'V': contPV += 1; break;
			case 'N': contPN += 1; break;
			default: printf("\nOpcao invalida."); break;
		}
		
		//Sai lido
		printf("Elevador que utilizava com maior frequencia: A, B ou C (S - para sair): ");
		fflush(stdin);
		scanf("%c", &elevador);
	}
	
	if (contEA > contEB && contEA > contEC)
		printf("\nO elevador mais frequentado e o A.");
		
	else if (contEB > contEC)
		printf("\nO elevador mais frequentado e o B.");
		
	else
		printf("\nO elevador mais frequentado e o C.");
		
	if (contPM > contPV && contPM > contPN)
		printf("\nO horario mais usado e o Matutino.");
	
	else if (contPV > contPN)	
		printf("\nO horario mais usado e o Vespertino.");
	
	else
		printf("\nO horario mais usado e o Noturno.");
		
	printf("\nO andar mais alto visitado e: %d", andarMaisAlto);
		
	porc = (float) contPM / (contPM + contPV + contPN) * 100;
	
	printf("\nA porcentagem de uso do periodo Matutino em relacao a todos e: %.2f", porc); 
	getch();
}
