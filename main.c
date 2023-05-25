#include "monty.h"

/* information collector */
e_info data = {NULL, NULL, NULL, 0};

/**
 * main - The program entry point
 * @argc: Arguments count
 * @argv: Arguments
 * Return: 0 on success or 1
 */
int main(int argc, char *argv[])
{
FILE *file;
char *Ldata = NULL;
size_t Lsize = 0;
unsigned int count = 0;
stack_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
data.file = file;
while (getline(&Ldata, &Lsize, file) != -1)
{
data.content = Ldata;
count++;
cmd_executer(file, Ldata, &stack, count);
}
free(Ldata);
if (fclose(file))
    exit(-1);
return (0);
}
