/*Aufgabe 34a*/

#include <stdio.h>


void increment_if_zero(int *x, int *y);
int main(void)
{
	int a;
	int b;
	int c;

	a = -1;
	b = 5;
	c = 0;

	printf("b vor increment: %i\n", b);
	increment_if_zero(&a, &b);
	printf("increment_if_zero(-1, 5): %i\n", a);
	printf("b nach increment: %i\n", b);

	printf("c vor increment: %i\n", c);
	increment_if_zero(&a, &c);
	printf("increment_if_zero(-1, 0): %i\n", c);
	printf("c nach increment: %i\n", c);



	return 0;
}

void increment_if_zero(int *x, int *y)
{
	if(*y == 0){
		++(*x);
	}
}
