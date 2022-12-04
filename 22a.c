#include <stdio.h>

#define N 10
char *string_copy(char v[], char w[]){

    int i;
    for(i = 0; i < N; i++){
        w[i] = v[i];
    }
    return &w[10];
}


int main(){

    int i;
    char v[10]="Hallo";
    char w[10]="          ";
    string_copy(v , w );

    printf("v: ");
    for(i = 0; i < N; i++){
        printf("%c", v[i]);
    }
    printf("\nw: ");
    for(i = 0; i < N; i++){
        printf("%c", w[i]);
    }
    return 0;
}
