#include <stdio.h>

#define SCANF_USER(a) (scanf("%d", &(a)))

unsigned int fibonacci(void){

        static unsigned int fib = 1;
        static int f1 = 1;
        int help;
        help = fib;
        fib =help + f1;
        f1 = help;

        return fib;
}

unsigned int brady_seq(void){
        unsigned int b1, b2;
        static unsigned int bsq = 1; //bsq -> BradySeQuence
                int help;
                help = bsq;
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
