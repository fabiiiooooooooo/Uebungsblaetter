#include <stdio.h>

int main(void)
{

	int n, i;
	int a[4] = {8};
	n = a[0];

	for(i = 0; n > 0; ++i){
		a[i] = n % 2;
		n = n / 2;
	}

	for(i = 4; i >= 0; --i){
		printf("%i ", a[i]);
	}
	printf("\n");
}
