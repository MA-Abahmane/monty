#include "monty.h"

/**
 * split - Explode a string into different parts
 * @str: String to explode
 * Return: Pointer to char-pointer
 */
char **split(char *str)
{
int index = 0, parts_size = 64;
const char *separators = " \t\n";
char *part;
char **parts = malloc(sizeof(char *) * parts_size);
if (parts == NULL)
	return (NULL);
part = strtok(str, separators);
while (part != NULL)
{
	if (index >= parts_size)
	{
		parts_size += 64;
		parts = _realloc(parts, sizeof(part), sizeof(char *) * parts_size);
		if (parts == NULL)
			return (parts);
	}
	parts[index] = part;
	index++;
	part = strtok(NULL, separators);
}
parts[index] = NULL;

return (parts);
}
