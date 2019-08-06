#include <stdio.h>
#include <stdlib.h>

#include "adt/paintingFrame.h"

int main() {

    paintingFrame * quadro = NULL;

    paintingFrameStartPaint(&quadro);
    paintingFrameClearPaint(&quadro, 3, 4);

    paintingFramePrintPaint(&quadro);
    paintingFrameDebugPaint(&quadro);
    return 0;
    
}