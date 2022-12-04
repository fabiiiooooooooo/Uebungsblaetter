#include <stdio.h>

void f(void)
{
        int x;
        int y;

        x = 5;
        y = x + 3;
}

void  dfdx(int x, int y)
{
        x = x+2;
}

void function(int x)
{
        int i = 1;
        int n = 0;

        while (1) {
                x -= f(x) / dfdx(x);
                if (i == n) {
                                break;
                }
                ++i;
        }

        for(i = 1; i != n; ++i){
                x -= f(x) / dfdx(x);
        }
}

int main(void)
{
        return 0;
}
