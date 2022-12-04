#include <stdio.h>


int string_indexof(char v[], char c){
    int i;
    for(i = 0; i<10; i++){
        if(c==v[i]){
            return i+1;
            break;
        }
    }
    return -1;
}

int main(){
    int  result;
    char v[10] = "abcdabcd";
    char c = 'd';

    result = string_indexof(v, c);
    if(result>0){
        printf("'%c' kommt im Text als Erstes an Stelle %d vor", c, result);
    }else{
        printf("-1\n");
    }
    return 0;
}
