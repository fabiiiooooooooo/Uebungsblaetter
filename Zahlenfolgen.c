#include <stdio.h>
#include "ZAHLENFOLGEN.h"

unsigned int fibonacci(void){
        static int n = 5;
        static unsigned int fib = 1;
        int i;
        int f1 = 0;
        int f2 = 1;

        for(int i = 1; i <= n; i++){
                fib = f1 + f2;
                f2 = fib;
                f1 = f2;
        }
        return fib;
}

unsigned int brady_seq(void){
        static int n = 5;
        static unsigned int bsq = 1; //bsq -> BradySeQuence
        int i;
        unsigned int b1, b2;

        for(int i = 1; i <= n; i++){
                bsq = b1 + b2;
                b2 = bsq;
                b1 = b2;
        }
        return bsq;
}

void init_brady(unsigned int b1, unsigned int b2){
        printf("Geben Sie die erste ganze Zahl ein:");
        SCANF_USER(b1);
        printf("\n");
        printf("Geben Sie die zweite ganze Zahl ein:");
        SCANF_USER(b2);
        printf("\n");
}

void calc_sequence_ratio(unsigned int seq[], double ratio[], int len){
        int i;
        for(int i = 0; i < len; i++){
                ratio[i] = (double) seq[i+1] / seq[i];
        }
/*      for(int i = 0; i < len; i++){
                printf("\n");
                printf("%lf"ratio[i]);
        }
*/
}

int main(){
        int i;
        int len = 5;


        unsigned int array_a[len];
        unsigned int array_b[len];
        unsigned int array_c[len];
        double big_array_a[len];
        double big_array_b[len];
        double big_array_c[len];
        double ratio[len];

        unsigned int b1 = 2308U;
        unsigned int b2 = 4261U;

        for (i = 0; i <= len; i++){
                array_a[i] = fibonacci();
                array_b[i] = brady_seq();
        }
        void init_brady();
        for (i = 0; i <= len; i++){
                array_c[i] = brady_seq();
        }

        calc_sequence_ratio(array_a, ratio, len);
        calc_sequence_ratio(array_b, ratio, len);
        calc_sequence_ratio(array_c, ratio, len);
        return 0;
}


























//
