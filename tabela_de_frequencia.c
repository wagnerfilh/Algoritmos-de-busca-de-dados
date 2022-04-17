#include <stdio.h>
#define N 1000
int main(){
	int vetor[N];
	int freq[N];
	int i, alvo, aux;
	int contador =0;
	for(i=0; i<N; i++){
		vetor[i]= vetor[i-1]+1;		
	}
	aux = vetor[N-N];
	printf("Digite o numero procurado: ");
	scanf("%d", &alvo);
	tabela_zerada(freq);
	tabela_de_frequencia (freq, vetor, aux);
	impressora (freq, vetor, alvo, contador);
	return 0;
}
void tabela_zerada (int freq[]){
	int i;
	for(i = 0; i < N; i++){
		freq[i] = 0;
	}
}
void tabela_de_frequencia (int freq[], int vetor[], int aux){
	int i;
	for(i = 0; i<N; i++){	
		freq[vetor[i]]++;
	}
	freq[N-N]=aux;
	vetor[N-N]=aux;
}
void impressora (int freq[], int vetor[], int alvo, int contador){
	printf("   Numero = Frequencia\n");
	int i;
	for(i=0; i < N; i++){
			printf("\t%d = %d\n", vetor[i], freq[i]);
	}
	if(N >= alvo){
		contador++;
		if (freq[alvo]>=1){
			printf("\n\n O seu alvo foi encontrado! :) E a sua frequencia na tabela eh de: %d", freq[alvo]);
			contador++;
			printf("\n A busca por tabela de frequencia fez %d comparacoes", contador);
		}
		else{
			printf("\n\n O seu alvo NAO foi encontrado! :(");
		}
	}
	else{
		printf("\n\n O seu alvo NAO foi encontrado! :(");
	}
}
