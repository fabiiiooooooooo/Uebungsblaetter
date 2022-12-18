#include "my_math.h"

unsigned long my_fak(unsigned long a)
{

	if(a <= 1){
		return 1;
	}else{
		return (a * my_fak(a - 1));
	}
}

unsigned long my_binomial(unsigned long n, unsigned long k)
{
	if(n >= 1 && k >= 0 && n >= k){
		return my_fak(n) / (my_fak(n - k) * my_fak(k));
	}else{
		return ERROR;
	}
}
