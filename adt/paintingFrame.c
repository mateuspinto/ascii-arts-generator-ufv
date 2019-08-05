#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "paintingFrame.h"

int paintingFrameStartPaint(paintingFrame ** paintFrame){
    (**paintFrame).validBits = malloc((**paintFrame).height * sizeof(bool*));

    for (size_t i = 0; i < (**paintFrame).height; i++)
    {
        (**paintFrame).validBits[i] = malloc((**paintFrame).widht * sizeof(bool));

        for (size_t j = 0; i < (**paintFrame).widht; i++)
        {
            (**paintFrame).validBits[i][j] = 0;
        }
        
    }

    return 0;
    
}