#include <stdio.h>

int main( int argc, char* argv[] ) {
	
	int testValue = 2;
	int limitValue = 2;
	
	if (testValue >= limitValue ){
	printf ("%d is bigger or equal to %d", testValue, limitValue);
	}
	else{
	printf ("%d is less than %d", testValue, limitValue);
	}
	
	return 0;
}
