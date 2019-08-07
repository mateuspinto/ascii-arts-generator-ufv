#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "auxFunctions.h"

bool auxFunctionsPrintHorizontalLine(unsigned short int widht){

    for (size_t i = 0; i < widht + 2; i++)
    {
        printf("-");
    }
    
    printf("\n");
    return 0;
}

bool auxFunctionsPrintVerticalLine(){

    printf("|");

    return 0;
}