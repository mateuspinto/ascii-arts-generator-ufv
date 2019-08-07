#ifndef PAINTINGFRAME_H
#define PAINTINGFRAME_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct paintingFrame
{
    char ** pixels;
    unsigned short int height;
    unsigned short int widht;

} paintingFrame;

bool paintingFrameDestroyPaint(paintingFrame ** instance);
bool paintingFrameStartPaint(paintingFrame ** instance);
bool paintingFrameClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht);
bool paintingFrameCreateClearPaint(paintingFrame ** instance, unsigned short int height, unsigned short int widht);
bool paintingFrameCreatePaintFromFile(paintingFrame ** instance, char * filename);
bool paintingFramePrintPaint(paintingFrame ** instance);
bool paintingFrameDebug(paintingFrame ** instance);
bool paintingFrameCopyPaint(paintingFrame ** instanceA, paintingFrame ** instanceB, unsigned short int height, unsigned short int widht);
bool paintingFrameCheckOverlay(paintingFrame ** destiny, paintingFrame ** origin, unsigned short int height, unsigned short int widht);
bool paintingFrameCheckIfPaintDontFit(paintingFrame ** destiny, paintingFrame ** origin);
bool paintingFrameInsertPaintInRandomPosition(paintingFrame ** destiny, paintingFrame ** origin);
bool paintingFrameInsertManyCopies(paintingFrame ** destiny, paintingFrame ** origin, unsigned short int copiesNumber);


#endif