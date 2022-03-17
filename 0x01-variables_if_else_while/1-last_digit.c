#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	 int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	/* your code goes there */
	if (lastd > 5)
	 {
		 printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	 }
	 else if (lastd == 0)
	 {
		 printf("Last digit of %d is %d and is 0\n", n, lastd);
	 }
	 else if (lastd < 6 && lastd != 0)
	 {
		  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	 }
=======
	int n;
	int last;
>>>>>>> 590f183d60a3040a368ddc89d976f835793d539d

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
