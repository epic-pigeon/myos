//
// Created by nikit on 9/9/2019.
//

#ifndef MYOS_VGA_H
#define MYOS_VGA_H

#include "../../types.h"

#define VGA_ADDRESS 0xB8000
#define BUFSIZE 2200

enum vga_color {
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    GREY,
    DARK_GREY,
    LIGHT_BLUE,
    LIGHT_GREEN,
    LIGHT_CYAN,
    LIGHT_RED,
    LIGHT_MAGENTA,
    YELLOW,
    WHITE
};

uint16* vga_buffer;

uint16 vga_entry(unsigned char ch, uint8 fore_color, uint8 back_color);
void vga_clear_buffer(uint8 fore_color, uint8 back_color);
void vga_init_buffer(uint8 fore_color, uint8 back_color);


#endif //MYOS_VGA_H
