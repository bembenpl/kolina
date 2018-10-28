#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[])
{
	srand(time(NULL));
	int i;
	for (i = 1 ; i<=200; i++ ){
		int losowa = rand()%200+1;
		printf("%d\n", losowa );
		
	}
	return 0;
}