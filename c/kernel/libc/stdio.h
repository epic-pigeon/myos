//
// Created by nikit on 9/9/2019.
//

#ifndef MYOS_STDIO_H
#define MYOS_STDIO_H

#include "../../types.h"
#include "../vga/vga.h"


uint8 FORE_COLOR = WHITE;
uint8 BACK_COLOR = BLACK;
uint32 offset = 0;

void printf(char *format, ...);
uint8 print(char* str);

#endif //MYOS_STDIO_H
