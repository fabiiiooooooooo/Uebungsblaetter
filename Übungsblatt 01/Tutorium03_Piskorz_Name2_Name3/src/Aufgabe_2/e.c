#include <stdio.h>

int main(void)
{
	double x = 3.9;
	int k = 3.9;

	printf("%.10f, %.10f\n", x, (double)k);
	k = k / 2;
	x = x / 2;
	printf("%.10f, %.10f", x, (double)k);

	return 0;
}
