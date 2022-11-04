#include <stdio.h>

int mod(int a, int b);

int main(void)
{
	int a, b;

	printf("Eingabe für a: ");
	scanf("%i", &a);
	printf("\nEingabe für b: ");
	scanf("%i", &b);

	printf("Ergebnis: %i\n", sum(a, b));

	return 0;
}

int mod(int a, int b)
{
	int c = 0;
	c = a - b;

	while(c >= 0){
		a -= b;
		c = 0;
		c = a - b; 
	}
	return a;
}
