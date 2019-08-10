/*
    Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
    Feito por Mateus Pinto da Silva, matricula 3489
    Universidade Federal de Viçosa
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "auxFunctions.h"
#include "adt/paintingFrame.h"

int main() {

    paintingFrame * background = NULL;
    paintingFrame * asterisk = NULL;
    paintingFrame * cross = NULL;
    paintingFrame * x = NULL;

    unsigned short int copies;
    bool exit=false;
    unsigned short int option;

    paintingFrameCreatePaintFromFile(&asterisk, "paints/asterisk.txt");
    paintingFrameCreatePaintFromFile(&cross, "paints/cross.txt");
    paintingFrameCreatePaintFromFile(&x, "paints/x.txt");

    paintingFrameCreateClearPaint(&background, 18, 78);
    
    
    auxFunctionsPrintMenu();
    auxFunctionsAskForType();
    scanf("%hu", &option);
    printf("\n");
    
    while (!exit){
        if(option==0) {

            auxFunctionsPrintMenu();

        } else if(option==1) {

            auxFunctionsAskForCopies();
            scanf("%hu", &copies);
            paintingFrameInsertCopiesFrom1To100(&background, &asterisk, copies);
            paintingFramePrintPaint(&background);

        } else if(option==2) {

            auxFunctionsAskForCopies();
            scanf("%hu", &copies);
            paintingFrameInsertCopiesFrom1To100(&background, &cross, copies);
            paintingFramePrintPaint(&background);

        } else if(option==3) {

            auxFunctionsAskForCopies();
            scanf("%hu", &copies);
            paintingFrameInsertCopiesFrom1To100(&background, &x, copies);
            paintingFramePrintPaint(&background);

        } else if(option==4) {

            printf("Digite um número para a surpresa: ");
            scanf("%hu", &copies);
            paintingFrameBonusAstro(&background, copies);
            paintingFramePrintPaint(&background);
        } else if(option==9) {
            
            printf("Obrigado! <3\n");
            exit=true;
            break;
        }

        paintingFrameCreateClearPaint(&background, 20, 80);
        printf("Digite outra opção ou 0 para voltar ao menu: ");
        scanf("%hu", &option);
        printf("\n");
    }
    return 0;
    
}