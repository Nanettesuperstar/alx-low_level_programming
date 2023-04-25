 #include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        from 0 - 99, separated by a comma and space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int y;
	int x;

	for (y = 0; y <= 98; y++)
	{
		for (x = y + 1; x <= 99; x++)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');

			if (y == 98 && x == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
