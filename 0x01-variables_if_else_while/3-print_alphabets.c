#include <stdio.h>

/**
 * main - alphABET
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char ch, ca;

	ch = 'a';
	ca = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (ca <= 'Z')
	{
		putcha(ca);
		ca++;
	}

	putchar('\n');

	return (0);
}
