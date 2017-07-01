#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "CSV.h"
#include "registro.h"
#include "delimitador.h"
#include "caractere.h"
#include "indice.h"

int main(int argc, char *argv[]){
	
	FILE *fp = fopen("test.csv", "r");
	FILE *saida = fopen("test.out", "w");
	Indice *ind = criaIndice("test.idx");

	char **data;

	while (!feof(fp)){ // enquanto ainda houver dados
		data = leCSV(fp); // leia um registro do arquivo de entrada
		
		// insere no arquivo de saída e libera a memória alocada para ele
		insereRegistro_Inicializa(data, saida, ind);
		liberaCSV(data);

		// caso tenha chegado ao fim do arquivo, pare de ler
		if (feof(fp)) break;
	}

	ordenaIndice(ind);
	insereIndice(ind, 100000, 5555);
	insereIndice(ind, 20000000, 7777);
	insereIndice(ind, -1, 9999);
	imprimeIndice(ind);

	printf("%d -> %d\n", 1373769, buscaIndice(ind, 1373769));
	printf("%d -> %d\n", 100000, buscaIndice(ind, 100000));
	printf("%d -> %d\n", 123456, buscaIndice(ind, 123456));

	fclose(fp);
	fclose(saida);
	liberaIndice(ind);

	return 0;
}