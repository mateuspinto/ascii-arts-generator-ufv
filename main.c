#include <stdio.h>
#include <stdlib.h>

#include "adt/paintingFrame.h"

int main() {

    paintingFrame * quadro = NULL;

    paintingFrameStartPaint(&quadro);
    paintingFrameClearPaint(&quadro);

    printf("%c", quadro->paintBits[0][0]);
    return 0;
    
}