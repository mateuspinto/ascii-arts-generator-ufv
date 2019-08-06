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

int paintingFrameStartPaint(paintingFrame ** paintFrame);
int paintingFrameClearPaint(paintingFrame ** paintFrame);

#endif