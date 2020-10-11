#include <stdio.h>

typedef enum {
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	PRINTBINARY,
	EXIT = 99
} MenuItem;


// function declarations
MenuItem PrintMainMenu( void );
long int ComputeCubic( long int x );


int main( int argc, char* argv[] )
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1;
	long int input = 0;
	long inputf = 0;
	long inputn = 0;
	long inputk = 0;
	long number = 0;
		
	while(run)
	{
		switch(menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
	
			case NUMSTAT:
				// get user input:
				
				printf("executing NumStat\n");
				menuSelected = MAIN_MENU;
				break;

			case CUBIC:
				printf("Enter a 'long int' number: ");
				scanf("%ld", &input);
				printf("%ld cubed is %ld\n\n", input, ComputeCubic(input));
				menuSelected = MAIN_MENU;
				break;
			
			case FACTORIAL:
				printf("enter a number:");
				scanf("%ld", &inputf);
				printf("%ld factorial is : %d\n\n",inputf,  Factorial(inputf));
				menuSelected = MAIN_MENU;
				break;
			
			case NCHOOSEK:
				printf("enter a number for n:");
				scanf("%ld", &inputn);
				printf("enter a number for k:");
				scanf("%ld", &inputk);
				//printf("nchoosek %ld:", nchoosek(inputn, inputk));
				menuSelected = MAIN_MENU;
				
			case PRINTBINARY:
				printf("enter a number:");
				scanf("%ld", &number);
				//printf("%ld in binary form is: %ld", number, printBinary(number);
				menuSelected = MAIN_MENU;
				break;

			case EXIT:	
				run = 0;
				break;

			default:		
				printf("invalid menu selection\n");
				break;
		}
	}

 	return 0;
}


// function implementations:
MenuItem PrintMainMenu( void )
{
	MenuItem selection = MAIN_MENU;
	printf("***********************************\n");
	printf("Main Menu\n");
	printf("***********************************\n\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - NchooseK\n", NCHOOSEK);
	printf("%d - PrintBinary\n", PRINTBINARY);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;
}	


long int ComputeCubic( long int x ){
	return x*x*x;
}

long Factorial(long n)
{
	long int result = 0;
	result = n*Factorial(n-1);
	return result;
}
