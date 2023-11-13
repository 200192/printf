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
if (c != '\0')
{
return (write(1, &c, 1));
}
else 
{
return (-1);
}
}
