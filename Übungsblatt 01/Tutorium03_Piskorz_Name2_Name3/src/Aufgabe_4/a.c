#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum(int w[], int size);

int main(void)
{	
	int i;
	int size = 30;
	int w[50];
	srand(time(NULL));

	for(i = 0; i < 50; ++i)
	{
		w[i] = rand();
	}
	
	printf("%i\n",sum(w, size));
}

int sum(int w[], int size)
{
	int i;
	int k = 0;

	for(i = 0; i < size; ++i) {
		k += w[i];
	}

	return k;
}
