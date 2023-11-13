#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>




















int _printf(const char *format, ...)
{
va_list ap;
 int count;
if (format == NULL)
{
return (-1);
}


va_start(ap, format);
count = 0;
while (*format)
{


if(*format == '%')
{
count += print_format(*++format, ap);
}
else 
{
count+= write(1, format, 1);
++format;
}

}
va_end(ap);
return count;
}
