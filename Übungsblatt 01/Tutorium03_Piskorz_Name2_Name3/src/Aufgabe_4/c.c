#include <stdio.h>

void manipulate_and_print(int v[], int size);

int main(void)
{
	int v[9] = {3, -3, 6, 13, 7, 8, 30, -10, 1028};
	int size = sizeof(v) / sizeof(v[0]);

	manipulate_and_print(v, size);

	return 0;
}

void manipulate_and_print(int v[], int size)
{
	int i;


	for(i = 0; i < size; ++i) {
		if(v[i] >= 0) {
			switch(v[i] % 3) {
				case 0: 
					printf("%i\n", v[i] / 2);
					break;

				case 1:
					printf("%i\n", ++v[i]);
					break;

				case 2: 
					printf("%i\n", -v[i]-1);
					break;

				default: 
					printf("fehler");
			}
		} else
			printf("\n");
	}
}
