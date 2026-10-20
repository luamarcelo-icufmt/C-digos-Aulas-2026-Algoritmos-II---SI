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

Exercício Slide 21:

Imagine que você tem duas lâmpadas em sua casa, LampadaA e LampadaB, e cada uma delas pode estar 
acesa (valor 1) ou apagada (valor 0). 
Você tem um "controle remoto universal" (controle_ponteiro) que pode ser configurado para "apontar" para qualquer uma das lâmpadas. 
Seu desafio é usar esse controle remoto para ligar ou desligar as lâmpadas, sem tocar diretamente nelas. 

Escreva um programa para o usuário escolher a lâmpada que ele quer acender ou apagar 
e que depois execute a ação (se a lâmpada estiver acesa, deve apagar, e se tiver apagada, deve acender) e 
mostre o resultado para usuário. O usuário deve fazer isso quantas vezes ele quiser.  
Considere que as duas lâmpadas comecem apagadas.

*/

#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int lampA = 0, lampB = 0;
	int *controleUniversal;
	char opc, lamp;
	
	do {
		printf("\nQual lampada voce quer alterar o status: A ou B? ");
		scanf(" %c", &lamp);
		
		if (lamp=='A')
			controleUniversal = &lampA;
		else
			controleUniversal = &lampB;
		
		if (*controleUniversal == 0) {
			*controleUniversal = 1;
			printf("\nLampada acesa\n %c");
		} else {
			*controleUniversal = 0;
			printf("\nLampada apagada\n %c");
		}
		
		printf("Voce quer alterar o status de outra lampada: S ou N?");
		scanf(" %c", &opc);
	} while (opc != 'N');
	
	
	return 0;
}
