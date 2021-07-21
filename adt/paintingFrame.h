/*
    Trabalho pratico 0 de Projeto e analise de algoritmos - CCF 330F
    Feito por Mateus Pinto da Silva, matricula 3489
    Universidade Federal de Viçosa
*/

#ifndef PAINTINGFRAME_H
#define PAINTINGFRAME_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct paintingFrame {
  char **pixels;
  unsigned short int height;
  unsigned short int widht;

} paintingFrame;

bool paintingFrameDestroyPaint(paintingFrame **instance);
bool paintingFrameStartPaint(paintingFrame **instance);
bool paintingFrameClearPaint(paintingFrame **instance,
                             unsigned short int height,
                             unsigned short int widht);
bool paintingFrameCreateClearPaint(paintingFrame **instance,
                                   unsigned short int height,
                                   unsigned short int widht);
bool paintingFrameCreatePaintFromFile(paintingFrame **instance, char *filename);
bool paintingFramePrintPaint(paintingFrame **instance);
bool paintingFrameDebug(paintingFrame **instance);
bool paintingFrameCopyPaint(paintingFrame **instanceA,
                            paintingFrame **instanceB,
                            unsigned short int height,
                            unsigned short int widht);
bool paintingFrameCheckOverlay(paintingFrame **destiny, paintingFrame **origin,
                               unsigned short int height,
                               unsigned short int widht);
bool paintingFrameCheckIfPaintDontFit(paintingFrame **destiny,
                                      paintingFrame **origin);
bool paintingFrameInsertPaintInRandomPosition(paintingFrame **destiny,
                                              paintingFrame **origin);
bool paintingFrameInsertManyCopies(paintingFrame **destiny,
                                   paintingFrame **origin,
                                   unsigned short int copiesNumber);
bool paintingFrameInsertCopiesFrom1To100(paintingFrame **destiny,
                                         paintingFrame **origin,
                                         unsigned short int copiesNumber);
bool paintingFrameRandomlyInsertThreePaints(paintingFrame **destiny,
                                            paintingFrame **paint0,
                                            paintingFrame **paint1,
                                            paintingFrame **paint2,
                                            unsigned short int copiesNumber);
bool paintingFrameRandomlyInsertThreePaintsFrom1To100(
    paintingFrame **destiny, paintingFrame **paint0, paintingFrame **paint1,
    paintingFrame **paint2, unsigned short int copiesNumber);
bool paintingFrameBonusAstro(paintingFrame **destiny,
                             unsigned short int surprise);

#endif
