#include <unistd.h>
#include "main.h"
#include <stdlib.h>


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
 */

int print_char(char c)
{
return (write(1, &c, 1));
}
