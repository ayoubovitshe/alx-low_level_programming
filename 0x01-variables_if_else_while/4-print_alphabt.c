#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
