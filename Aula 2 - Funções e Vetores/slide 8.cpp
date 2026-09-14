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
Aula 2 - Funções com Vetor

Exercício: 
Escreva uma função para ler 10 números inteiros e armazená-los em um vetor.
Ao final, crie outra função para printar os dados deste vetor.
*/

#include<stdio.h>

void ler_vetor(int vetor[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) {
		printf("Entre com o elemento %d do ventor: ", i+1);
		scanf("%d", &vetor[i]);
	}
}

void printar_vetor(int vetor[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) 
		printf("%d ", vetor[i]);
}

int main () {
	
	int vetor_main[10];
	
	printar_vetor(vetor_main, 10);
	printf("\n");
	ler_vetor(vetor_main, 10);
	printf("\n");
	printar_vetor(vetor_main, 10);
		
}




