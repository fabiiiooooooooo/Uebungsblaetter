#include <stdio.h>

int mul_plus(int a);

int main(void)
{	
	int a, k;
	
	for(k = 0; k <= 10; ++k){
		a = k;
		printf("%i\t%i\n", a, mul_plus(a));
	}

	return 0;
}

int mul_plus(int a) /*a entspricht S1, i entspricht S2, k entspricht S3, d enstspricht D1*/
{
	int i, k, d;
	d = 2;
	i = 0;
	k = 0;

	k += d;
	
	while(a != 0){
		--a;
		i += k;
		k += d;
	}
	return i;
}
