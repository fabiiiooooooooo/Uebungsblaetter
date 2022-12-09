#include <stdio.h>

#define DIM 8
#define ERFOLG 1
#define INVALID_INPUT -1
#define BUFFER_ERROR 0

#define err_msg() printf("Die Eingabe war fehlerhaft \n")

void flush();
int flush_buff();
int read_binary(int b[]);

int main(void)
{	
	int binary[DIM];
	int a;

	do{
		a = read_binary(binary);
	}while(a != ERFOLG);

	return 0;
}

void flush()
{

	while(getchar() != '\n'){

	}
}

int flush_buff()
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF)
	{

	}

	return c != EOF;
}

int read_binary(int b[])
{
	int i, status;
	int c = '\0';

	printf("Bitte geben Sie eine Binärcosierung der Länge %i ein: \n", DIM);

	for(i = 0; i < DIM; ++i){
		status = scanf("%u", &b[i]);
	}

	if(status == EOF){
		return BUFFER_ERROR;
	}
	for(i = 0; i < DIM; ++i){

		if (status == 0  || (b[i] < 0 || b[i] > 1 )|| (c = getchar() != '\n')){
			if(c == EOF || !flush_buff()){
				err_msg();
				return BUFFER_ERROR;
			}
			err_msg();
			return INVALID_INPUT;
		}

	}

	return ERFOLG;
}
