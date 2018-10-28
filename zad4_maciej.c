#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
	{
		int i, zarodek;
		time_t tt;
		zarodek = time(&tt);
		srand(zarodek); 

		int losowa = rand()%200+1;
		int dzielna = losowa;
		int dzielnik;
		int reszta;
		for (dzielnik = 1; dzielnik <= dzielna; dzielnik++)	{
			reszta = dzielna%dzielnik;

				//printf("%d reszta\n",reszta );
				//printf("%d dzielna\n",dzielna );
				//printf("%d dzielnik\n",dzielnik );

				if (reszta == 0 && dzielnik != 1 && dzielnik != dzielna){
					printf("%d nie jest pierwsza", dzielna);
					break;
				}
				else if 
					(reszta == 0 && dzielnik == dzielna)
					printf("%d jest pierwsza", dzielna);

	
			}
				
		return 0;
	}