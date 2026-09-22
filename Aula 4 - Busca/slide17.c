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

Exercício Slide 17:

Um vetor pode possuir valores repetidos. 
Desenvolva uma função que utilize busca sequencial para procurar determinado valor e retorne quantas vezes ele aparece no vetor

*/

#include <stdio.h>

int contar_ocorrencias(int vet[], int n, int x) {
    int i;
    int contador = 0;

    for (i = 0; i < n; i++) {
        if (vet[i] == x)
            contador++;
    }

    return contador;
}

int main() {
    int vet[10] = {5, 8, 3, 8, 2, 8, 7, 4, 8, 1}; //vetor exemplo para não ter que fazer a leitura toda vez que o programa for executado
    int x;
    int quantidade;

    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &x);

    quantidade = contar_ocorrencias(vet, 10, x);

    if (quantidade > 0)
        printf("O valor %d aparece %d vez(es) no vetor.\n", x, quantidade);
    else
        printf("O valor %d nao foi encontrado no vetor.\n", x);

    return 0;
}
