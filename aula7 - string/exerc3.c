#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 10

int main(void){
	
	char letras[TAM];
	char vet[TAM];
	
	fgets(letras, TAM, stdin);
		
	for(int i=0; i<TAM; i++){
		vet[i] = letras[i];
		if(letras[i] == 'a' || letras[i] == 'e' || letras[i] == 'i' || letras[i] == 'o' || letras[i] == 'u'){
			vet[i] = '*';
		}
	}
	
	puts(vet);
}
