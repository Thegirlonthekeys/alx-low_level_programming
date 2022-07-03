#include <stdio.h>
/**
 * main - prints all the possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
int a;
int b;

for (a = 48; a <= 56; a++)
{
	for (b = 49; b <= 57; b++)
	{
		if (b > a)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
