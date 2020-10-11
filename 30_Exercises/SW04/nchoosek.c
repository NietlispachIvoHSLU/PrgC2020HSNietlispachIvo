#include <stdio.h>
#include <stdlib.h>

long nchoosek( long n, long k);



int main( int argc, char* argv[] )
{
	long inputn = 0;
	long inputk = 0;
	long resultat1 = 0;
	long result = 0;
	
	printf("enter a number for n:");
	scanf("%ld", &inputn);
	printf("enter a number for k:");
	scanf("%ld", &inputk);
	

	inputn = Factorial(inputn);
	inputk = Factorial(inputk);
	resultat1 = Factorial(inputn-inputk);
	result = inputn/(inputk*(resultat1));
	
	printf("nchoosek is %ld\n", result);

	return 0;
}
