#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	int n = INT_MIN;

	n -= n;
	printf("%i\n", n);
	
	return 0;
}
