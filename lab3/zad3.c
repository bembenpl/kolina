#include <stdio.h>

float FnaC (float F)
{
 return (F - 32.0) * 5.0 / 9.0;
}

float FnaK (float F)
{
 return (F + 459.67) * 5.0 / 9.0;
}

float CnaF (float C)
{
 return C * 9.0/5.0 + 32.0;
}

float CnaK (float C )
{
 return  C - 273.15; //bład w zadaniu
}

float KnaF (float K)
{
 return K * 9.0 / 5.0 – 459.67;
}

float KnaC (float K)
{
 return  K + 273.15;
}

int main(int argc, char const *argv[])
{
	int PierwszaJednostka = 0;
	int DrugaJednostka = 0;
	
	float tempIn = 0.0;
	scanf("%f", &tempIn);
	printf("%f\n", FnaC(tempIn) );
	return 0;
}