#include <stdio.h>

#define SCANF_USER(a) (scanf("%d", &(a)))

unsigned int fibonacci(void){
        int i;
        static int n = 5;
        static unsigned int fib = 1;
        int f1 = 0;
        int f2 = 1;

        for(i = 1; i <= n; i++){
                fib = f1 + f2;
                f2 = fib;
                f1 = f2;
        }
        return fib;
}

unsigned int brady_seq(void){
        int i;
        unsigned int b1, b2;
        static int n = 5;
        static unsigned int bsq = 1; //bsq -> BradySeQuence

        for(i = 1; i <= n; i++){
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
        for(i = 0; i < len; i++){
                ratio[i] = (double) seq[i+1] / seq[i];
        }
}
