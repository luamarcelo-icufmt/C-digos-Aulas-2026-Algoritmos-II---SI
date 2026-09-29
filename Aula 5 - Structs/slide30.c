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

Exercício Slide 30:

Crie duas structs:

Endereco: com os campos rua (string), numero (inteiro), cidade (string) e estado (string).

Pessoa: com os campos nome (string), idade (inteiro) e endereco (uma variável do tipo struct Endereco).

No main, declare uma struct Pessoa, leia os dados do usuário (incluindo o endereço) e imprima todas as informações.


*/

#include <stdio.h>

typedef struct {
    char rua[100];
    int numero;
    char cidade[50];
    char estado[30];
} Endereco;

typedef struct {
    char nome[100];
    int idade;
    Endereco endereco;
} Pessoa;

int main() {
    Pessoa pessoa;

    printf("Nome: ");
    scanf(" %[^\n]", pessoa.nome);

    printf("Idade: ");
    scanf("%d", &pessoa.idade);

    printf("\n--- ENDERECO ---\n");

    printf("Rua: ");
    scanf(" %[^\n]", pessoa.endereco.rua);

    printf("Numero: ");
    scanf("%d", &pessoa.endereco.numero);

    printf("Cidade: ");
    scanf(" %[^\n]", pessoa.endereco.cidade);

    printf("Estado: ");
    scanf(" %[^\n]", pessoa.endereco.estado);

    printf("\n--- DADOS DA PESSOA ---\n");

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Rua: %s\n", pessoa.endereco.rua);
    printf("Numero: %d\n", pessoa.endereco.numero);
    printf("Cidade: %s\n", pessoa.endereco.cidade);
    printf("Estado: %s\n", pessoa.endereco.estado);

    return 0;
}
