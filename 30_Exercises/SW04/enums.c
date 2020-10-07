#include <stdio.h>

typedef enum{
	einfraenkler = 1,
	zweifraenkler = 2,
	fuenfliber = 5
}Swisscoin;

typedef enum{
	nickle = 5,
	dime = 10,
	quarter = 25
}UScoin;



int main( int argc, char* argv[] )
{

	Swisscoin chcoin = fuenfliber;
	UScoin uscoin = nickle;
	printf("Swisscoin %d, UScoin %d\n", chcoin, uscoin);
	chcoin = uscoin;


	return 0;
}
