#include <stdio.h>

int main(void)
{
        int i = 0;
        int n = 5;
        char v[5];

        v[0] = 1;
        v[1] = 2;
        v[2] = 3;
        v[3] = 4;
        v[4] = 5;
        v[5] = 6;

        while(i < n) {
                printf("%i\n", v[i]);
                ++i;
        }

        return 0;

}
