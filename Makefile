#	Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
#	Feito por Mateus Pinto da Silva, matricula 3489
#	Universidade Federal de Viçosa

BIN=marombitte
LIBS=
SRC= main.c auxFunctions.c adt/paintingFrame.c

CC=clang
CFLAGS=-O3 -march=native
LFLAGS=-static
WARN=-Wall -Wextra -Werror

all:
	$(CC) -o $(BIN) $(SRC) $(CFLAGS) $(LFLAGS) $(WARN) $(LIBS)

run:
	./$(BIN)
