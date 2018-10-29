#include <stdio.h>
#include <stdlib.h>


bool ponizejZeraBezwzglednego(int num, float temp)
{
	if(num = 1){ //num 1 = min wartosc w farenheitach//
		if (temp < -459.67)
			return 1;
		else 
			return 0;
	}
	else if (num = 2){ //num 2 = min wartosc w celsjuszach//
		if (temp < -273.15)
			return 1;
		else
			return 0;

	}
	else if (num = 3) // num 3 = min wartosc w kelwinach//
	{
		if (temp < 0.0)
			return 1;
		else
			return 0;
	}

}



float Farenheit_na_Celsjusz (float F){
 	if (ponizejZeraBezwzglednego(1, F) == false) 
		return (F - 32.0) * 5.0 / 9.0;
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 			

}


float Farenheit_na_Kelvin (float F){
	

 	if (ponizejZeraBezwzglednego(1, F) == false) 
		return (F + 459.67) * 5.0 / 9.0;
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 	}		

float Celsjusz_na_Farenheit (float C){
	
 	if (ponizejZeraBezwzglednego(2, C) == false) 
		return  C * 9.0/5.0 + 32.0;
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 	}		
	
float Celsjusz_na_Kelvin (float C){
	
 	if (ponizejZeraBezwzglednego(2, C) == false) 
		return C + 273.15;
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 	}		
 			
float Kelvin_na_Farenheit (float K){

 	if (ponizejZeraBezwzglednego(3, K) == false) 
		return (K * 9.0 / 5.0 - 459.67); 
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 	}		
 			
float Kelvin_na_Celsjusz (float K){
	
 	if (ponizejZeraBezwzglednego(3, K) == false) 
		return K - 273.15;
 	else
 		printf("Powtórz sobie lekcje fizyki z podstawówki");

 			exit(0);
 			
}

float wczytaj (void) {
	printf("podaj temperature \n");
	float a; 
	scanf("%f", &a );
	return a;
}

int main()
{
	do{


	float temperatura;
	int menu;

	printf("Wybierz opcje\n");
	printf("1. Przeliczanie Farenheit_na_Celsjusz\n");
	printf("2. Przeliczanie Farenheit_na_Kelvin\n");
	printf("3. Przeliczanie Celsjusz_na_Farenheit\n");
	printf("4. Przeliczanie Farenheit_na_Celsjusz\n");
	printf("5. Przeliczanie Farenheit_na_Celsjusz\n");
	printf("6. Przeliczanie Farenheit_na_Celsjusz\n");
	printf("7. Pexit\n");
	scanf("%d", &menu);

	if (menu == 1)
	{
		printf("Farenheit_na_Celsjusz");
		temperatura = wczytaj();
		printf( "%f deg C \n", Farenheit_na_Celsjusz(temperatura));

	}

	// uzupelnic dla reszty temp 
	else if (menu == 7)
		exit(0);
	}while (true);








	printf("press any \n");
	int keepOpen = 0;  // hack trzymajacy otwarte okno
	scanf("%d", &keepOpen);

	return 0;

}