#include <stdio.h>
#include <stdlib.h>

int main (void)
{
        int a, b, c;
        a=rand();
        b=rand();
        c=rand();
        printf("a=%d, b=%d, c=%d\n", a, b, c);
        printf("%d\n" ,a*b*c);
        printf("%d\n" ,a/b+c);
        return 0;
}
