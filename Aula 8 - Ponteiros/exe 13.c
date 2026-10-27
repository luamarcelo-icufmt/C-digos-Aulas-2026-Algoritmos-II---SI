/*
13. Endereços de Posições Pares em Vetor
Crie um programa que contenha um vetor com 5 elementos inteiros. Leia o vetor a partir do teclado e imprima o 
endereço das posições que contêm valores pares.
*/

#include <stdio.h>

int main () {
	
	int vet[5], i;
	
	for (i=0; i<5; i++) {
		printf("Entre com o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for (i=0; i<5; i++) {
		if (vet[i] % 2 == 0)
			printf("O elemento %d e par e esta no endereco de memoria %p\n", *vet+i, vet+i);// vet[i], &vet[i]
	}
		
	return 0;
}

