#include "main.h"

/**
 * *_strcpy - a function that copise the string point to src
 * @dest: copy to
 * @src: copy from
 * return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0')

	return (dest);
}
