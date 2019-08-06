#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "paintingFrame.h"

int paintingFrameStartPaint(paintingFrame ** instance){
    *instance = malloc(sizeof(paintingFrame));

     if(*instance==NULL){
        printf("ERRO DE MEMORIA\n");
        return 0;
    }

    return 0;
}

int paintingFrameClearPaint(paintingFrame ** instance, short int height, short int widht){
    (**instance).height = height;
    (**instance).widht = widht;

    // Aloca dinamicamente o quadro de pintura
    (**instance).validBits = malloc((**instance).height * sizeof(bool*));
    (**instance).paintBits = malloc((**instance).height * sizeof(char*));

    for (size_t i = 0; i < (**instance).height; i++)
    {
        (**instance).validBits[i] = malloc((**instance).widht * sizeof(bool));
        (**instance).paintBits[i] = malloc((**instance).widht * sizeof(char));

        // Preenchendo quadro de pintura
        for (size_t j = 0; j < (**instance).widht; j++)
        {
            (**instance).validBits[i][j] = 0;
            (**instance).paintBits[i][j] = '\0';
        }
        
    } 

    return 0;
}


int paintingFramePrintPaint(paintingFrame ** instance){
    
    for (size_t i = 0; i < (**instance).height; i++)
    {
        for (size_t j = 0; j < (**instance).widht; j++)
        {
            printf("%c", (*instance)->paintBits[i][j]);
        }

        printf("\n");
    }
    return 0;
}

int paintingFrameDebugPaint(paintingFrame ** instance){
    
    for (size_t i = 0; i < (**instance).height; i++)
    {
        for (size_t j = 0; j < (**instance).widht; j++)
        {
            printf("%d", (*instance)->validBits[i][j]);
        }

        printf("\n");
    }
    return 0;
}