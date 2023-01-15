#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITSIZE 50

char *read_input(){
    int size = INITSIZE;
    int length = 0;
    char user_in;
    char *input;
    input = (char*) malloc ( INITSIZE * sizeof (char) );
    if (input == NULL){
        printf("Fehler bei Speicherreservierung\n");
    }
    /*printf("Geben Sie Zeichenkette ein:\n");*/
    while ( (user_in = getchar()) != '\n' && user_in != EOF) {
        input[length] = user_in;
        if (length == INITSIZE){
            size = size * 2;
            input = (char*) realloc (input, size * sizeof (char) );
        }
        length++;
    }
    input[length] = '\0';
    return input;
    /*free (input);*/
}

int string_count_substring(const char *src, const char *search){ /* gibt strstr */
    int count = 0;
    const char *move = src;

    while(search[0] != '\0' && search[0] != EOF){           /* search nicht leer */
        if(strcmp(src, search) <= 0){                       /* search kürzer als src */
            while(( move = strstr( move, search)) != NULL){
                ++count;
                move += strlen(search);
            }
        }
        else
        printf("Fehler bei den Zeichenketten\n");
    }
return count;
}

char *string_replace(const char *src, const char *search, const char *replace){
    int src_len = strlen(src);
    int search_len = strlen(search);
    int replace_len = strlen(replace);
    int str_diff = search_len - replace_len; /* negativ-kürzer, positiv-länger */
    int result_len = src_len + (string_count_substring(src, search) * str_diff);
    char *result = (char *) malloc (result_len + 1);

    const char *p_src = src;
    char *p_result = result;

    while(*p_src != '\0'){
        if(strncmp(p_src, search, search_len) == 0){
            strncpy(p_result, replace, replace_len);
            p_result += replace_len;
            p_src += search_len;
        }else{
            *p_result++ = *p_src++;
        }
    }
    *(result + result_len -1) = '\0';
    return result;
}

int main(void){
    char *str_src;
    char *str_search;
    char *str_replace;
    char *result;
    printf("Eingabe der zu durchsuchenden Zeichenkette\n");
    str_src = read_input();
    printf("Eingabe der zu ersetzenden Zeichenkette\n");
    str_search = read_input();
    printf("Eingabe der ersetzenden Zeichenkette\n");
    str_replace = read_input();

    printf("Lesen erfolgreich\n");

    result = string_replace(str_src, str_search, str_replace);
    if(result != NULL)
    printf("%s\n", result);
    else
    printf("Irgendwo Fehler\n");

    free(str_src);
    free(str_search);
    free(str_replace);
    return 0;
}
