#include <stdio.h>

int main(void)
{
        double x;
        int k;
        x = 3.9;
        k = 3.9;
        printf("%.10f %i", x, k);
        x = x / 2;
        k = k / 2;
        printf("\n%.10f %i", x, k);
        return 0;
}
