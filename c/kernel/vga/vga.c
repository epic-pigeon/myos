#include "vga.h"

uint16 vga_entry(unsigned char ch, uint8 fore_color, uint8 back_color) {
    uint16 ax = 0;
    uint8 ah = 0, al = 0;

    ah = back_color;
    ah <<= 4;
    ah |= fore_color;
    ax = ah;
    ax <<= 8;
    al = ch;
    ax |= al;

    return ax;
}

void vga_clear_buffer(uint8 fore_color, uint8 back_color) {
    for (uint32 i = 0; i < BUFSIZE; i++) {
        vga_buffer[i] = vga_entry(NULL, fore_color, back_color);
    }
}

void vga_init_buffer(uint8 fore_color, uint8 back_color) {
    vga_buffer = (uint16*) VGA_ADDRESS;
    vga_clear_buffer(fore_color, back_color);
}