#include <stdio.h>
/**
 * main - prints all possible combination of single digit numbers
 *
 * Return: returns 0if successful
 */
int main(void)
{
int a;

for (a = 48; a < 58; a++)
{
	putchar(a);
	if (a != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
