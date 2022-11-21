#include <stdio.h>

void zwei_k_add(int a[], int b[], int result[], int len);
int main(void)
{	
	int i;
	int len = 4;
	int a[4] = {0, 0, 0, 1};
	int b[4] = {1, 1, 1, 1};
	int result[4];
	zwei_k_add(a, b, result, len);

	for(i = 0; i < len; ++i){
		printf("%i ", result[i]);
	}
	printf("\n");


	return 0;
}

void zwei_k_add(int a[], int b[], int result[], int len)
{
	int i;
	int carry = 0;

	for(i = len - 1; i >= 0; --i){
		result[i] = ((a[i] ^ b[i]) ^ carry);
		carry = ((a[i] & b[i]) | (a[i] & carry)) | (b[i] & carry);
	}
}
