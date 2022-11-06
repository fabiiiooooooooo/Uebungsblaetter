#include <stdio.h>
#include <stdlib.h>

int compare_to_zero(int a);
int main(void)
{
	int a;
	scanf("%i", &a);
	printf("%i\n", compare_to_zero(a));
	return 0;
}

int compare_to_zero(int a)
{
	int b = 0;

	if(a == 0){
		return b;
	}else if(a <= 0){
		return --b;
	}else{
		return ++b;
	}
}
