#include <stdio.h>

#define N_VAL 5

void unsafe_read(void)
{
	char u[N_VAL];
	char v[] = "baum";

	scanf("%s", u);
	printf("%s\n", v);
}

int int main(int argc, char const *argv[])
{
	unsafe_read();
	return 0;
}
