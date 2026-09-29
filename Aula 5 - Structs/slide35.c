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

Exercício Slide 35:

Crie a struct Pessoa com os campos nome (string) e idade (inteiro). 
Implemente uma função chamada exibir_pessoa que recebe uma struct Pessoa como parâmetro (por valor) e 
imprime seus dados formatados. No programa principal (main), 
declare uma variável Pessoa, preencha os dados e chame a função para exibir as informações.

*/


#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void exibir_pessoa(Pessoa p) {
    printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() {
    Pessoa p1;

    printf("Digite o nome: ");
    scanf(" %[^\n]", p1.nome);

    printf("Digite a idade: ");
    scanf("%d", &p1.idade);

    exibir_pessoa(p1);

    return 0;
}
