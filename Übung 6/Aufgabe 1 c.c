#include <stdio.h>

int main (void)
{
        int n;
        n = 2;

        switch(n) {
                case 0 :
                        printf ("false\n");
                        break;
                case 1 || -1 :
                        printf("unclear\n");
                        break;
                default:
                        printf("true\n");
                        break;
                }
        return 0;
}
