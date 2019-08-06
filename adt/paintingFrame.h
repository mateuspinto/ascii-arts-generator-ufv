#ifndef PAINTINGFRAME_H
#define PAINTINGFRAME_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct paintingFrame
{
    bool ** validBits;
    char ** paintBits;
    short int height;
    short int widht;

} paintingFrame;

int paintingFrameStartPaint(paintingFrame ** instance);
int paintingFrameClearPaint(paintingFrame ** instance, short int height, short int widht);
int paintingFramePrintPaint(paintingFrame ** instance);
int paintingFrameDebugPaint(paintingFrame ** instance);

#endif