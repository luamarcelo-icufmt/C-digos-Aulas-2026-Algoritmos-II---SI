/*
Aula 2 - Funções com Vetor

Exercício: 
Escreva duas funções, uma para solicitar que o usuário digite seu nome e 
outra para escrever uma mensagem de boas-vindas para este usuário.
*/


#include<stdio.h>
//#include <string.h>

void solicitar_nome(char nome[]) {
	
	printf("Qual e o seu nome? ");
	scanf("%49[^\n]", nome);
}

void boas_vindas(char nome[]) {
	printf("Ola, %s. Seja bem-vindo!", nome);
}

int main() {
	
	char nome[50];
	solicitar_nome(nome);
	boas_vindas(nome);
}
