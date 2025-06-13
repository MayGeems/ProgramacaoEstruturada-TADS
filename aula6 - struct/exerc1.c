#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct informacoes{
	char placa[8];
	int hora_entrada;
	int min_entrada;
	int hora_saida;
	int min_saida;
};

int main (void){
	
	struct informacoes carro;
	
	printf("Digite a placa do veículo: ");
	scanf("%s", carro.placa);
	printf("Digite o horario de entrada em horas e minutos: ");
	scanf("%d", &carro.hora_entrada);
	scanf("%d", &carro.min_entrada);
	printf("Digite o horario de saida em horas e minutos: ");
	scanf("%d", &carro.hora_saida);
	scanf("%d", &carro.min_saida);
	
	float tempo;
	float valor;
	tempo = ((carro.hora_saida*60) + carro.min_saida) - ((carro.hora_entrada*60) + carro.min_entrada);
		
	if(tempo>=60){
		valor = 5;
		tempo = tempo - 60;
	}
	
	if(tempo>0){
		valor = ((tempo/60)*2) + 5;
	}
	
	printf("\n\nPLACA: %s\n", carro.placa);
	printf("ENTRADA: %d:%d\n", carro.hora_entrada, carro.min_entrada);
	printf("SAIDA: %d:%d\n", carro.hora_saida, carro.min_saida);
	printf("TOTAL: R$%.2f", valor);
	
}
