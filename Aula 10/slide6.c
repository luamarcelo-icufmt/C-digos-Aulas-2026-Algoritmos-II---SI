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

Exercício Slide 6

Crie uma struct para representar um ponto 2D com as coordenadas x e y (ambas inteiras).

Declare uma variável desta struct, inicialize seus membros com valores de sua escolha.

Declare um ponteiro para esta struct.
Faça com que o ponteiro aponte para a variável da struct.

Usando o operador de seta (->), acesse e imprima os valores de x e y através do ponteiro.

*/

typedef struct {
	int coordX;
	int coordY;
}Ponto2D;

int main () {
	
	Ponto2D ponto;
	Ponto2D *p2D;
	
	ponto.coordX = 10;
	ponto.coordY = 8;
	
	p2D = &ponto;
	
	printf("As coordenadas do ponto sao (x, y)= (%d, %d)", p2D->coordX, p2D->coordY);
		
	
	return 0;
	
}
