#include <stdio.h>
#include <stdlib.h>

enum{
	Menu = 1,
	numstat,
	cubic,
	factorial,
	Exit
};

//void numstat(int val1, val2);



int main( int argc, char* argv[] )

{

	int menuselected = Menu;
	int run = 1;
	
	while(run){
		printf("enter a number");
		scanf("%d", &menuselected);
	
	if(menuselected == Exit)
	{
		printf("Exit");
		break;
	}	
	
	switch (menuselected){
		case Menu:
			printf("Menu aufrufen");
			break;
		case numstat:
			//call function numstat;
			printf("numstat aufrufen");
			break;
		case cubic:
			printf("cubic aufrufen");
			break;
		case factorial:
			printf("factorial aufrufen");
			break;
		default:
			printf("invalid, try again");
			break;
	}
	}
	
	
	return 0;
}
