#ifndef main_h
#define main_h
#include <stdarg.h>
#include <unistd.h>



int print_format(char specifier, va_list ap); 
int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_digit(long n, int base);
int p_a(void *a);

#endif 
