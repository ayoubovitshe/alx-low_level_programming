#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char az;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (az = 'a'; az <= 'f'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
