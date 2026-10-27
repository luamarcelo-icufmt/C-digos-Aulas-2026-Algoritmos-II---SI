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
Aula 9 - Alocação Dinâmica de Memória

Exercício Slide 16

Um professor deseja armazenar as notas de uma turma. Como a quantidade de alunos varia a cada turma, 
essa quantidade será informada pelo usuário durante a execução do programa.

Elabore um programa em C que:

- Leia a quantidade de alunos da turma.
- Aloque dinamicamente um vetor de float com espaço suficiente para armazenar a nota de todos os alunos.
- Leia e armazene as notas no vetor alocado.
- Apresente todas as notas armazenadas.
- Calcule e apresente a média da turma.
- Ao final, libere a memória alocada.


*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int qtdAlunos, i, novaQtd;
	float *notas, somaNotas, media;
	
	
	printf("Quantas alunos ha na turma? ");
	scanf("%d", &qtdAlunos);
	
	notas = (float*) malloc(qtdAlunos * sizeof(float));
	
	if (notas == NULL) {
		printf("Memoria nao alocada");
		return 1;
	}
	
	somaNotas = 0;
	for (i=0; i<qtdAlunos; i++) {
		
		printf("Entre com a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
				
		somaNotas+= notas[i];				
	}
	
	printf("\n\n Qtos novos alunos foram matriculados? ");
	scanf("%d", &novaQtd);
	
	float *aux = (float*) realloc(notas, (qtdAlunos + novaQtd) * sizeof(float));
	
	if (aux == NULL) {
		printf("Nao foi possivel alocar mais memoria");
		return 1;
	}
	
	notas = aux;
	
	
	for (i=qtdAlunos; i<qtdAlunos+novaQtd; i++) {
		printf("Entre com a nota do aluno %d: ", i+1);
		scanf("%f", &notas[i]);
				
		somaNotas+= notas[i];				
	}
	
	printf("\nNOTAS LIDAS: ");
	for (i=0; i<qtdAlunos+novaQtd; i++) 
		printf("%.1f, ", notas[i]);

	printf("\nA media da turma foi %.2f", somaNotas/(qtdAlunos+novaQtd));
	
	free(notas);
	notas = NULL; //boa prática atribuir NULL à variável após um free.
	
	return 0;
	
}

