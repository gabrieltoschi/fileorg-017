#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "CSV.h"
#include "registro.h"
#include "indicador.h"

int main (int argc, char *argv[]){
	FILE *input = fopen("input.csv", "r");
	FILE *dst = fopen("saida.csv", "w");
	char * final = criarArquivo_Indicador(input);
/*

	char **l = leCSV(input);
	
	int i;

	for (i = 0; i < 8; i++)
		printf("%s\n", l[i]);
	printf("---------------------------\n");

	int tam;
	char *r = criaRegistro(l, &tam);

	for (i = 0; i < tam; i++) 
		printf("%d\t%c\t%d\n", i, r[i], r[i]);

	printf("\n");
	*/
		
}