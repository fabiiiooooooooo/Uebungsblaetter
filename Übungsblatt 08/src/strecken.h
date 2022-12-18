#ifndef STRECKEN_H_INCLUDED
#define STRECKEN_H_INCLUDED

#define ERROR 0
#define SUCCESS 1
#define TEILSTRECKEN 5

#define seamile_to_km(a) (a * 1.852)
#define km_to_seamile(a) (double)(a / 1.852)
#define new_line() printf("\n")

void flush();
double gesamtleange(double a[], int size);
double durchschnitt_laenge(double a[], int size);
int einlesen(double a[]);

#endif
