/* 
11. Média e quantidade acima da média
Implemente uma função que receba como parâmetro um vetor de números reais de tamanho N e armazene em media a média dos 
valores e em acima a quantidade de elementos que possuem valor superior à média. A função deve obedecer ao seguinte protótipo:
void analisar(float *vet, int N, float *media, int *acima);
*/

#include <stdio.h>

void analisar(float *vet, int N, float *media, int *acima) {
	
	float soma;
	int i;
	
	soma=0;
	for (i=0; i<N; i++) {
		soma+= vet[i];
	} 
	
	*media = soma/N;
	
	*acima=0;
	
	for (i=0; i<N; i++){
		if (vet[i] > *media)
			(*acima)++;
	}
	
}

int main () {
	
	float media;
	int  acima, i;
	
	float vetor[10] = {1.1, 2.5, 3.7, 8.0, 1.5, 10.0, 7.75, 5.0, 9.0, 8.5};
	
	analisar (vetor, 10, &media, &acima);
	
	printf("A media dos dados do vetor e %.2f\n", media);
	printf("Ha %d numeros acima da media.", acima);
	
	
	return 0;
}

