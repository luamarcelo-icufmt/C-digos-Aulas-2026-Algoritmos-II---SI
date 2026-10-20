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

Exercício Slide 30:

Uma loja deseja atualizar o preço de um produto aplicando um percentual de reajuste.

Elabore um programa em C que leia, na main(), o preço atual do produto e o percentual de reajuste.

Implemente uma função chamada reajustarPreco() que receba essas informações e altere diretamente o preço armazenado na main(), 
sem retornar nenhum valor. 

Após a chamada da função, a main() deverá apresentar o novo preço do produto.

*/

#include <stdio.h>

void reajustarPreco(float *preco, float reajuste) {
	
	*preco = (*preco)*(reajuste/100.0) + (*preco);
	
}

int main () {
	
	float precoAtual, reajuste;
	
	printf("Qual e o preco atual do produto? ");
	scanf("%f", &precoAtual);
	
	printf("Qual e o percentual do reajuste?");
	scanf("%f", &reajuste);
	
	reajustarPreco(&precoAtual, reajuste);
	
	printf("O novo preco do produto e R$ %.2f", precoAtual);
	
	return 0;
}
