#include <stdio.h>
#include <math.h>

double fk_decodieren(int festkomma[], int n, int k);
int main(void)
{
	int n, k;
	int festkomma[4] = {0, 1, 1, 1};
	n = 4;
	k = 4;

	printf("Der decodierte Wert ist: %lf\n", fk_decodieren(festkomma, n, k)); 

	return 0;
}

double fk_decodieren(int festkomma[], int n, int k)
{
	double result; 
	int i;
	result = 0;

	for(i = 0; i < n; i++){
		result *= 2;
		result += festkomma[i];
	}	

	return result / pow(2, k);

}
