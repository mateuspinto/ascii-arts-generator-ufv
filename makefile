# Nome do executavel
TARGET=marombitte.o

# Compiladores
CC=gcc
CCO=clang

# Warnings
WARN=-Wall

CCFLAGS=$(WARN)


# Main e .c dos TADS
SRC= main.c adt/paintingFrame.c

all:
	$(CC) -o $(TARGET) $(SRC) $(CCFLAGS) -lm

run:
	./$(TARGET)

clear:
	rm $(TARGET)

clang:
	$(CCO) -o $(TARGET) $(SRC) $(CCFLAGS) -lm -O3