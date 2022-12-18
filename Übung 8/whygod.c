#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, result;
    char ans[5];
    static int ergebnis;

    while (1)
    {
        printf("Please enter two numbers separated by a '+' sign, or type 'exit' to quit: ");

        if (scanf("%d+%d", &a, &b) == 2)
        {
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            ergebnis = result;
        }
        else if (scanf("%4s+%d", ans, &b) == 2 && strcmp(ans, "exit") != 0)
        {
            if (strcmp(ans, "ans") == 0)
            {
                result = ergebnis + b;
                printf("%d + %d = %d\n", ergebnis, b, result);
                ergebnis = result;
            }
            else
            {
                printf("Invalid input. Please try again.\n");
            }
        }
        else if (strcmp(ans, "exit") == 0)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid input. Please try again.\n");
            while (getchar() != '\n');
        }
    }

    return 0;
}
/*Es müsste eine Switch-Case Funktion für Addition, Subtraktion, Multiplikation und Division angelegt werden, um zwischen den unterschiedlichen Rechenarten unterscheiden zu können.
Zudem muss die Ausgabe für diese Fälle angepasst werden. */
