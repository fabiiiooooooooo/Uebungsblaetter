#ifndef ZAHLENFOLGEN_H_INCLUDED
#define ZAHLENFOLGEN_H_INCLUDED

#include <stdio.h>

#define SCANF_USER(a) (scanf("%d", &(a)))

unsigned int fibonacci(void);
unsigned int brady_seq(void);
void init_brady(unsigned int b1, unsigned int b2);
void calc_sequence_ratio(unsigned int seq[], double ratio[], int len);

#endif
