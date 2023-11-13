#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */


void write_hex(void *ptr)
{
int i,j;
const char sym[] = "0123456789";
uintptr_t address = (uintptr_t)ptr;
char buffer[16] = {'\0'};
for (i = sizeof(void *) * 2 - 1, j = 0; i >= 0;  i--, j++)
{
buffer[j] = sym[(address >> (i * 4)) & 0xF];
}
write(1, buffer, sizeof(void *) * 2);
}








int p_a(void *a)
{
if (a != NULL)
{
write_hex(a);
return (1);
}
else 
{
return (0);
}
}
