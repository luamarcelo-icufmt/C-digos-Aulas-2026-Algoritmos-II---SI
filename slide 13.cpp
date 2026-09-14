/*
Aula 2 - Funções com Vetor

Exercício: 
Escreva um programa para ler os dados de dois vetores de 10 números inteiros. 
Ao final, seu programa deve printar um terceiro vetor contendo os números dos dois vetores iniciais.
*/

#include<stdio.h>

void ler_vetor(int vet[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) {
		printf("Entre com o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
}

void juntar_vetores(int vetor1[], int vetor2[], int vetor3[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++)
		vetor3[i] = vetor1[i];
		
	for (i=0; i<tam; i++)
		vetor3[i+10] = vetor2[i];
}

void printar_vetor(int vetor[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) 
		printf("%d ", vetor[i]);
}


int main() {
	
	int vet1[10], vet2[10], vet3[20];
	
	ler_vetor(vet1, 10);
	ler_vetor(vet2, 10);
	juntar_vetores(vet1, vet2, vet3, 10);
	printar_vetor(vet3, 20);
	
	
	return 0;
	
}
