/* Aufgabe 34b*/

#include <stdio.h>

int multiples_of_x(int n, int x, int *lower, int *greater);

int main(void)
{	
	int a, b;
	if(multiples_of_x(20, 7,&a, &b)){
		printf("multiples_of_x(20, 7,&a, &b):\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}
	printf("\n");
	if(multiples_of_x(50, 10,&a, &b)){
		printf("multiples_of_x(50, 10,&a, &b)\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}
	printf("\n");
	if(multiples_of_x(2032, 123,&a, &b)){
		printf("multiples_of_x(2032, 123,&a, &b)\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}
	printf("\n");
	if(multiples_of_x(213, 1,&a, &b)){
		printf("multiples_of_x(213, 1,&a, &b)\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}
	printf("\n");
	if(multiples_of_x(2, 1,&a, &b)){
		printf("multiples_of_x(2, 1,&a, &b)\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}printf("\n");
	if(multiples_of_x(0, 0,&a, &b)){
		printf("multiples_of_x(0, 0,&a, &b)\n");
		printf("lower: %i\n", a);
		printf("greater: %i\n", b);
	}

	return 0;
}

int multiples_of_x(int n, int x, int *lower, int *greater)
{
	int i = 1;

	if(lower == NULL || greater == NULL){
		return 1;
	}

	do{
		*lower = (i * x);
		++i;

	}while((i * x) < n);

	i = n;
	do{
		*greater = (i * x);
		--i;
	}while((i * x) > n);

	return 1;
}
