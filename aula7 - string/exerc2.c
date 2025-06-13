#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){
	
	char nome[100];
	
	printf("Digite seu nome completo: ");
	fgets(nome, sizeof(nome), stdin);
	
	
	printf("\n\n");
	puts(nome);
}
