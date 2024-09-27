#include "main.h"
#include <stdio.h>

/**
 * clear_input_buffer - Removes any unintended
 * extra characters from input buffer
 *
 * Return: NULL
 */
 
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
