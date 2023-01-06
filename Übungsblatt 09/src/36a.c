/* Aufgabe 36a*/

#include <stdio.h>
#include <stdlib.h>

int *array_d_copy(int v[], int n);

int main(void)
{
	int i;
	int v[] = {1, 2, 3, 4, 5};
	int *d = array_d_copy(v, 5);


	for(i = 0; i < 5; ++i){
		printf("%i\n",d[i]);
	}
	return 0;
}

int *array_d_copy(int v[], int n)
{
	int i;
	int *copy = malloc(n * sizeof(int));

	if(copy != 0){
		return NULL;
	}

	for(i = 0; i < n; ++i){

		copy[i] = v[i];
	}
	return copy;
}
