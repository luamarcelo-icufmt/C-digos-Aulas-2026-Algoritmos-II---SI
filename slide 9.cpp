/*
Aula 2 - Funções com Vetor

Exercício: 
Escreva uma função que recebe como parâmetros um vetor com 10 números 
inteiros e que retorne o maior número entre todos.
*/

#include<stdio.h>

void ler_vetor(int vet[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) {
		printf("Entre com o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
}

int maior_elemento (int vetor[], int tam) {
	
	int i;
	int maior = vetor[0];
	
	for (i=1; i<tam; i++){
		
		if (vetor[i] > maior)
			maior = vetor[i];
	}
	return maior;
}

int main() {
	
	int vetor[10], maior;
	
	ler_vetor(vetor, 10);
	maior = maior_elemento(vetor, 10);
	printf("O maior elemento do vetor e %d", maior);
	
	return 0;
}


