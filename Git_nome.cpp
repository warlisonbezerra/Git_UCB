#include <stdio.h>


int main(void){
	
	char nome[30];
	
	printf("Qual seu nome?: \n");
	fgets(nome, 30, stdin);
	printf("prazer em conhecer voce, %s", nome);
}
