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
Aula 10 - Ponteiros para Structs

Exercício Slide 7

Crie uma struct chamada Pessoa com os campos nome e idade (um inteiro).

Use a função malloc para alocar dinamicamente memória para uma única Pessoa.

Declare um ponteiro para Pessoa para guardar o endereço de memória alocado.

Use o operador -> para atribuir um valor ao nome e à idade da pessoa alocada.

Imprima os dados.

Use a função free para liberar a memória alocada.


*/


#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	int idade;
}Pessoa;


int main () {
	
	Pessoa *pes;
	
	pes = (Pessoa*) malloc(sizeof(Pessoa));
	
	if (pes == NULL) {
		printf("A alocacao de memoria falhou.");
		exit(1);
	}
	
	printf("Nome: ");
	scanf(" %[^\n]", pes->nome);
	printf("Idade: ");
	scanf("%d", &pes->idade); //  &(*pessoa).idade
	
	printf("\nNome: %s\n", pes->nome);
	printf("Idade: %d", pes->idade);
	
	free(pes);
	pes = NULL;
	
	return 0;	
}
