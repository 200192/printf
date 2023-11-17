#include "main.h"

/**
 * handle_flags - Is going to calculate the active flags
 * @format: Contains the arguments
 * @i: Will measure the parameter
 * Return: Flags
 */
int handle_flags(const char *format, int *i)
{
    /* + # '' */
    /* 2 8 16 */
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CHAR[] = {'+', '#', '_', '\0'};
	const int FLAGS_ARR[] = {F_PLUS, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
	for (j = 0; FLAGS_CHAR[j] != '\0'; j++)
	if (format[curr_i] == FLAGS_CHAR[j])
	{
	flags |= FLAGS_ARR[j];
	break;
	}

	if (FLAGS_CHAR[j] == 0)
	break;
	}

	*i = curr_i - 1;

	return (flags);
}



}
