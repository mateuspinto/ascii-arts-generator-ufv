#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "auxFunctions.h"
#include "adt/paintingFrame.h"

int main() {

    paintingFrame * quadro = NULL;

    /*paintingFrameStartPaint(&quadro);
    paintingFrameClearPaint(&quadro, 300, 400);

    printf("%d", paintingFrameOpenPaintFromFile(&quadro, "paints/test.txt"));*/

    paintingFrameCreateClearPaint(&quadro, 5, 4);
    paintingFramePrintPaint(&quadro);
    return 0;
    
}