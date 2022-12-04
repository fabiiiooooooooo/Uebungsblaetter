#include <stdio.h>

int main(void)
{
        int i = 0;
        int summe = 0;
        int n = 3;
        char v[5];

        v[0] = 1;
        v[1] = 2;
        v[2] = 3;
        v[3] = 4;
        v[4] = 5;
        v[5] = 6;

        while(i < n)
        {
                summe += v[i];
                ++i;
        }

        printf("%i", summe);

        return 0;
}
