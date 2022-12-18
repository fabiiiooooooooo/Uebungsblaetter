#include <stdio.h>

void flush();
void add(void);


int main(void)
{



	add();
	return 0;
}

void flush()
{
	while(getchar() != '\n'){

	}
}
void add()
{
	int a, b;
	int status;
	a = 0;
	b = 0;

	printf("Geben Sie die Addition von zwei Zahlen ein: ");
	status = scanf("%i + %i", &a, &b);

	if(status != 2)
	{
		printf("Die EIngabe war fehlerhaft\n");
	}


/*	if(getchar() == '\n' || getchar() == '+'){
		printf("Die Eingabe war fehlerhaft\n");
		flush();
	}else{*/

		printf("%i\n", a + b);
	/*}*/



}
