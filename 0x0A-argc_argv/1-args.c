#include <stdio.h>
#include "main.h"

/**
 * main - number of argumnts
 * @argc: numbr of arguments
 * @argv: array of argumnts
 *
 * Return: always zero.
 */

int main(int argc, char *argv[])
{
	
	(void) argv;
	printf("%d\n", argc - 1);

return (0);
}

