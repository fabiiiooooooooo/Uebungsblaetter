#include <stdio.h>

int sum2a(int a);

int main(void)
{
	int a;
	printf("Eingabe von a\n");
	scanf("%i", &a);
	printf("a: %i\tf(a): %i\n", a, sum2a(a));


	return 0;
}

int sum2a(int a)
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
