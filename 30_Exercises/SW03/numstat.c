#include <stdio.h>
#include <stdlib.h>

//Mit Ken Müller gelöst
int main( int argc, char* argv[] )
{
		
	float value1 = 0, value2 = 0;
	
	//make sure we have 2 arguments
	if (argc != 3 )
	{
		printf("usage: numstat val1 val2 \n");
	}
	else
	{
		value1 = atof(argv[1]);
		value2 = atof(argv[2]);
		
		printf ("Value1 %.3f, Value2 %.3f\n" , value1, value2); 
	
			if (value1 < value2)
			{
			printf("Values in ascending Order: %.3f, %.3f\n", value1, value2);
			}
			else
			{
			printf("Values in ascending Order: %.3f, %.3f\n", value2, value1);
			}
			
		printf("summe: %.3f\n", value1 + value2);
		printf("Absolute difference: %.3f\n", value1 - value2);
		printf("Product: %.3f\n", value1 * value2);
		printf("Ratio: %.3f\n", value2 / value1);
		
	}
	return 0;
}
