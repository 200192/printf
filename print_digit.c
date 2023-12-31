#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

























int print_digit(long n, int base)
{
  int count;
  char *symbols;

  symbols = "0123456789abcdef";
  if (n < 0)
    {
      write(1, "-", 1);
      return print_digit(-n, base) + 1;
    }
  else if (n < base)
    return print_char(symbols[n]);
  else
    {
      count = print_digit(n / base, base);
      return count + print_digit(n % base, base);
    }
  return (0);
}
