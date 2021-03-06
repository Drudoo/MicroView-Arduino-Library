#ifndef SPACE01_H
#define SPACE01_H

#include <avr/pgmspace.h>

static const unsigned char space01[] PROGMEM = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	22,16,48,2,0,44,	
	0xFC, 0xFC, 0xC0, 0xC0, 0xF3, 0xF3, 0x3C, 0x3C, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0x3C, 0x3C,
	0xF3, 0xF3, 0xC0, 0xC0, 0xFC, 0xFC, 0x00, 0x00, 0xC0, 0xC0, 0xF3, 0xF3, 0x3C, 0x3C, 0xF0, 0xF0,
	0xF0, 0xF0, 0xF0, 0xF0, 0x3C, 0x3C, 0xF3, 0xF3, 0xC0, 0xC0, 0x00, 0x00, 0x03, 0x03, 0xCF, 0xCF,
	0x3F, 0x3F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x3F, 0x3F, 0xCF, 0xCF,
	0x03, 0x03, 0x3F, 0x3F, 0x03, 0x03, 0x3F, 0x3F, 0xCF, 0xCF, 0xCF, 0xCF, 0x0F, 0x0F, 0xCF, 0xCF,
	0xCF, 0xCF, 0x3F, 0x3F, 0x03, 0x03, 0x3F, 0x3F, 
};
#endif
