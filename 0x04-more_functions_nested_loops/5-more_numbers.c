include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 * Return: 0 to 14 ten times and  a new line
 */
void more_numbers(void)
{
	int i, b;

	for (b = 0; b < 10; b++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
