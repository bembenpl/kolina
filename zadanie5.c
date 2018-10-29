#include <stdio.h>
#include <stdlib.h>



int nwd(int a, int b) {
	int r;
	while (b > 0){
		r = a%b;
		a=b;
		b=r;
	}

	return a;

}

 int main(int argc, char const *argv[])
{
    int a, b;
    printf("Obliczanie najwiekszego wspolnego dzielnika \n");
	printf("podaj pierwsza liczbe\n");
	scanf ("%d", &a);
	printf("podaj druga liczbe \n");
	scanf ("%d", &b);
	printf("NWD = %d\n", nwd(a,b));
	int wynik = nwd(a,b);
	printf("NWD wynbij = %d\n", wynik);

	
	return 0;
}