#include <stdio.h>

int func(int a);

int main(void)
{
	int a, b;
	printf("Eingabe von oberer grenze\n");
	scanf("%i", &b);
	for(a = 0; a <= b; ++a){

		printf("a: %i\tfun(a): %i\n", a, func(a));
	}


	return 0;
}

int func(int a)
{
	int b = 0;
	int c = 0;
	int d = 2;
	c += d;

	while(a != 0){
		--a;
		b += c;
		c += d;
	}

	return b;

}
