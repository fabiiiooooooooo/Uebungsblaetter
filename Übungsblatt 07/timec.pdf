
#include <stdio.h>
#include "time.h"

void flush()
{
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

int read_date()
{
	int flag = -1;
	int status = 0;
	int check = 0;
	unsigned int d, m, y;

	printf("Geben Sie ein gültiges Datum in der Form dd.mm.yyyy ein: \n");
	status = scanf("%u.%u.%u", &d, &m, &y);

	check = (d < 0 || m < 0 || m > 12 || d > 31) ? FEHLER : ERFOLG;
	flag = status == 3 && check == 1 ? ERFOLG : FEHLER;
	flag == ERFOLG ? ERFOLG : error_msg();
	
	if(flag == ERFOLG){

		switch(m){

		case 1: d <= 31 ?  tag_im_jahr(d) : err_msg();
			break;

		case 2: d <= 28 ? tag_im_jahr(d + 31) : err_msg();
			break;

		case 3: d <= 31 ? tag_im_jahr(d + 31 + 28) : err_msg();
			break;

		case 4: d <= 30 ? tag_im_jahr(d + 31 + 28 + 31) : err_msg();
			break;

		case 5: d <= 31 ? tag_im_jahr(d + 31 + 28 + 31 + 30) : err_msg();
			break;

		case 6: d <= 30 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31) : err_msg();
			break;

		case 7: d <= 31 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30) : err_msg();
			break;

		case 8: d <= 31 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30 + 31) : err_msg();
			break;

		case 9: d <= 30 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) : err_msg();
			break;

		case 10: d <= 31 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) : err_msg();
			break;

		case 11: d <= 30 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) : err_msg();
			break;

		case 12: d <= 31 ? tag_im_jahr(d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) : err_msg();
			break;
		
		default: err_msg();
		}
	}
	flush();


	return flag;


}

