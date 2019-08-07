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

    paintingFrameCreatePaintFromFile(&desenho, "paints/asterisk.txt");

    paintingFrameCreateClearPaint(&quadro, 5, 20);
    paintingFrameInsertManyCopies(&quadro, &desenho, 4);
    //paintingFrameCopyPaint(&quadro, &desenho, 0, 0);
    paintingFramePrintPaint(&quadro);
    paintingFrameDebug(&desenho);
    paintingFrameDebug(&quadro);

    return 0;
    
}