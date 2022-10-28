#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
        srand ((unsigned)time(NULL));

        int i;
        int k;
        int r;
        r = rand() % (6 - 2 + 1) + 2; /* Zufallszahl zwischen 2 und 5 */
        for (i = 0; i < r; i++) { /* führt die Schleife [r] oft durch */
                for (k = i; k >= 0; k--) { /* Fängt an mit [00] und macht [00] mit jeder weiteren Zeile der [i]-Schleife 1x mehr */
                        printf("00");
                        }
                printf("\n");
        }
        return 0;
}
