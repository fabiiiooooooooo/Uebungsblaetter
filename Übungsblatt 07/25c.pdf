#include <stdio.h>
#include "time.h"

int main(void)
{
	int a;
	char auswahl;
	int status;

	do{
	printf("Geben Sie 't' für read_time, oder 'd' für read_date ein: ");
	auswahl = getchar();
	/*printf("auswahl = %c\n", auswahl);*/

	status = auswahl == 't' || auswahl == 'd' ? ERFOLG : err_msg();
	flush();
	}while(status != 1);

	if(auswahl == 't'){


		do{
			a = read_time();
		}while(a == 0);

	}else if(auswahl == 'd'){
		do{
			a = read_date();
		}while(a == 0);
	}

	return 0;


	

}
