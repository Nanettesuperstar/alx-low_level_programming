#include <stdlib.h>
#include <time.h>
/* main - Entry point */

/* betty coding style /** */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if (n > 0) - positive
	 * if (n = 0) - 0
	 * if (n < 0) - negative */
	return (0);
}
