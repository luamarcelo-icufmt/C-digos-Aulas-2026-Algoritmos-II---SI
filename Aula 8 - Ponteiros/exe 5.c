/*5.	Maior e Menor Valor
Faça um programa que leia dois valores inteiros e chame uma função que receba esses dois valores e retorne o maior 
valor na primeira variável e o menor na segunda. Escreva o conteúdo das duas variáveis na tela.
*/

#include <stdio.h>

void maiorMenor(int *n1, int *n2) {
	int aux;
	
	if (*n1 > *n2) 
		return;
	else {
		aux = *n1;
		*n1 = *n2;
		*n2 = aux;
		return;
	}
}

int main () {
	
	int v1, v2;
	
	printf("Entre com o valor 1: ");
	scanf("%d", &v1);
	
	printf("Entre com o valor 2: ");
	scanf("%d", &v2);
	
	maiorMenor(&v1, &v2);
	
	printf("O maior valor e %d e o menor valor e %d", v1, v2);
	
	return 0;
}

