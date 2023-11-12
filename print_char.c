#include <unistd.h>
#include "main.h"
#include <stdlib.h>




/**
 *
 *evaluating the character - c
 *
 *
 */
	

int print_char(char c)
{
	

return (write(1, &c, 1));
}
