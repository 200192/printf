#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>





















int _printf(const char *format, ...)
{
  va_list ap;
  int count;

  va_start(ap, format);
  count = 0;
  while (*format)
    {
      if (*format == '%')
	count += print_format(*++format, ap);
      else
	count += write(STDOUT_FILENO, format, 1);
      ++format;
    }
  va_end(ap);
  return count;
}
