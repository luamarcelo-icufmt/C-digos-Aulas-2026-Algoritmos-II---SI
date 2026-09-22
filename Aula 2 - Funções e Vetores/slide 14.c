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
Escreva uma programa que leia dois vetores de números inteiros. 
Ao final, seu programa deve printar os números que se repetem nos dois vetores. 
Caso não haja números repetidos entre os dois vetores, seu programa deve informar isso.
*/

#include<stdio.h>

void ler_vetor(int vet[], int tam) {
	
	int i;
	
	for (i=0; i<tam; i++) {
		printf("Entre com o elemento %d do vetor: ", i+1);
		scanf("%d", &vet[i]);
	}
}

bool printar_repetido(int vetor1[], int vetor2[], int tam) {
	
	int i, j;
	bool repete = false; 
	
	for (i=0; i<tam; i++) {
		for (j=0; j<tam; j++){
			
			if (vetor1[i]== vetor2[j]){
				printf("%d ", vetor1[i]);				
				repete = true;
			}
		}
	}
	
	return repete;

}

int main() {
	
	int vet1[10], vet2[10];
	bool repete;
	
	ler_vetor(vet1, 10);
	ler_vetor(vet2, 10);
	
	repete = printar_repetido(vet1, vet2, 10);
	
	if (!repete)
		printf("Nao ha elementos repetidos.");

	return 0;
	
}
