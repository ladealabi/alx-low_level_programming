#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 0; m <= 10; n++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
