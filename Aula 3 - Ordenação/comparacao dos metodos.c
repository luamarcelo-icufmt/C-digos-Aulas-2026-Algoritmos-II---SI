/*
 * Universidade Federal de Mato Grosso (UFMT)
 * Instituto de Computação (IC)
 * Disciplina: Algoritmos II
 * Professor: Luã Marcelo Muriana
 * Semestre: 2026/2
 *
 * Material didático desenvolvido para uso em aula.
 
 ***** Código que compara o tempo de execução do Bubble Sort, Selection Sort e Insertion Sort.
 ***** Para verificar exemplos maiores e mais demorados, altere/aumente o número da linha 20.
 */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30000

void copiarVetor(int origem[], int destino[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        destino[i] = origem[i];
    }
}

void bubbleSort(int v[], int n) {
    int aux, i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void selectionSort(int v[], int n) {
    int menor, aux, i, j;

    for (i = 0; i < n - 1; i++) {

        menor = i;

        for (j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }

        if (menor != i) {
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
}

void insertionSort(int v[], int n) {
    int chave, j, i;

    for (i = 1; i < n; i++) {

        chave = v[i];
        j = i - 1;

        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

int main() {

    int *original;
    int *vetor;
    int i;

    clock_t inicio, fim;
    double tempo;

    original = malloc(TAM * sizeof(int));
    vetor = malloc(TAM * sizeof(int));

    srand(10);

    /* Gera o vetor original */
    for (i = 0; i < TAM; i++) {
        original[i] = rand() % 100000;
    }

    /* BUBBLE SORT */
    copiarVetor(original, vetor, TAM);

    inicio = clock();

    bubbleSort(vetor, TAM);

    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Bubble Sort: %.4f segundos\n", tempo);


    /* SELECTION SORT */
    copiarVetor(original, vetor, TAM);

    inicio = clock();

    selectionSort(vetor, TAM);

    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Selection Sort: %.4f segundos\n", tempo);


    /* INSERTION SORT */
    copiarVetor(original, vetor, TAM);

    inicio = clock();

    insertionSort(vetor, TAM);

    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Insertion Sort: %.4f segundos\n", tempo);


    free(original);
    free(vetor);

    return 0;
}
