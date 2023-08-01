#include "main.h"
		
/**
 * char *_strcpy - a function that duplicates the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
  int f = 0;

  for (; src[f] != '\0'; f++)
    {
      dest[f] = src[f];
    }
  return (dest);
}
