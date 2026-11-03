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

Exercício Slide 9

Desenvolva um programa em linguagem C que permita cadastrar e exibir os dados de um aluno, utilizando estruturas (`struct`), 
ponteiros e alocação dinâmica de memória.

Inicialmente, crie uma estrutura denominada `Aluno`, contendo os seguintes campos:

- `matricula`: número inteiro que representa a matrícula do aluno.
- `nota`: número real do tipo `double` que representa a nota do aluno.

O programa deverá ser organizado em três funções:

1. **`alocarAluno()`**: deverá alocar dinamicamente memória para armazenar uma estrutura do tipo `Aluno` e retornar um ponteiro para a região de 
memória alocada.

2. **`preencherDados()`**: deverá receber um ponteiro para `Aluno` e solicitar ao usuário a matrícula e a nota do aluno, armazenando essas 
informações na estrutura.

3. **`imprimirDados()`**: deverá receber um ponteiro para `Aluno` e exibir sua matrícula e nota, apresentando a nota com duas casas decimais.

Na função `main()`, o programa deverá chamar a função de alocação, armazenar o ponteiro retornado e utilizá-lo para chamar as funções de 
preenchimento e impressão dos dados.


**Requisitos adicionais:**

- Utilize o operador `->` para acessar os campos da estrutura por meio do ponteiro.
- Verifique se a alocação dinâmica foi realizada com sucesso.
- Libere a memória alocada antes de encerrar o programa, utilizando `free()`.

*/

#include <stdio.h>
#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    double nota;
} Aluno;


// Aloca memoria para um unico aluno
Aluno *alocarAluno() {
    Aluno *aluno;

    aluno = (Aluno*) malloc(sizeof(Aluno));

    return aluno;
}


// Preenche os dados do aluno
void preencherDados(Aluno *aluno) {

    printf("\n----- Dados do Aluno -----\n");

    printf("Matricula: ");
    scanf("%d", &aluno->matricula);

    printf("Nota: ");
    scanf("%lf", &aluno->nota);
}


// Imprime os dados do aluno
void imprimirDados(Aluno *aluno) {

    printf("\n----- Dados do Aluno -----\n");

    printf("RGA: %d\n", aluno->matricula);
    printf("Nota: %.2f\n", aluno->nota);
}


int main() {
    Aluno *aluno;

    aluno = alocarAluno();

    if (aluno == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    preencherDados(aluno);

    imprimirDados(aluno);

    free(aluno);

    return 0;
}
