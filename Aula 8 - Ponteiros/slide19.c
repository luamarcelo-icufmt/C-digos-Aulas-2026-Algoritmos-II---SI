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

Exercício Slide 19:

Crie um programa em C onde você declare duas variáveis inteiras. 
Em seguida, declare dois ponteiros e faça com que cada um aponte para uma dessas variáveis. 
Por fim, utilize apenas os ponteiros para verificar se os valores originais das variáveis são iguais, 
imprimindo o resultado.

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int var1, var2;
	int *ptr1, *ptr2;
	
	printf("Entre com o valor da variavel 1: ");
	scanf("%d", &var1);
	printf("Entre com o valor da variavel 1: ");
	scanf("%d", &var1);
	
	ptr1 = &var1;
	ptr2 = &var2;
	
	if (*ptr1 == *ptr2)
		printf("Os valores sao iguais.");
	else
		printf("Os valores nao sao iguais");
	
	return 0;
}
