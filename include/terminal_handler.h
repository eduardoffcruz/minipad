#ifndef TERMINAL_HANDLER_H
#define TERMINAL_HANDLER_H

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <termios.h>
#include <stdint.h>
#include <string.h>

/*
* Enable terminal's raw mode: so to read byte-by-byte instead of line-by-line.
* - By default, terminal is in canonical mode: keyboard input is only sent via STDIN when Enter is pressed.
*/
void terminal_enable_raw_mode();

/*
* Reset terminal's mode back to default (canonical mode).
*/
void terminal_disable_raw_mode();

/*
* Exit and output error.
*/
void die(const char *str);

/*
* .
*/
void position_cursor(uint8_t row, uint8_t col);
void position_cursor_topleft();
void clear_screen();
void clear_all();
void clear_line();



#endif /* TERMINAL_HANDLER_H */