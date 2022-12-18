#include <stdio.h>
#include "strecken.h"

int main()
{	
	int i;
	char eingabe;
	int size = TEILSTRECKEN;
	double strecke[TEILSTRECKEN] = {1.5, 2.5, 5 , 100};


	// Ausgabe der Teilstrecken
	for(i = 0; i < TEILSTRECKEN; ++i){ 
		printf("%.2lf\n", strecke[i]);
	}	
		printf("\n");


	do{

		printf("Sind die Teilstrecken in Seemeilen oder Kilometer eingegeben?\n");
		printf("'S' für Seemeilen und 'K' für Kilometer: ");
		scanf("%c", &eingabe);
		new_line();

		if(eingabe != 'K' && eingabe != 'S'){
			printf("Bitte tätigen Sie eine gültige Eingabe\n\n");
			flush();
		}

	}while (eingabe != 'K' && eingabe != 'S');


	// Prograblauf bei Seemeilen 
	if(eingabe == 'S'){

		printf("Die Gesamtlänge der Teilstrecken beträgt: %.3lf Seemeilen\n", gesamtleange(strecke, size));
		printf("Die durchschnittliche Länge der Teilstrecken beträgt: %.3lf Seemeilen\n", durchschnitt_laenge(strecke, size));
			
		flush();
		new_line();
		printf("Für eine Ausgabe in km bitte 'K' eingeben: ");
		scanf("%c", &eingabe);

		if(eingabe == 'K'){
			new_line();
			printf("Die Gesamtlänge der Teilstrecken beträgt %.3lf Kilometer\n", seamile_to_km(gesamtleange(strecke, size)));
			printf("Die durchschnittliche Länge der Teilstrecken beträgt: %.3lf Kilometer\n", seamile_to_km(durchschnitt_laenge(strecke, size)));
		}

		flush();
		new_line();
		printf("Möchten Sie noch weitere Teilstrecken hinzufügen? ['Y' / 'N']: ");
		scanf("%c", &eingabe);

		if(eingabe == 'Y'){
			
			if(einlesen(strecke)){
				
				printf("Die Eingabe war erfolgreich.\n");
			
				new_line();
				// Ausgabe der Teilstrecken
				for(i = 0; i < TEILSTRECKEN; ++i){
					printf("%.2lf\n", strecke[i]);
				}

				new_line();

				printf("Die neue Gesamtlänge der Teilstrecken beträgt: %.3lf Seemeilen\n", gesamtleange(strecke, size));
				printf("Die neue durchschnittliche Länge der Teilstrecken beträgt: %.3lf Seemeilen\n", durchschnitt_laenge(strecke, size));
			}else{
				printf("Die Eingabe war nicht erfolgreich.\n");

			}

		}

	// Programmablauf bei Kilometern
	}else if(eingabe == 'K'){
		
		printf("Die Gesamtlänge der Teilstrecken beträgt: %.3lf Kilometer\n", gesamtleange(strecke, size));
		printf("Die durchschnittliche Länge der Teilstrecken beträgt: %.3lf Kilometer\n", durchschnitt_laenge(strecke, size));
			
		flush();
		new_line();
		printf("Für eine Ausgabe in Seemeilen bitte 'S' eingeben: ");
		scanf("%c", &eingabe);

		if(eingabe == 'S'){
			new_line();
			printf("Die Gesamtlänge der Teilstrecken beträgt %.3lf Seemeilen\n", km_to_seamile(gesamtleange(strecke, size)));
			printf("Die durchschnittliche Länge der Teilstrecken beträgt: %.3lf Seemeilen\n", km_to_seamile(durchschnitt_laenge(strecke, size)));
		}

		flush();
		new_line();
		printf("Möchten Sie noch weitere Teilstrecken hinzufügen? ['Y' / 'N']: ");
		scanf("%c", &eingabe);

		if(eingabe == 'Y'){
			
			if(einlesen(strecke)){
				
				printf("Die Eingabe war erfolgreich.\n");
			
				new_line();
				// Ausgabe der Teilstrecken
				for(i = 0; i < TEILSTRECKEN; ++i){
					printf("%.2lf\n", strecke[i]);
				}

				new_line();

				printf("Die neue Gesamtlänge der Teilstrecken beträgt: %.3lf Kilometer\n", gesamtleange(strecke, size));
				printf("Die neue durchschnittliche Länge der Teilstrecken beträgt: %.3lf Kilometer\n", durchschnitt_laenge(strecke, size));
			}else{
				printf("Die Eingabe war nicht erfolgreich.\n");

			}

		}

	}
	
	


	return 0;
}
