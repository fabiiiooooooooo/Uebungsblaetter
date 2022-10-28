#include <stdio.h>
#include <math.h>

int main(void)
{
	double x = 4.5 * 10 * exp(2.0);

	printf("%f\n", x);
	printf("%e", x);

	return 0;
}
