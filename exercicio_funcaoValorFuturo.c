/* Implemente uma função chamada valor_futuro_vetor que receba:
- um vetor com os valores de capital inicial de vários investimentos;
- um vetor com as respectivas taxas de juros anual em decimal (ex: 5% em decimal -> 0.05);
- um vetor com os respectivos períodos em anos;
- o tamanho desses vetores.
A função deve calcular, para cada investimento, o valor futuro a juros simples usando a fórmula: VF = C * (1 + i * t), onde:
C = capital inicial
i = taxa de juros anual (em decimal)
t = tempo em anos
O resultado deve ser armazenado em um novo vetor, e exibido pela função valor_futuro_vetor.
No programa principal, o usuário deve informar os dados dos N investimentos escolhidos por ele.

*/

#include <stdio.h>
#define tf 80

void valor_futuro_vetor (float vCapital[], float vTaxa[], int vAnos[], int tl) {
	float vInvestimento[tl];
	int i;
	
	for (i = 0; i < tl; i++){
		vInvestimento[i] = vCapital[i] * (1 + vTaxa[i] * vAnos[i]);
		printf("O valor futuro do investimento %d sera: %.2f\n", i+1, vInvestimento[i]);
	}
}

int main() {
	int tl, vAnos[tf], i;
	float vCapital[tf], vTaxa[tf];
	
	printf("Quantos investimentos voce gostaria de calcular? " );
	scanf("%d", &tl);
	
	for (i = 0; i < tl; i++){
		printf("Insira o valor do capital inicial do investimento %d: ", i+1);
		scanf("%f", &vCapital[i]);
		
		printf("Insira o valor da taxa de juros anual em decimal (ex: 5 por cento em decimal = 0.05): " );
		scanf("%f", &vTaxa[i]);
		
		printf("Insira o periodo de anos: ");
		scanf("%d", &vAnos[i]); 
	}
	
	valor_futuro_vetor(vCapital, vTaxa, vAnos, tl);
}
