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
Aula 4 - Buscas: Sequencial e Binária

Exercício Slide 16:

Escreva um programa que leia 15 números inteiros em ordem crescente. 
Em seguida, leia um valor e utilize uma função de busca binária para procurá-lo. Caso seja encontrado, apresente seu índice. 
Caso contrário, informe que o valor não pertence ao vetor.

*/

#include <stdio.h>

void ler_vetor_ordenado (int vet[], int tam) {
	
	int i, n;
	
	i=0;
	do {
		printf("Entre com um numero: ");
		scanf("%d", &n);
		

		if (i == 0){
			vet[0] = n;
			i++;
		} else {
			if (vet[i-1] > n)
				printf("Numero invalido. O numero precisa ser maior do que o anterior. \n");
			else {
				vet[i] = n;	
				i++;	
			}
		}	
		
	} while (i < tam);	
}

void printar_vetor(int vet[], int tam) {
	int i;
	
	for (i=0; i<tam; i++) {
		printf("%d ", vet[i]);
	}
}

int busca_binaria(int vet[], int tam, int x) {
	
	int inicio, fim, meio;
	
	inicio = 0;
	fim = tam - 1;
	
	while (inicio <= fim){
		
		meio = (inicio + fim) / 2;
		
		if (vet[meio] == x)
			return meio; //verdadeiro -> encontrou
		
		if (x > vet[meio])
			inicio = meio + 1;
		else 
			fim = meio - 1;
		
	}
	
	return -1; // falso -> não encontrou
	
}

int main() {
	
	int vetor[15], elem, indice;
	
	ler_vetor_ordenado(vetor, 15);
	printar_vetor(vetor, 15);
	
	printf("\n\nQual elemento voce quer buscar?");
	scanf("%d", &elem);
	
	indice = busca_binaria(vetor, 15, elem);
	
	if ( indice != -1)
		printf("Elemento encontrado no indice %d.", indice);
	else
		printf("Elemento nao encontrado");
	
	return 0;	
}
