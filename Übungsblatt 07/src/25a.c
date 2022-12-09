#include <stdio.h>

#define LADENSCHLUSS 20
#define ERFOLG 1
#define FEHLER 0

#define vor_ladenschluss(h, m) printf("Der Ladenschluss ist in %i Stunde(n) und %i Minute(n).\n", h, m)
#define nach_ladenschluss(h, m) printf("Seit dem Ladenschluss sind %i Stunde(n) und %i Minute(n) vergangen.\n", h - LADENSCHLUSS, m)
#define err_msg() printf("Die Eingabe war fehlerhaft.\n")

void flush();
int read_time();

int main(void)
{
	int a;

	do{
		a = read_time();
	}while(a == 0);
	return 0;
}

void flush(){
	while(getchar() != '\n'){

	}
}
int read_time()
{
	unsigned int h, m;
	int status;
	int flag = -1;

	printf("Geben Sie die aktuelle Uhrzeit im 24-Stunden-Format (hh:mm) ein: \n");
	status = scanf("%u:%u", &h, &m);

	flag = (status != 2 || ((h > 24 || m >= 60) || (h < 0 || m < 0)) ? FEHLER : ERFOLG);
	flag == ERFOLG ? (h >= LADENSCHLUSS && m >= 0 ? nach_ladenschluss(h, m) : (m == 0 ? vor_ladenschluss(LADENSCHLUSS - h, m) : vor_ladenschluss(LADENSCHLUSS - h - 1, 60 - m))) : err_msg();


	flush();
	return flag;

}
