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

Exercício Slide 18:

Desenvolva uma função que receba um vetor ordenado e um valor x. 
Utilize busca binária para verificar se x está presente. 
Caso não esteja, a função deverá indicar a posição em que o valor poderia ser inserido para que o vetor continue ordenado.

*/

#include <stdio.h>

int busca_binaria(int vet[], int n, int x) {
    int inicio = 0;
    int fim = n - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vet[meio] == x)
            return meio;

        if (vet[meio] < x)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return inicio;
}

int main() {
    int vet[10] = {5, 12, 18, 25, 31, 40, 53, 67, 79, 90};
    int x;
    int posicao;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &x);

    posicao = busca_binaria(vet, 10, x);

    if (posicao < 10 && vet[posicao] == x)
        printf("Valor encontrado na posicao %d.\n", posicao);
    else
        printf("Valor nao encontrado. Poderia ser inserido na posicao %d.\n",
               posicao);

    return 0;
}
