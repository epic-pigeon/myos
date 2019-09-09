#include "stdstr.h"
#include "../../types.h"

uint32 strcpy(char* dest, char* source) {
    uint32 i;
    for (i = 0; source[i] != NULL; i++) {
        dest[i] = source[i];
    }
    dest[i] = NULL;
    return i - 1;
}