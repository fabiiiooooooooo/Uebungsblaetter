/* Aufgabe 35b*/

#include <stdio.h>
#include <string.h>

const char *str_str(const char *cs, const char *ct);
int str_len(const char str[]);

int main(void)
{

	printf("1. %s\n", str_str("Schokolade", ""));
	printf("2. %s\n", str_str(" ", " "));
	printf("3. %s\n", str_str("", ""));
	printf("4. %s\n", str_str("Schokolade", "Info"));
	printf("5. %s\n", str_str("Schokolade", "lade"));


	return 0;
} 

const char *str_str(const char *cs, const char *ct)
{
	int i;
	int j;
	int flag;
	int lencs;
	int lenct;

	lencs = str_len(cs);
	lenct = str_len(ct);

	for(i = 0; i < lencs; ++i){
		if(cs[i] == ct[0]){
			flag = 0;

			for(j = 0; j < lenct; ++j){
				if(cs[i + j] != ct[j]){
					flag = 1; 
					break;
				}
			}
		}
		if(flag == 0){
			return &cs[i];
		}
	}
	return NULL;

}

int str_len(const char str[])
{
	int count;

	for(count = 0; str[count] != '\0'; ++count);

	return count;
}
