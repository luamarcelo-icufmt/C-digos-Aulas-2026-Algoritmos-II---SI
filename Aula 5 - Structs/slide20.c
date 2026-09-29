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

Exercício Slide 20:

Escreva um programa para ler e armazenar os dados (nome, endereco, cep, email, dataNasc) de 10 alunos. 
Ao final, mostre os dados de todos.

*/ 

#include <stdio.h>   
#include <string.h>

// Definicao da struct Aluno

typedef struct {
    char nome[100]; 
    char endereco[150];
    char cep[10];
    char email[100];
    char dataNasc[11];
} Aluno; 

int main() {
    
    Aluno turma[10];
    int i; 

    printf("--- Cadastro de 10 Alunos ---\n");

    // Loop para ler os dados de cada um dos 10 alunos
    for (i = 0; i < 2; i++) {
        printf("\nDados do Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %s", turma[i].nome);
        
        printf("Endereco: Rua ");
        scanf(" %s", turma[i].endereco);

        printf("CEP: ");
        scanf(" %s", turma[i].cep);

        printf("Email: ");
        scanf(" %s", turma[i].email);

        printf("Data de Nascimento (DD/MM/AAAA): ");
        scanf(" %s", turma[i].dataNasc);
}
 

    printf("\n--- Dados dos Alunos Cadastrados ---\n");

    // Loop para mostrar os dados de cada um dos 10 alunos
    for (i = 0; i < 2; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("  Nome: %s\n", turma[i].nome);
        printf("  Endereco: %s\n", turma[i].endereco);
        printf("  CEP: %s\n", turma[i].cep);
        printf("  Email: %s\n", turma[i].email);
        printf("  Data de Nascimento: %s\n", turma[i].dataNasc);
    }


    return 0;
}
