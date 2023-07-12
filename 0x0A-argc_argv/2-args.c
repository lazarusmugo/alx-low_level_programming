#include "main.h"
#include <stdio.h>

/**
 * main - prints numbr of argumnts
 * @argc: arguments no
 * @argv: argumnt array
 *
 * Return: Always zero.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

