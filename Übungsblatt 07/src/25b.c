#include <stdio.h>

#define ERFOLG 1
#define FEHLER 0

#define error_msg() printf("Die Eingabe war fehlerhaft.\n")
#define tag_im_jahr(d) printf("Der Eingegebe Tag ist der %i. Tag im Jahr.\n", d)

int read_date();
void flush();

int main(void)
{
	int a;
	do{
		a = read_date();
	}while(a == 0);

}

void flush()
{
	while(getchar() != '\n'){

	}
}

int read_date()
{
	int flag = -1;
	int status = 0;
	int check = 0;
	unsigned int d, m, y;

	printf("Geben Sie ein Datum in der Form dd.mm.yyyy ein: \n");
	status = scanf("%u.%u.%u", &d, &m, &y);

	check = (d < 0 || m < 0 || m > 12) ? FEHLER : ERFOLG;
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
