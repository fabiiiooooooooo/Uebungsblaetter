#include "ZAHLENFOLGEN.h"

int main(){
        int i;
        int len = 5;

        unsigned int array_a[len];
        unsigned int array_b[len];
        unsigned int array_c[len];
        double big_array_a[len];
        double big_array_b[len];
        double big_array_c[len];

        unsigned int b1 = 2308U;
        unsigned int b2 = 4261U;

        for (i = 0; i <= len; i++){
                array_a[i] = fibonacci();
                array_b[i] = brady_seq();
        }

        printf("\n");
        for (i = 0; i <= len; i++){
                printf("%d", array_a[i]);                       //Test-Ausgabe Fibo
        }
        printf("\n");
        for (i = 0; i <= len; i++){
                printf("%d", array_b[i]);                       //Test-Ausgabe Brady
        }

        void init_brady();                                      //Usereingabe Brady Array C
        for (i = 0; i <= len; i++){
                array_c[i] = brady_seq();
        }

        calc_sequence_ratio(array_a, big_array_a, len);         //Verhältnisse
        calc_sequence_ratio(array_b, big_array_b, len);
        calc_sequence_ratio(array_c, big_array_c, len);

        printf("\n");
        for (i = 0; i <= len; i++){                             //Test-Ausgabe User-Brady
                printf("%d", array_c[i]);
        }
        printf("\n");
        for (i = 0; i <= len; i++){
                printf("%d", big_array_a[i]);                   //Test-Ausgabe Verhältnis 1
        }
        printf("\n");
        for (i = 0; i <= len; i++){
                printf("%d", big_array_b[i]);                   //Test-Ausgabe Verhältnis 2
        }
        printf("\n");
        for (i = 0; i <= len; i++){
                printf("%d", big_array_c[i]);                   //Test-Ausgabe Verhältnis 3
        }
        printf("\n");




        return 0;
}
