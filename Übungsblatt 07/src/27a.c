#include <stdio.h>

#define N_VAL 5

void unsafe_read(void)
{
	char v[] = "baum";
	char u[N_VAL];

	scanf("%s", u);
	printf("%s\n", v);
}

int main()
{
	unsafe_read();
	return 0;
}
