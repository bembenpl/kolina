#include <stdio.h>
#include <stdlib.h>


int main()
{
	int number = 0;
	

	printf("Countdown value : ");
	scanf("%d", &number);

	for ( int i = number ; i >= 1; --i)
	{
		printf("%d\n", i);
	}
  
		return 0;
}