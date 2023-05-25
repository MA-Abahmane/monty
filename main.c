#include "monty.h"

/* information collector */
e_info data = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
FILE *file;
char *Ldata;
size_t Lsize = 0;
ssize_t crnt_line = 1;
unsigned int count = 0;
stack_t *stack = NULL;

/* if more than one argument is given to the program */
if (argc != 2)
{
  fprintf(stderr, "USAGE: monty file\n");
  exit(EXIT_FAILURE);
}

/* open file to reading mode */
file = fopen(argv[1], "r");
data.file = file;
/* if its not possible to open file */
if (file == NULL)
{
  fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
  exit(EXIT_FAILURE);
}

/* get the commands from the .m file */
while (crnt_line > 0)
{
Ldata = NULL;
crnt_line = getline(&Ldata, &Lsize, file);
data.content = Ldata;
count++;
/* send each command line to be executed */
if (crnt_line > 0)
{
  cmd_executer(file, Ldata, &stack ,count);
}
free(Ldata);
}

fclose(file);
return (0);
}