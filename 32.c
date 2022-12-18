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
