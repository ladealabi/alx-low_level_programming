#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '8')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
return (0);
}
