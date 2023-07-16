#include "main.h"

/**
 * string_nconcat - concatenates strings
 * @s1: string 1
 * @s2:string 2
 * @n:number of characters in s2 to be used
 * Return: pointer to joint string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_ptr;
	unsigned int a, b, Slength, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if  (s2 == NULL)
	{
		s2 = "";
	}
	for (La = 0; *(s1 + a) != '\0'; a++)
	{
		;
	}
	for (b = 0; *(s2 + b!= '\0'; b)
	{
		;
	}
	if (n >= b)
	{
		n = b;
	}
	Slength = a+ n;
	concat_ptr = malloc(sizeof(char) * (Slength + 1));
	if (concat_ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < Slength; i++)
	{
		if (i < Los1)
		{
			concat_ptr[i] = *(s1 + i);
		}
		else
		{
			concat_ptr[i] = *(s2 + (i - Los1));
		}
	}
	concat_ptr[i] = '\0';

	return (concat_ptr);
}
