#include "main.h"
/**
 * _strcat - a function to concatenate two
 * strings
 * @dest: holds beginning of intended string
 * @src: is the string to be added to *dest
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
