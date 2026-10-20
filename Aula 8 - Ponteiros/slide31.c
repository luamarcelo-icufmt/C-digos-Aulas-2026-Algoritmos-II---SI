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

Exercício Slide 31:

Elabore um programa em C que leia dois números inteiros na main().

Crie uma função chamada calcularDivisao() que receba os dois números e determine:
o quociente inteiro da divisão;
o resto da divisão.

A função deverá disponibilizar os dois resultados para a main() por meio de parâmetros passados por referência, 
sem utilizar return para retornar os resultados.

Após a chamada da função, a main() deverá apresentar o quociente e o resto.

*/

#include <stdio.h>

void calcularDivisao(int n1, int n2, int *r, int *q) {
	
	*q = n1 / n2;
	*r = n1 % n2;
}

int main () {
	
	int n1, n2;
	int resto, quociente;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &n1);
	printf("Entre com o primeiro numero: ");
	scanf("%d", &n2);
	
	// Passa os endereços das variáveis q e r usando o operador &
	calcularDivisao(n1, n2, &resto, &quociente);
	
	printf("\n--- Resultados ---\n");
    printf("Quociente inteiro: %d\n", quociente);
    printf("Resto da divisao: %d\n", resto);
	
	return 0;
}
