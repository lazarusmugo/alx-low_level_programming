#include<stdio.h>
/**
* main - Prints alphabets in lowercase esxcept q and e
* Return : Always 0.
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{i
if (letter != 'e' && letter != 'q')
	putchar(letter);
}
putchar('\n');
return (0);
}
