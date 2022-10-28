#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b ,c;

	a = rand();
	b = rand();
	c = rand();

	printf("%i\n", (a + b) * c);
	printf("%i", c + a / b);

	return 0;
}
