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

    paintingFrameCreateClearPaint(&quadro, 30, 30);
    paintingFrameInsertManyCopies(&quadro, &desenho, 5);
    //paintingFrameCopyPaint(&quadro, &desenho, 0, 0);
    paintingFramePrintPaint(&quadro);
    paintingFrameDebug(&desenho);
    paintingFrameDebug(&quadro);
    return 0;
    
}