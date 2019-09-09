#include "stdarg.h"

void* _va_read_arg(va_list list, uint32 size) {
    void* result = list->start;
    list->start = (void*) ((uint32) list->start + size);
    return result;
}