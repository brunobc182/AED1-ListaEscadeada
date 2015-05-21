#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lista{
	int chave;
	struct lista* prox;
};

int *ptr;
int ant = NULL;
int pont = NULL;

typedef struct lista Lista;

Lista* iniciarLista(void){
	return NULL;
}


void mostrar (Lista* l){

Lista *ptAux;

	for(ptAux = l; ptAux != NULL; ptAux = ptAux->prox){	
		printf("Chave = %d", ptAux -> prox);
	}
}


void Buscar_Enc(int x, int ant, int pont){
	
	Lista *ptr; 
	ptr = Lista -> prox;
	
	
}

int main(){
	
Lista* l;
l = iniciarLista();
	
int opcao, x, i;
	
	while(opcao){
		
		printf("\n-------------------------------------------------------------\n");
		printf("\n\nBem vindo ao programa de cadastro!\n\n");
		printf("1 - Mostrar.\n");
		printf("2 - Buscar.\n");
		printf("3 - Inserir.\n");
		printf("4 - Remover.\n");
		printf("5 - Sair.\n\n");
		printf("\n-------------------------------------------------------------\n");
		printf("Escolha a opcao: ");
		scanf("%d", &opcao);
		
		switch(opcao){		
			
			case 1:
			
				break;
			
			case 2:
				printf("\nDigite o item a ser procurado: ");
			
				break;
				
			case 3:
				printf("\nDigite o item a ser inserido: ");
					
				break;
				
			case 4:
				printf("\nDigite a chave que deseja excluir: ");
			
				break;
				
			case 5:		
				return 0;
				break;	
			
			default:
				printf("Opcao invalida!");
				break;
			}
		}
		//getch();
	return 0;	
		
}

