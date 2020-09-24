#include <stdio.h>

int main( int argc, char* argv[] )
{
	int readValue = 0;
	
	Weiter: printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
	
	scanf ("%d", &readValue);
	
	int switchValue = readValue;
	
	switch (switchValue){
		case 0: 
			printf("0 as text is zero\n");
			goto Weiter;
			
		case 1: 
			printf("1 as text is one\n");
			goto Weiter;
			
		case 2: 
			printf("2 as text is two\n");
			goto Weiter;
		
		case 3: 
			printf("3 as text is three\n");
			goto Weiter;
		
		case 4: 
			printf("4 as text is four\n");
			goto Weiter;
		
		case 5: 
			printf("5 as text is five\n");
			goto Weiter;
		
		case 6: 
			printf("6 as text is six\n");
			goto Weiter;
		
		case 7: 
			printf("7 as text is seven\n");
			goto Weiter;
		
		case 8: 
			printf("8 as text is eight\n");
			goto Weiter;
		
		case 9: 
			printf("9 as text is nine\n");
			goto Weiter;
		
		case 10: 
			printf("Thank you, Good bye\n");
			break;
		
		default:
			printf("invalid, try again\n");
			goto Weiter;
		
	}
	
	return 0;
}
