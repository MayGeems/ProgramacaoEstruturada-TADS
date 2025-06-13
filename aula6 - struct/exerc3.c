#include <stdio.h>
#include <stdlib.h>

struct produto{
	char nome[100];
	float valor_uni;
	int quant;
}Item;

int adicionar_item(void *lista[5]){
	
}

int main(void){
	
	void lista[5];
	int opc=4;
	
	while(opc!0){
		printf("---SUPERMERCADO---");
		printf("\n1 - ADICIONAR ITEM;");
		printf("\n2 - VALOR TOTAL DA COMPRA;");
		printf("\n3 - LISTA DE ITENS;");
		printf("\n0 - SAIR;");
		scanf("%d", &opc);
		switch(opc){
			case 1: 
				adicionar_item(&lista);
			case 2:
				valor_compra(&lista);
			case 3:
				lista_itens(&lista);
			case 0:
				break;
		}
	}
}
