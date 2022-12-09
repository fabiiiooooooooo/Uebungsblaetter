#include <stdio.h>

#define VALID_INPUT 1
#define INVALID_INPUT 0
#define MAX_STRING 10

int read_string(char in[], int max_len);
void flush();

int main()
{
	char input[MAX_STRING];
	printf("Zeichenfolge eingeben mit maximal %i Zeichen eingeben: \n", MAX_STRING);

	if(!read_string(input, MAX_STRING)){
		printf("Die Eingabe ist zu lang\n");
		return 1;
	}
	return 0;

}

void flush()
{
	while(getchar() != '\n'){

	}
}
int read_string(char in[], int max_len)
{

	int i = 0;
	char c = getchar();

	while(c != '\n' && i < max_len -1){
		in[i++] = c;
		c = getchar();
	}

	if(i == max_len - 1 && c != '\n'){
		flush();
		return INVALID_INPUT;
	}

	in[i] = '\0';
	return VALID_INPUT;
}
