#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -> assign a random number to the variable n each time it is executed and prints out
*based on a condition
*Return : always 0
*/
int main(void)
{
int n;

srand(time(0);
n = rand() - RAND_MAX / 2:
if (n > 0)
Printf("%d\ is positive\n", n);
if (n == 0)
Printf("%d is zero\n" , n);
if (n < 0)
{
Printf("%d is negative\n", n);
}
Return (0);
}
