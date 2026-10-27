/*
 * Universidade Federal de Mato Grosso (UFMT)
 * Instituto de Computação (IC)
 * Disciplina: Algoritmos II
 * Professor: Luã Marcelo Muriana
 * Semestre: 2026/2
 *
 * Material didático desenvolvido para uso em aula.
 */

/*
Aula 9 - Alocação Dinâmica de Memória

Exercício Slide 15

Uma estação meteorológica registra várias medições de temperatura ao longo do dia. 
A quantidade de medições não é conhecida previamente e será informada pelo usuário no início da execução.

Elabore um programa em C que:

- Leia a quantidade de temperaturas que serão registradas.
- Aloque dinamicamente um vetor de float com espaço suficiente para armazenar todas as temperaturas.
- Leia e armazene cada temperatura no espaço alocado.
- Apresente a maior e a menor temperatura registrada.
- Informe quantas temperaturas ficaram acima de 30 °C.
- Ao final, libere a memória alocada.

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qtdTemps, i, cont30mais;
	float *temp, maiorTemp, menorTemp, temperatura;
	
	cont30mais = 0;
	
	printf("Quantas temperaturas serao registradas? ");
	scanf("%d", &qtdTemps);
	
	temp = (float*) malloc(qtdTemps * sizeof(float));
	
	if (temp == NULL) {
		printf("Memoria nao alocada");
		return 1;
	}
	
	for (i=0; i<qtdTemps; i++) {
		
		printf("Entre com a temperatura: ");
		scanf("%f", &temp[i]);
				
		if (i==0){
			maiorTemp = temp[0];
			menorTemp = temp[0];
		} else {
			
			if (temp[i] > maiorTemp)
				maiorTemp = temp[i];
			
			if (temp[i] < menorTemp)
				menorTemp = temp[i];
			
		}
		
		if (temp[i] > 30)
			cont30mais++;		
	}

	printf("Temperaturas registradas: ");
	for (i=0; i<qtdTemps; i++) {
		printf("%.1fC ", temp[i]);
	}
	printf("\nA maior temperatura registrada foi: %.1fC.", maiorTemp);
	printf("\nA menos temperatura registrada foi: %.1fC.", menorTemp);
	printf("\nForam registradas %d temperaturas acima de 30C.", cont30mais);
	
	free(temp);
	temp = NULL; //boa prática atribuir NULL à variável após um free.
	
	return 0;
	
}
