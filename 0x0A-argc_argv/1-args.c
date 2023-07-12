#include <stdio.h>

/**
 * main - number of argumnts
 * @argc: numbr of arguments
 * @argv: array of argumnts
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;
(void) argv;
while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);

return (0);
}

