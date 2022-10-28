#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
        int count, n;
        srand( (unsigned) time(NULL));
        n = 0 + rand() % (127-0+1);
        printf("Die Zufallszahl ist: %d\n", n);

        for(count=0; count<=n; count++)
        {
                if((count >= 'A' && n <= 'Z')||(count >= 'a' && n<= 'z'))
                {
                        printf("  %3d - [ASCII - %c] - JA\n", count, count);
                }else
                printf("  %3d - [ASCII - %c] - NEIN\n", count,count);
        }
        return 0;
}
