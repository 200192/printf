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
	if (*format == '%')
	{
	if(strlen(format) == 1)
	write(1, "%", 1);
	}
	else if (*format == '%' && *(format + 1) == ' ')
	{
	va_end(ap);
	return (-1);
	}
	else if (*format == '%' && *(format + 1) == '\0')
	{
	va_end(ap);
	return (-1);
	}
	
	else  if (*format == '%')
	count += print_format(*++format, ap);
      else
	count += write(STDOUT_FILENO, format, 1);
      ++format;
    }
  va_end(ap);
  return count;
}
