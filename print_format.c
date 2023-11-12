#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/**
 *  *
 *   *
 *    *
 *     *
 *      *
 *       *
 *        *
 *         *
 *          *
 *           *
 *            *
 *             *
 *              *
 *               *
 *                *
 *                 *
 *                  */
int print_format(char specifier, va_list ap) {
int print = 0;
if (specifier == 'c') 
{
 print += print_char(va_arg(ap, int));
} else if (specifier == 's') 
{
 print += print_str(va_arg(ap, char *));
}
else if (specifier == 'd') 
{
print += print_digit(va_arg(ap, int), 10);
}
else if (specifier == 'x') 
{
print += print_digit(va_arg(ap, unsigned int), 16);
} 
else 
{
 print += write(1, &specifier, 1);
										  }
return print;
}
