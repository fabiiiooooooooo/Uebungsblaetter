/* Aufgabe 36b*/

#include <stdio.h>
#include <stdlib.h>


int *array_d_shuffle(int v[], int w[], int n);
int main(void)
{
	int i;
	int v[] = {1, 2, 3};
	int w[] = {4, 5, 6};
	int *d = array_d_shuffle(v, w, 3);


	for(i = 0; i < 6; ++i){
		printf("%i\n",d[i]);
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

