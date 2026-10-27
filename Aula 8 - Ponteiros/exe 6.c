/* 6.	Função para Soma e Dobro dos Valores
Elabore um programa que leia dois valores inteiros (A e B). Em seguida, 
crie uma função que retorne a soma do dobro desses dois números. A função deverá armazenar o dobro de A na própria variável A e 
o dobro de B na própria variável B.
*/

#include <stdio.h>

void dobro(int *a, int *b) {
	
	*a = 2*(*a);
	*b = 2*(*b);
}

int main () {
	
	int A, B;
	
	printf("Entre com o valor de A: ");
	scanf("%d", &A);
	
	printf("Entre com o valor de B: ");
	scanf("%d", &B);
	
	dobro(&A, &B);
	
	printf("O dobro de A e %d\n", A);
	printf("O dobro de B e %d", B);
	
	
	return 0;
}


