#ifndef PAINTINGFRAME_H
#define PAINTINGFRAME_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct paintingFrame
{
    char ** pixels;
    unsigned short int height;
    unsigned short int widht;
    int paintedPixels;

} paintingFrame;

bool paintingFrameDestroyPaint(paintingFrame ** instance);
bool paintingFrameStartPaint(paintingFrame ** instance);
bool paintingFrameClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht);
bool paintingFrameCreateClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht);
bool paintingFrameCreatePaintFromFile(paintingFrame ** instance, char * filename);
bool paintingFramePrintPaint(paintingFrame ** instance);
bool paintingFrameCopyPaint(paintingFrame ** instanceA, paintingFrame ** instanceB, unsigned short int height, unsigned short int widht);
bool paintingFrameCheckOverlay(paintingFrame ** destiny, paintingFrame ** origin, unsigned short int height, unsigned short int widht);

#endif