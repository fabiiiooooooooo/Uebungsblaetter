/* Aufgabe 36c*/

#include <stdio.h>
#include <stdlib.h>


int *array_d_shuffle(int v[], int w[], int n);
int *array_d_copy(int v[], int n);
int main(void)
{
	int i;
	int array[] = {1, 3, 2, 5, 5};
	int *array_copy = array_d_copy(array, 5);
	int *array_shuffle = array_d_shuffle(array, array_copy, 4);

	if(array_copy == NULL){
		printf("Programmfehler!\n");
	}

	if(array_shuffle == NULL){
		printf("Programmfehler!\n");
	}

	for(i = 0; i < 8; ++i){
		printf("%i\n",array_shuffle[i]);
	}
	return 0;


}

int *array_d_shuffle(int v[], int w[], int n)
{
	int i;

	int *shuffled_v = malloc((2 * n) * sizeof(int));
	
	if(shuffled_v == NULL){
		return NULL;
	}

	for(i = 0; i < n; ++i){
		shuffled_v[i * 2] = v[i];
   		shuffled_v[i * 2 + 1] = w[i];
	}

	return shuffled_v;
	free(shuffled_v);


}

int *array_d_copy(int v[], int n)
{
	int i;
	int *copy = malloc(n * sizeof(int));

	if(copy == NULL){
		return NULL;
	}

	for(i = 0; i < n; ++i){

		copy[i] = v[i];
	}

	return copy;
	free(copy);
}

