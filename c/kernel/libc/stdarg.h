//
// Created by nikit on 9/9/2019.
//

#ifndef MYOS_STDARG_H
#define MYOS_STDARG_H

#include "../../types.h"

struct _va_list {
    void* start;
};

typedef struct _va_list va_list

void* _va_read_arg(va_list list, uint32 size);

#define va_read_arg(list, type) (type*) _va_read_arg(list, sizeof(type))

#endif //MYOS_STDARG_H
