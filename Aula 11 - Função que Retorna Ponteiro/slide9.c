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
Aula - Funções com Retorno de Ponteiro

Exercício Slide 9

Implemente uma função que receba um vetor de números inteiros de tamanho N e um valor X. 
A função deverá retornar um ponteiro para a primeira ocorrência de X no vetor.

Caso o valor não exista no vetor, a função deverá retornar NULL.

A função deve obedecer ao seguinte protótipo: int *localizar(int *vet, int N, int X);

*/

#include <stdio.h>

int *localizar(int *vet, int n, int x) {
	
	int i;
	
	for (i=0; i< n; i++) {
		if (vet[i] == x)
			return &vet[i];
	}
	
	return NULL;
}

int main () {
	
	int vetor[10] = {10, 100, 2, 8, -8, 10, 2, -2, 9, 5};
	int elem, *end;
	
	printf("Qual elemento voce quer buscar: ");
	scanf("%d", &elem);
	
	end = localizar(vetor, 10, elem);
	
	if (end == NULL)
		printf("Elemento nao encontrado no vetor.");
	else {
		printf("O elemento esta no endereco %p\n", end);
		printf("O elemento esta na posicao %d", end - vetor + 1);
	}
		
	
	return 0;
}
