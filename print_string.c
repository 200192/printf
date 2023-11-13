#include <stdarg.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>


















int print_str(char *s)
{
  int count;
if (s == NULL)
{
write(STDOUT_FILENO, "(null)", 0);
}
else
{
  count = 0;
  while (*s)
    count += write(1, s++, 1);
}
  return count;
}

