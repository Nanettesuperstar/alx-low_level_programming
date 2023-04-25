 #include <stdio.h>
/**
  *main - Prints all possible different combinations of three digits.
  *
  *Return: Always 0.
  */
int main(void)
{
	int d;
	int n;
	int m;

	for (d = 0; d < 8; d++)
	{
		for (n = d + 1; n < 9; n++)
		{
			for (m = n + 1; m < 10; m++)
			{
				putchar((d % 10) + '0');
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');

				if (d == 7 && n == 8 && m == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
