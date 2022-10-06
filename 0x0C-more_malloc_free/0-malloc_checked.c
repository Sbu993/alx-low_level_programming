#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using g malloc
 * @b: memory to allocate 
 *
 * Return: pointer to allocate memory or normal process termation if error
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
