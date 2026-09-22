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

Exercício Slide 34: 

Escreva uma função para encontrar os k  maiores elementos em um vetor.

Por exemplo: dados o vetor [1, 13, 12, 9, 20, 5, 42] e k = 3, a função deve retornar 13, 20 e 42.

*/

#include<stdio.h>

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
		printf("A partir de qual K maior elemento voce gostaria de saber quais sao? ");
		scanf("%d", &k);
		if (k < 1 || k > 11) //11 pq o vetor tem 11 elementos
			printf("Numero invalido!\n");
	} while (k < 1 || k > 11);
	
	printar_vetor(vetor, 11);
	
	printf("\nOs %d maiores elemento do vetor sao", k); 
	for (int i=k-1; i<11; i++)
		printf(" %d", vetor[i]);
			
}
