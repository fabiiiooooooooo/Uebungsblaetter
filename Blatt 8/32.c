#include "ZAHLENFOLGEN.h"

#define LEN 5

int main(){
        int i;
        unsigned int array_a[LEN];
        unsigned int array_b[LEN];
        unsigned int array_c[LEN];
        double big_array_a[LEN];
        double big_array_b[LEN];
        double big_array_c[LEN];
        double ratio[LEN];

        unsigned int b1 = 2308U;
        unsigned int b2 = 4261U;

        for (i = 0; i <= LEN; i++){
                array_a[i] = fibonacci();
                array_b[i] = brady_seq();
        }
        init_brady(b1, b2);
        for (i = 0; i <= LEN; i++){
                array_c[i] = brady_seq();
        }

        calc_sequence_ratio(array_a, ratio, LEN);
        calc_sequence_ratio(array_b, ratio, LEN);
        calc_sequence_ratio(array_c, ratio, LEN);
        return 0;
}
