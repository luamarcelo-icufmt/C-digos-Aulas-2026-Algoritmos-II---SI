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
Aula 5 - Structs

Exercício Slide 15:

Defina uma estrutura chamada endereço, que contém os vetores de caracteres rua[25], cidade[20], estado[2] e cep[8]. 
Em seguida, faça a leitura e impressão dos dados lidos.

*/

#include <stdio.h>

typedef struct {
    char rua[25];
    char cidade[20];
    char estado[2];
    char cep[8];
} Endereco;

int main() {
    Endereco endereco;

    printf("Rua: ");
    scanf(" %[^\n]", endereco.rua);

    printf("Cidade: ");
    scanf(" %[^\n]", endereco.cidade);

    printf("Estado: ");
    scanf("%s", endereco.estado);

    printf("CEP: ");
    scanf("%s", endereco.cep);

    printf("\n--- ENDERECO ---\n");
    printf("Rua: %s\n", endereco.rua);
    printf("Cidade: %s\n", endereco.cidade);
    printf("Estado: %s\n", endereco.estado);
    printf("CEP: %s\n", endereco.cep);

    return 0;
}
