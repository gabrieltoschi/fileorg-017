/**
	CSV
	Funções que manipulam arquivos CSV para leitura e escrita.
**/

#ifndef _CSV_H_
#define _CSV_H_

char **leCSV(FILE *arquivo);
void liberaCSV(char **dados);

#endif