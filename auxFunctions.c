/*
    Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
    Feito por Mateus Pinto da Silva, matricula 3489
    Universidade Federal de Viçosa
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "auxFunctions.h"

bool auxFunctionsPrintHorizontalLine(unsigned short int widht) {

  for (size_t i = 0; i < widht + 2; i++) {
    printf("-");
  }

  printf("\n");
  return 0;
}

bool auxFunctionsPrintVerticalLine(void) {

  printf("|");

  return 0;
}

bool auxFunctionsPrintMenu(void) {
  auxFunctionsPrintHorizontalLine(78);
  printf("Bem-vindo ao programa René Marombitte, criador de artes digitais "
         "aleatórias!\n");
  auxFunctionsPrintHorizontalLine(78);
  printf("Feito por Mateus Pinto da Silva, matricula 3489\n");
  printf("Disciplina de Projeto e Analise de Algoritmos, CCF 330F\n");
  auxFunctionsPrintHorizontalLine(78);

  printf("Opções disponíveis: \n");
  printf("1- Asterisco simples;\n");
  printf("2- Símbolo de soma com astericos;\n");
  printf("3- Letra X com asteriscos;\n");
  printf("4- Figura aleatórias (Surpresa);\n");
  printf("\n");
  printf("8- Escolher novas dimensões do quadro;\n");
  printf("9- Sair do programa\n");
  auxFunctionsPrintHorizontalLine(78);
  printf("\n");

  return 0;
}

bool auxFunctionsAskForType(void) {
  return printf("Digite uma opção válida: ");
}

bool auxFunctionsAskForCopies(void) {
  return printf("Digite a quantidade de entradas: ");
}
