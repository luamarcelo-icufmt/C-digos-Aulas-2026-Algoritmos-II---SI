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
Aula 3 - Ordenação

Exercício Slide 33: 

Escreva uma função que, dado um vetor com n elementos e um k (tal que 1 <= k <= n), 
determine o k-esimo maior elemento do vetor.

*/

#include <stdio.h>

void selection_sort(int vet[], int tam) {
	
	int i, j, aux, indice_minimo;
	
	for (i = 0; i < tam - 1; i++) {
		
		indice_minimo = i;
		
		for (j = i + 1; j < tam; j++) {
			if (vet[j] < vet[indice_minimo]) {
				indice_minimo = j;
			}	
		}
		
		if (indice_minimo != i) {
			aux = vet[i];
			vet[i] = vet[indice_minimo];
			vet[indice_minimo] = aux;
		}
	}

}

void printar_vetor(int vet[], int tam) {
	
	printf("\nVetor ordenado: [ ");
	for (int i=0; i<tam; i++)
		printf("%d ", vet[i]);
	
	printf("]\n");
}

int main() {
	
	int vetor[] = {12, 8, 15, 10, 7, 13, 25, 2, 89, 45, 33};
	
	int k;
	
	selection_sort(vetor, 11);
	
	do {
		printf("Qual K elemento voce gostaria de saber qual e? ");
		scanf("%d", &k);
		if (k < 1 || k > 11) //11 pq o vetor tem 11 elementos
			printf("Numero invalido!\n");
	} while (k < 1 || k > 11);
	
	printar_vetor(vetor, 11);
	printf("\nO %d maior elemento do vetor e %d", k,vetor[k-1]);
			
}

