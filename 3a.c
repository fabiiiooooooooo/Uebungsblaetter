#include <stdio.h>

int main(void)
{
        int n;

        for(n=1; n<=100; n++)
        {
                printf("   x=%6d       x^2=%8d\n", n, n*n);
        }
        return 0;
}
