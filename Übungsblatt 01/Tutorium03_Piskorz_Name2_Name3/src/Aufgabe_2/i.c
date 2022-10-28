#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int n;
	double x;

	n = rand();
	n = - n;
	x = (double)((n) / RAND_MAX);

	printf("%i\n%f\n", n, x);

	return 0;

}
