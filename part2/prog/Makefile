 ################################################################
#/--------------------------------------------------------------\#
#|  Segundoo Trabalho Pr�tico - Organiza��o de Arquivos(SCC215) |#
#|   								|#
#| Alunos:  	 			N� USP: 	        |#
#|   	David Souza Rodrigues				4461180 |#
#|   	Fernanda Tostes Marana  			4471070 |#
#|   	Gabriel Toschi de Oliveira  			9763039 |#
#|   	Marcelo de Moraes Carvalho da Silva 		9791048 |#
#|   								|#
#| Professora:  						|# 
#|   	Dra. Cristina Dutra de Aguiar Ciferri  			|#
#|   								|#
#| Entrega:							|# 
#|     	02/07/2017						|#
#|   								|#
#| Arquivo: 							|#
#|   	Makefile						|#
#|   								|#
#| Descri��oo:							|#
#|	Comandos para facilitar o processo de compila��o	|#
#\--------------------------------------------------------------/#
 ################################################################

all:
	@gcc interface.c CSV.c registro.c delimitador.c caractere.c indice.c firstFit.c bestFit.c worstFit.c -o dominios -I./
	@gcc test.c CSV.c registro.c delimitador.c caractere.c indice.c firstFit.c bestFit.c worstFit.c -o test -I./

run:
	@clear
	@./dominios

runtest:
	@./test
