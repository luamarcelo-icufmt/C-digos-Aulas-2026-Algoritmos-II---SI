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

Exercício:

Slide 10: Imagine que você precisa armazenar diversos dados de um paciente. Defina uma struct para esta tarefa.

Slide 14: Considerando a struct para armazenamento de dados de um paciente definida na atividade anterior, 
escreva um programa para fazer a leitura dos dados e depois imprimi-los.

*/

#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    char sexo;
    float peso;
    float altura;
    char tipoSanguineo[4];
} Paciente;

int main() {
    Paciente paciente;

    printf("Nome: ");
    scanf(" %[^\n]", paciente.nome);

    printf("Idade: ");
    scanf("%d", &paciente.idade);

    printf("Sexo: ");
    scanf(" %c", &paciente.sexo);

    printf("Peso: ");
    scanf("%f", &paciente.peso);

    printf("Altura: ");
    scanf("%f", &paciente.altura);

    printf("Tipo sanguineo: ");
    scanf("%s", paciente.tipoSanguineo);

    printf("\n--- DADOS DO PACIENTE ---\n");
    printf("Nome: %s\n", paciente.nome);
    printf("Idade: %d anos\n", paciente.idade);
    printf("Sexo: %c\n", paciente.sexo);
    printf("Peso: %.2f kg\n", paciente.peso);
    printf("Altura: %.2f m\n", paciente.altura);
    printf("Tipo sanguineo: %s\n", paciente.tipoSanguineo);

    return 0;
}

 
