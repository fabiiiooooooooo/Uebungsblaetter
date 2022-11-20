#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int b[8];
	char c;
	srand(time(NULL));
	c = rand() % 128;

	printf("c: %c\n", c);

	for(i = 0; i < 8; ++i) {
      		b[i] = !!((c << i) & 0x80);
 	}

 	printf("c in Binär: ");
 	for(i = 0; i < 8; ++i){
 		printf("%i ", b[i]);
 	}
  	printf("\n");

  	for(i = 0; i < 8; ++i){

  		if(b[i] && 1)
  		{
  			printf("Das Bit an Stelle %i ist gesetzt\n", i + 1);
  		}else{
  			printf("Das Bit an Stelle %i ist nicht gesetzt\n", i + 1);
  		}
  	}

	
		

	return 0;
}
