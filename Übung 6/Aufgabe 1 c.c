#include <stdio.h>



/*void switchfunktion (double n)
{
        n = 0;

        switch(n) {
                case 0 :
                        printf ("false\n");
                        break;
                case  1 || -1 :
                        printf("unclear\n");
                        break;
                default:
                        printf("true\n");
                        break;
        }
}
*/

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
