#include <stdio.h>
#include <stdlib.h>


int main( int argc, char* argv[2] )
{
		
	int value1 = 0, value2 = 0, minValue = 0, maxValue = 0;
	
	//make sure we have 2 arguments
	if (argc != 3 )
	{
		printf("usage: Zu wenig Argumente \n");
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		
		printf ("Value1 %d, Value2 %d\n" , value1, value2); 
	
		minValue = value1;
		if ( minValue > value2 )
			minValue = value2;
			
		maxValue = value1;
		if ( maxValue < value2 )
			maxValue = value2;
		
		printf("ascending order: minValue: %d\n, maxValue %d\n", minValue, maxValue);
		
		printf("summe: %d\n", value1 + value2);
		printf("Absolute difference: %d\n", maxValue - minValue);
		printf("Product: %d\n", value1*value2);
		printf("Ratio: %d\n", value2/value1);
		
	}
	return 0;
}
