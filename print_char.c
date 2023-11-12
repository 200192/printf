#include <unistd.h>
#include "main.h"
#include <stdlib.h>


int _printf(const char *format, ...)

/**
 *for printing - to check if char is printable
 *evaluating the character - c
 *
 *
 */
	

int print_char(char c)
{
	

return (write(1, &c, 1));
}
