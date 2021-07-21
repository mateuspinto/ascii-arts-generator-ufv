#	Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
#	Feito por Mateus Pinto da Silva, matricula 3489
#	Universidade Federal de Viçosa

# Nome do executavel
BIN=marombitte

# Compiladores
CC=clang

# Main e .c dos TADS
SRC= main.c auxFunctions.c adt/paintingFrame.c

all:
	$(CC) -o $(BIN) $(SRC) -pipe -O3 -march=native -lm -flto -Wall -Wextra

run:
	./$(BIN)