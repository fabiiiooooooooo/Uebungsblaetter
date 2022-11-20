#include <stdio.h>

void zwei_k_add(int a[], int b[], int result[], int len);
int main(void)
{	
	int len = 4;
	int a[4] = {0, 0, 1, 0};
	int b[4] = {0, 0, 0, 1};
	int result[4];
	zwei_k_add(a, b, result, len);


	return 0;
}

void zwei_k_add(int a[], int b[], int result[], int len)
{
	int i;
	/*int ueberlauf[4];*/
	int ueberlauf = 0;

	printf("a in binary: ");
	for(i = 0; i < len; ++i){
		printf("%i ", a[i]);
	}

	printf("\nb in binary: ");
	for(i = 0; i < len; ++i){
		printf("%i ", b[i]);
	}

/*	for(i = 0; i < len; ++i){
		ueberlauf[i] = 0;
	}*/

	for(i = len; i > 0; --i){
		/*result[i] = a[i] + b[i] + ueberlauf;*/

		if(a[i] + b[i] + ueberlauf > 1){
			ueberlauf = 1;
			
		}else{
			ueberlauf = 0;
		}

		result[i] = a[i] + b[i] + ueberlauf;
			

	}
	printf("\n");
	for(i = len; i > 0; --i){
		printf("%i ", result[i]);
	}
	printf("\n");
}
