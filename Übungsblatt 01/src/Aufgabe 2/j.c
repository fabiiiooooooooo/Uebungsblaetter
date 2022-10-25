#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int n;
	char c;

	n = rand();
	c = n % 128;

	if(c > 47 && c < 58) {
		printf("1\n");
	}
	else if(c > 64 && c < 91) {
		printf("2\n");
	} else if(islower((int)c)) {
		printf("3\n");
	} else if(isxdigit((int)c)) {
		printf("4\n");
	}

	printf("%c\n", c);
	printf("%i\n", c);

	return 0;
}
