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
Aula 5 - Structs

Exercício Slide 37:

Crie duas structs:

Salario: com os campos salario_base (float), bonus (float) e descontos (float).

Funcionario: com os campos id (inteiro), nome (string) e ganhos (uma variável do tipo struct Salario).

No main, declare uma struct Funcionario. 
Crie uma função para ler os dados do usuário, 
outra para calcular o salário líquido (salario_base + bonus - descontos) e 
outra função para exibie todas as informações.


*/

#include <stdio.h>

typedef struct {
    float salario_base;
    float bonus;
    float descontos;
} Salario;

typedef struct {
    int id;
    char nome[100];
    Salario ganhos;
} Funcionario;

Funcionario ler_funcionario() {
    Funcionario f;

    printf("ID: ");
    scanf("%d", &f.id);

    printf("Nome: ");
    scanf(" %[^\n]", f.nome);

    printf("Salario base: ");
    scanf("%f", &f.ganhos.salario_base);

    printf("Bonus: ");
    scanf("%f", &f.ganhos.bonus);

    printf("Descontos: ");
    scanf("%f", &f.ganhos.descontos);

    return f;
}

float calcular_salario_liquido(Funcionario f) {
    return f.ganhos.salario_base
         + f.ganhos.bonus
         - f.ganhos.descontos;
}

void exibir_funcionario(Funcionario f) {
    float salario_liquido;

    salario_liquido = calcular_salario_liquido(f);

    printf("\n--- DADOS DO FUNCIONARIO ---\n");
    printf("ID: %d\n", f.id);
    printf("Nome: %s\n", f.nome);
    printf("Salario base: R$ %.2f\n", f.ganhos.salario_base);
    printf("Bonus: R$ %.2f\n", f.ganhos.bonus);
    printf("Descontos: R$ %.2f\n", f.ganhos.descontos);
    printf("Salario liquido: R$ %.2f\n", salario_liquido);
}

int main() {
    Funcionario funcionario;

    funcionario = ler_funcionario();

    exibir_funcionario(funcionario);

    return 0;
}
