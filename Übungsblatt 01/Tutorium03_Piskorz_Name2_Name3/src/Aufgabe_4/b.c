#include <stdio.h>

int array_to_upper(char v[], char w[], int size);


int main(void)
{	
	int i;
	char v[12] = {'I', 'n', 'n', 'f', 'o', 'r', 'm', 'a', 't', 'i', 'k', '1'};
	char w[12];
	int size = sizeof(v) / sizeof(v[0]);

	if(array_to_upper(v, w, size)) {
		for(i = 0; i < size; ++i) {
				printf("%c\t", w[i]);
			}


	}

	return 0;
}

int array_to_upper(char v[], char w[], int size)
{
	int i, k;

	for(i = 0; i < size; ++i)
	{
		if((v[i] > 64 && v[i] < 90) || (v[i] > 96 && v[i] < 122))
		{
			if(v[i] > 96 && v[i] < 122)
			{
				v[i] -= 32;
				w[i] = v[i];
			}
			else
			{
				w[i] = v[i];
			}
			k = 1;
		}
		else
		{
			k = 0;
		}
	}

	return k;
}	
