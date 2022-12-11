#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ALPHABET_LAENGE 26
#define MAX_STRING_LAENGE 100

void caesar_encode(int n, char str[]) {
        int i;
        for (i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = (str[i] - 'a' + n) % ALPHABET_LAENGE + 'a';
                } else if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = (str[i] - 'A' + n) % ALPHABET_LAENGE + 'A';
                }
        }
}


void caesar_decode(int n, char str[]) {
        int i;
        for (i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = (str[i] - 'a' - n + ALPHABET_LAENGE) % ALPHABET_LAENGE + 'a';
                } else if (str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = (str[i] - 'A' - n + ALPHABET_LAENGE) % ALPHABET_LAENGE + 'A';
                }
        }
}


int crack_caesar(char str[])
{
        int max_count;
        char max_letter;
        unsigned int i;
        int freq[ALPHABET_LAENGE] = {0};

        for (i = 0; i < strlen(str); i++)
        {
                if (isalpha(str[i]))
                {
                        char c = tolower(str[i]);

                        freq[c - 'a']++;
                }
        }

        max_count = 0;
        max_letter = 'e';
    for (i = 0; i < ALPHABET_LAENGE; i++)
    {
        if (freq[i] > max_count)
        {
            max_count = freq[i];
            max_letter = 'a' + i;
        }
    }

    return (max_letter - 'e') % ALPHABET_LAENGE;
}

int main(void)
{
        int n;
        int shift;
        char str[MAX_STRING_LAENGE];

        printf("Grad der Verschiebung: \n");
        scanf("%i", &n);

        if (n < 0 || n > 25){
                 printf("Fehler Grad der verschiebung muss zwischen 0 und 25 sein.\n");
                 exit(1);
        }

        printf("Zeichenkette ohne Leerzeichen eingeben: \n");
        scanf("%s", str);

        caesar_encode(n, str);
        printf("Codierte Zeichenkette: %s\n", str);

        shift = crack_caesar(str);
        printf("Der erratene Shift-Faktor ist: %d\n", shift);

        caesar_decode(n, str);
        printf("Decodierte Zeichenkette: %s\n", str);

  return 0;
}
