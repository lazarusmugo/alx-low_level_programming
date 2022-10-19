#include<stdio.h>
/**
* main - Prints alphabets in lowercase esxcept q and e
*Return : Always 0.
*/
int main(void)
{
char letter;
for (etter = 'a'; letter <='z; letter++)
{
if (letter != 'e' && letter != 'q')
	puthar(letter);
}
putchar('\n');
return (0);
}
