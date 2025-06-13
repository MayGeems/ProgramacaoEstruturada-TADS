#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
	
	char nome[100];
	int tamanho = 0;
	
	printf("Digite seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	for(int i = 0; i<=strlen(nome); i++){
		if(!isspace(nome[i])){
			tamanho++;
		}
	}
	
	printf("\n\n");
	puts(nome);
	printf("\nSeu nome tem %d letras.", tamanho);
}
