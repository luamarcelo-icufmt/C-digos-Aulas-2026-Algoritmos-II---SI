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

Exercício Slide 8

Crie uma struct chamada Retangulo com os campos largura e altura (ambos double).

Crie uma função chamada calcularArea que recebe um ponteiro para Retangulo como argumento.

Dentro da função, calcule a área (largura * altura) e retorne o resultado (double).

No programa principal (main), declare e inicialize uma variável Retangulo.

Passe o endereço (&) dessa variável para a função calcularArea e imprima a área retornada.


*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	double largura;
	double altura;	
}Retangulo;


double calcularArea(Retangulo *retangulo) {
	
	double area;
	
	area = retangulo->altura * retangulo->largura;
	
	return area;
}

int main() {
	
	Retangulo *retangulo;
	double areaRetangulo;
	
	retangulo = (Retangulo*) malloc(sizeof(Retangulo));
	
	if (retangulo == NULL){
		printf("A alocacao de memoria falhou.");
		exit(1);
	}
	
	retangulo->altura = 10.2;
	retangulo->largura = 8.5;
	
	areaRetangulo = calcularArea(retangulo);
	
	printf("A area do retangulo e %.2f", areaRetangulo);
	
	free(retangulo);
	retangulo = NULL;
	
	return 0;
}


