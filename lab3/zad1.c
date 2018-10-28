#include <stdio.h>

float FnaC (float F)
{
 return (F - 32.0) * 5.0 / 9.0;
}

int main(int argc, char const *argv[])
{
	float tempIn = 0.0;
	scanf("%f", &tempIn);
	printf("%f\n", FnaC(tempIn) );
	return 0;
}