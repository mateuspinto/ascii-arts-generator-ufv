#	Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
#	Feito por Mateus Pinto da Silva, matricula 3489
#	Universidade Federal de Viçosa

# Nome do executavel
TARGET=marombitte.o

# Compiladores
CC=gcc
CCO=clang

# Warnings
WARN=-Wall

# Main e .c dos TADS
SRC= main.c auxFunctions.c adt/paintingFrame.c

all:
	$(CC) -o $(TARGET) $(SRC) $(WARN) -lm

run:
	./$(TARGET)

clear:
	rm $(TARGET)

clang:
	$(CCO) -o $(TARGET) $(SRC) $(CCFLAGS) -lm -O3