
#include <ctype.h>
#include "monty.h"

/**
 * is_number - Check if a char pointer is a number
 * @str: Char pointer to check
 * Return: 1 if number or 0
*/
int is_number(char *str)
{
size_t len = strlen(str);
unsigned int i = 0;
while (i < len)
{
	if (str[i] != '-' && !isdigit(str[i]))
		return (0);
	i++;
}
return (1);
}
