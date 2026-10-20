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
Aula 8 - Ponteiro

Exercício Slide 38:

Escreva um programa para trocar os valores de dois vetores; a troca deve ocorrer por meio de uma função chamada “troca_vetor” 
que recebe dois vetores passados por parâmetros.

*/

#include <stdio.h>

void troca_vetor (int *vetor1, int *vetor2, int tam) {
	
	int i, aux;
	for (i=0; i<tam; i++) {
		aux = vetor1[i];
		vetor1[i] = vetor2[i];
		vetor2[i] = aux;
	}
	
}

void imprimirVetor(int *vetor, int tam) {
	int i;
	
    for (i = 0; i < tam; i++) {
        printf("%d ", *vetor+i);//  *vetor+i = vetor[i];
    }
    printf("\n");
}

int main () {
	
	int vet1[] = {1,2,3,4,5};
	int vet2[] = {10,20,30,40,50};
	
	int i;
	
	printf("--- Antes da troca ---\n");
    printf("Vetor 1: "); imprimirVetor(vet1, 5);
    printf("Vetor 2: "); imprimirVetor(vet2, 5);

    troca_vetor(vet1, vet2, 5);

    printf("\n--- Depois da troca ---\n");
    printf("Vetor 1: "); imprimirVetor(vet1, 5);
    printf("Vetor 2: "); imprimirVetor(vet2, 5);
	
	return 0;
}
