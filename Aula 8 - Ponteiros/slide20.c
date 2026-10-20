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
Aula 8 - Ponteiro

Exercício Slide 20:

Uma loja possui um produto com determinada quantidade de unidades em estoque. 
O programa deverá ler a quantidade atual do produto e, em seguida, criar um ponteiro que aponte para essa variável.

Depois, o usuário deverá informar a quantidade de novas unidades recebidas pela loja. 
Utilizando exclusivamente o ponteiro para acessar e modificar o estoque, atualize a quantidade disponível.

Ao final, apresente a quantidade atualizada do produto.

*/ 

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int estoque, nova_qtd;
	int *ptr_estoque;
	
	printf("Qual e a quantidade de produtos disponiveis? ");
	scanf("%d", &estoque);
	
	ptr_estoque = &estoque;
	
	printf("Quantos produtos chegaram? ");
	scanf("%d", &nova_qtd);
	
	*ptr_estoque = *ptr_estoque + nova_qtd;
	
	printf("O estoque atual tem %d produtos.", estoque);
	
	
	return 0;
}
