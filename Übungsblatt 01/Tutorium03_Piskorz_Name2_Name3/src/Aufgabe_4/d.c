#include <stdio.h>

void copy_and_transform_digits(char v[], char w[], int size);

int main(void)
{
	int i;
	char v[12] = {'0', '1', '2', '3', '4', '5', 'A', 'B', 'C', 'd', 'E', '9'};
	char w[12];
	int size = sizeof(v) / sizeof(v[0]);

	printf("size: %i\n", size);

	copy_and_transform_digits(v, w, size);
	printf("Feld v: ");
	for(i = 0; i < size; ++i) {
		printf("%c\t", v[i]);
	}
	printf("\n");
	printf("Feld w: ");
	for(i = 0; i < size; ++i) {
		printf("%c\t", w[i]);
	}

	return 0;
}

void copy_and_transform_digits(char v[], char w[], int size)
{
	int i;

	for(i = 0; i < size; ++i) {
		if(v[i] > 47 && v[i] < 58) {
			w[i] = 138 - v[i];
		} else {
			w[i] = v[i];
		}
	}
	
}
