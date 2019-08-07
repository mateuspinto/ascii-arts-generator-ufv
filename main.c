#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "auxFunctions.h"
#include "adt/paintingFrame.h"

int main() {

    paintingFrame * quadro = NULL;
    paintingFrame * desenho = NULL;

    /*paintingFrameStartPaint(&quadro);
    paintingFrameClearPaint(&quadro, 300, 400);*/

    paintingFrameCreatePaintFromFile(&desenho, "paints/test.txt");

    paintingFrameCreateClearPaint(&quadro, 5, 50);
    paintingFrameInsertManyCopies(&quadro, &desenho, 20);
    paintingFramePrintPaint(&quadro);
    paintingFrameDebug(&desenho);
    return 0;
    
}