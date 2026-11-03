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

Exercício Slide 10

Implemente uma função que receba um vetor de números inteiros de tamanho N e dois índices A e B.
A função deverá:
- verificar se A e B representam índices válidas do vetor;
- caso sejam válidos, trocar os valores armazenados nesses dois índices e retornar um ponteiro para o vetor;
- caso pelo menos um dos índices seja inválido, não realizar nenhuma alteração no vetor e retornar NULL.

A função deve obedecer ao seguinte protótipo: int *trocar(int *vet, int N, int A, int B);


*/

#include <stdio.h>

int *trocar(int *vet, int N, int A, int B) {
    int aux;

    if (A < 0 || A >= N || B < 0 || B >= N)
        return NULL;

    aux = vet[A];
    vet[A] = vet[B];
    vet[B] = aux;

    return vet;
}

int main() {
    int vet[5] = {10, 20, 30, 40, 50};
    int *resultado, i;

    resultado = trocar(vet, 5, 1, 3);

    if (resultado != NULL) {
        for (i = 0; i < 5; i++)
            printf("%d ", resultado[i]);
    } else {
        printf("Indices invalidas.");
    }

    return 0;
}
