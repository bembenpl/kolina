#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[])
{
	srand(time(NULL));
	//int losowa = (rand() % 200) + 1 ;
	int losowa = 2;
	printf("losowa %d\n", losowa );
	int dzielnik = losowa;
	for (dzielnik; dzielnik >=1; dzielnik--){
		int RESZTA;
		RESZTA = losowa % dzielnik;
		printf("losowa %d\n", losowa );
		printf(" dzielnik %d\n", dzielnik);
		printf(" RESZTA %d\n", RESZTA);
		
		if (dzielnik != 1 && dzielnik < losowa && RESZTA == 0) {
		 	printf("%d nie jest pierwsza, poniewarz dzieli sie przez %d\n ", losowa, dzielnik ); 
		 }
		 else if (RESZTA == 0 && dzielnik == losowa) {
		 	printf("%n jest pierwsza \n", losowa );
		 }
		 else if (RESZTA == 0 && dzielnik == 1) {
		 	printf("%n jest pierwsza \n", losowa );
		 }

	}
	
	return 0;
}
