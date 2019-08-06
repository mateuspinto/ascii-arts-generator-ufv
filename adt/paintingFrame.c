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

int paintingFrameClearPaint(paintingFrame ** instance){
    (**instance).height = 3;
    (**instance).widht = 4;

    (**instance).validBits = malloc((**instance).height * sizeof(bool*));
    (**instance).paintBits = malloc((**instance).height * sizeof(char*));

    for (size_t i = 0; i < (**instance).height; i++)
    {
        (**instance).validBits[i] = malloc((**instance).widht * sizeof(bool));
        (**instance).paintBits[i] = malloc((**instance).widht * sizeof(char));

        for (size_t j = 0; j < (**instance).widht; j++)
        {
            (**instance).validBits[i][j] = 0;
            (**instance).paintBits[i][j] = '\0';
        }
        
    } 

    return 0;
}