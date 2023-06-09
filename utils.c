
#include <ctype.h>
#include "monty.h"

/**
 * is_number - Check if a char pointer is a number
 * @str: Char pointer to check
 * Return: 1 if number or 0
*/
int is_number(char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[0] == '-')
		{
			i++;
			continue;
		}
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
