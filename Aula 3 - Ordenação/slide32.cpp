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

Exercício Slide 32: 

Melhore o problema anterior para que o usuário escolha por qual método ele quer que o vetor seja ordenado.

*/

#include <stdio.h>

int bubble_sort(int vet[], int tam) {
	
	int i, j, aux, trocas;
	
	trocas = 0;
	for (i = 0; i < tam - 1; i++) {
		for (j = 0; j < tam - 1 - i; j++) {
			if (vet[j] > vet[j + 1]) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
				trocas++;
		    }
		}
	}
	
	return trocas;
}

int selection_sort(int vet[], int tam) {
	
	int i, j, aux, indice_minimo, trocas;
	
	trocas = 0;
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
			trocas++;
		}
	}

	return trocas;
}

int insertion_sort(int vet[], int tam) {
	
	int i, chave, j, trocas; 
	
	trocas=0;
	for (i = 1; i < tam; i++) {
		chave = vet[i]; j = i - 1;

		while (j >= 0 && vet[j] > chave) { 
			vet[j + 1] = vet[j];
			j = j - 1;
			trocas++;
		}
		
		vet[j + 1] = chave;

	}

	return trocas;
}

void copiar_vetor(int vetorOriginal[], int vetorCopia[], int tam) {
	
	for (int i=0; i<tam; i++)
		vetorCopia[i] = vetorOriginal[i];
		
}

void printar_vetor(int vet[], int tam) {
	
	printf("\nVetor ordenado: [ ");
	for (int i=0; i<tam; i++)
		printf("%d ", vet[i]);
	
	printf("]\n");
}

void menu() {
	
	printf(" ----- Metodos de Ordenação Implementados -----\n");
	printf("1. Bubble Sort \n");
	printf("2. Selection Sort\n");
	printf("3. Insertion Sort\n");
	printf("------------------------------------------------");
}


int main() {
	
	int idades[] = {12, 8, 15, 10, 7, 13, 25, 2, 89, 45, 33};
	int idadesCopia[11], trocas, opc;
	
	copiar_vetor(idades, idadesCopia, 11);
	
	do {
		menu();
		printf("\nPor qual metodo voce gostaria de ordenar seu vetor? ");
		scanf("%d", &opc);
	} while(opc<1 || opc>3 );
	
	if (opc == 1)
		trocas = bubble_sort(idadesCopia, 11);
	else if (opc == 2)
		trocas = selection_sort(idadesCopia, 11);
	else 
		trocas = insertion_sort(idadesCopia, 11);

	printar_vetor(idadesCopia, 11);
	printf("Foram realizadas %d trocas.\n\n", trocas);
		
	return 0;
}
