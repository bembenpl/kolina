 // Napisz program, który wyświetli ekranie zadaną przez użytkownika liczbę liczb nieparzystych
 // Dla 10, wynikiem będzie: 1, 3 ,5 , 7 , 9


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int liczba = 0;
	int iloscNieparzystych;
	printf("podaj liczbe \n");
	scanf("%d", &liczba);
	if ((liczba % 2) == 0) {
		iloscNieparzystych = liczba / 2;
		extern int nieparzste[iloscNieparzystych];	
	}
	else {
		iloscNieparzystych = liczba / 2 + 1;
		int nieparzste[iloscNieparzystych];	
	}

	for (int n = 0;  2*n+1 < liczba; n++) {
		nieparzste[n] = 2*n+1;
	}





		return 0;
}
