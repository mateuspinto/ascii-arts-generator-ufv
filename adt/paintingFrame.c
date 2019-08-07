#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../auxFunctions.h"
#include "paintingFrame.h"

bool paintingFrameDestroyPaint(paintingFrame ** instance)
{

    if((*instance) == NULL)
    {
        return 0;
    }

    for (size_t i = 0; i < (**instance).height; i++)
    {
        free((**instance).pixels[i]);
        
    }

    free((**instance).pixels); 

    free((*instance));

    (*instance) = NULL;

    return 0;
}

bool paintingFrameStartPaint(paintingFrame ** instance){
    *instance = malloc(sizeof(paintingFrame));

     if(*instance==NULL){
        printf("ERRO DE MEMORIA\n");
        return 0;
    }

    return 0;
}

bool paintingFrameClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht)
{
    
    (**instance).height = height;
    (**instance).widht = widht;
    (**instance).paintedPixels = 0;

    // Aloca dinamicamente o quadro de pintura
    (**instance).pixels = malloc((**instance).height * sizeof(char*));

    for (size_t i = 0; i < (**instance).height; i++)
    {
        (**instance).pixels[i] = malloc((**instance).widht * sizeof(char));

        // Limpando quadro de pintura
        for (size_t j = 0; j < (**instance).widht; j++)
        {
            (**instance).pixels[i][j] = '\0';
        }
        
    } 

    return 0;
}

bool paintingFrameCreateClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht)
{
    paintingFrameDestroyPaint(instance);
    paintingFrameStartPaint(instance);
    return paintingFrameClearPaint(instance, height, widht);
}

bool paintingFrameCreatePaintFromFile(paintingFrame ** instance, char * filename){

    unsigned short int fileHeight, fileWidht;
    FILE * file = NULL;

    file = fopen(filename, "r");

    fscanf(file, "%hu %hu", &fileHeight, &fileWidht);

    paintingFrameClearPaint(instance, fileHeight, fileWidht);

    fclose(file);

    return 0;
}

bool paintingFramePrintPaint(paintingFrame ** instance){

    auxFunctionsPrintHorizontalLine((**instance).widht);
    
    for (size_t i = 0; i < (**instance).height; i++)
    {

        auxFunctionsPrintVerticalLine();

        for (size_t j = 0; j < (**instance).widht; j++)
        {
            printf("%c", (*instance)->pixels[i][j]);
        }

        auxFunctionsPrintVerticalLine();
        printf("\n");
    }

    auxFunctionsPrintHorizontalLine((**instance).widht);

    return 0;
}


bool paintingFrameCopyPaint(paintingFrame ** destiny, paintingFrame ** origin, unsigned short int height, unsigned short int widht){

    for (size_t i = 0; i < (**origin).height; i++)
    {
        for (size_t j = 0; j < (**origin).widht; j++)
        {
            // Garante casos de desenho que compartilham poucos pixels, impedindo copias de espacos vazios
            if ((**origin).pixels[i][j]!='\0')
            {
                (**destiny).pixels[height + i][widht + j] = (**origin).pixels[i][j];
            }
        
        }
        
    }

    (**destiny).paintedPixels = (**destiny).paintedPixels + (**origin).paintedPixels; 

    return 0;
}


bool paintingFrameCheckOverlay(paintingFrame ** destiny, paintingFrame ** origin, unsigned short int height, unsigned short int widht){

    for (size_t i = 0; i < (**origin).height; i++)
    {

        for (size_t j = 0; j < (**origin).widht; j++)
        {
            // Ocorre sempre que a posição possível do desenho está ocupada
            if ((**destiny).pixels[height + i][widht + j]!='\0')
            {
                return 1;
            }
        
        }
        
    } 


    return 0;
}