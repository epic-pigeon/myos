#include "stdio.h"
#include "stdarg.h"
#include "../../types.h"
#include "stdstr.h"

void print(char* str) {
    for (uint32 i = 0; str[i] != NULL; i++) {
        vga_buffer[offset++] = vga_entry(str[i], FORE_COLOR, BACK_COLOR);
    }
}

uint8 printf(char* format, ...) {
    va_list list;
    list->start = &format + 1;
    char* result = NULL;
    uint32 length = 0;

    for(uint32 i = 0; format[i] != NULL; i++) {
        if (format[i] == '%') {
            i++;
            if (format[i] == '%') {
                length += strcpy(result + length, "%");
            } else if (format[i] == 's') {
                length += strcpy(result + length, va_read_arg(list, char));
            }
        } else {
            char str[2];
            str[0] = format[i];
            str[1] = NULL;
            length += strcpy(result + length, str);
        }
    }
}