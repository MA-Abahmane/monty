#include "monty.h"

/**
 * _realloc - reallocation memory
 * @ptr: pointer to the momory to reallocate
 * @old_size: previous size of memory
 * @new_size: new size of memory
 * Return: pointer to the new reallocated memory
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
 void *new_memory = NULL;

 if (new_size == old_size)
  return (ptr);
 if (new_size == 0 && ptr != NULL)
 {
  free(ptr);
  return (NULL);
 }
 new_memory = malloc(new_size);
 if (ptr == NULL)
  return (new_memory);
 if (old_size > new_size)
  _memcpy(new_memory, ptr, new_size);
 else
  _memcpy(new_memory, ptr, old_size);

 free(ptr);
 return (new_memory);
}

/**
 * _memcpy - copy bytes from an area to another
 * @dest: destination
 * @src: source
 * @size: number oof bytes to copy
 */
void _memcpy(void *dest, void *src, size_t size)
{
 size_t i = 0;
 char *_c1 = NULL;
 char *_c2 = NULL;

 if (size == 0)
  return;
 _c1 = (char *) dest;
 _c2 = (char *) src;

 for (i = 0; i < size; i++)
  _c1[i] = _c2[i];
}
