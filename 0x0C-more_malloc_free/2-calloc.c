#include <stdlib.h>
#include "main.h"

/**
 * *_mymemset - fills memory with a constant byte
 * @dest: memory area to be filled
 * @b: character to copy
 * @n: number of times to copy 'b'
 *
 * Return: pointer to the memory area 'dest'
 */
char *_mymemset(char *dest, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = b;
    }

    return (dest);
}

/**
 * *_mycalloc - allocates memory for an array
 * @numElements: number of elements in the array
 * @elementSize: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_mycalloc(unsigned int numElements, unsigned int elementSize)
{
    char *ptr;

    if (numElements == 0 || elementSize == 0)
        return (NULL);

    ptr = malloc(elementSize * numElements);

    if (ptr == NULL)
        return (NULL);

    _mymemset(ptr, 0, numElements * elementSize);

    return (ptr);
}
