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

Exercício Slide 39:

1. Crie uma struct chamada Motor com os seguintes campos:
cilindrada (ponto flutuante)
potencia (inteiro)

2. Crie uma segunda struct chamada Proprietario com os seguintes campos:
nome (string)
cpf (string)

3. Crie a terceira e principal struct chamada Carro com os seguintes campos:
marca (string)
modelo (string)
ano (inteiro)
motor (uma variável do tipo struct Motor)
dono (uma variável do tipo struct Proprietario)

No programa principal (main), declare uma variável do tipo struct Carro. 
Leia os dados do carro, incluindo as informações do motor e do proprietário, diretamente do usuário. 
Por fim, imprima todas as informações do veículo de forma organizada, mostrando a marca, o modelo, o ano, 
os dados do motor (cilindrada e potência) e os dados do proprietário (nome e CPF).

*/

#include <stdio.h>

typedef struct {
    float cilindrada;
    int potencia;
} Motor;

typedef struct {
    char nome[100];
    char cpf[15];
} Proprietario;

typedef struct {
    char marca[50];
    char modelo[50];
    int ano;
    Motor motor;
    Proprietario dono;
} Carro;

int main() {
    Carro carro;

    printf("Marca: ");
    scanf(" %[^\n]", carro.marca);

    printf("Modelo: ");
    scanf(" %[^\n]", carro.modelo);

    printf("Ano: ");
    scanf("%d", &carro.ano);

    printf("\n--- DADOS DO MOTOR ---\n");

    printf("Cilindrada: ");
    scanf("%f", &carro.motor.cilindrada);

    printf("Potencia: ");
    scanf("%d", &carro.motor.potencia);

    printf("\n--- DADOS DO PROPRIETARIO ---\n");

    printf("Nome: ");
    scanf(" %[^\n]", carro.dono.nome);

    printf("CPF: ");
    scanf("%s", carro.dono.cpf);

    printf("\n--- DADOS DO VEICULO ---\n");

    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);

    printf("\nMotor:\n");
    printf("Cilindrada: %.1f\n", carro.motor.cilindrada);
    printf("Potencia: %d cv\n", carro.motor.potencia);

    printf("\nProprietario:\n");
    printf("Nome: %s\n", carro.dono.nome);
    printf("CPF: %s\n", carro.dono.cpf);

    return 0;
}


