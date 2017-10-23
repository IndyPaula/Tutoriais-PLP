#include <stdio.h>
#include <stdlib.h>

/*
* Mostra o tamanho em bytes de data tipo básico 
*/
int main(int argc,char** argv)
{
	//Default Variables
	printf("Size of int : %lu Bytes\n" , sizeof( int ) );
	printf("Size of char : %lu Bytes\n", sizeof( char ) );
	printf("Size of float : %lu Bytes\n" , sizeof(float) );
	printf("Size of double : %lu Bytes\n" , sizeof( double ) );

	//Short variables
	printf("Size of short int : %lu Bytes\n" , sizeof( short int ) );
	
	//Long variables
	printf("Size of long int : %lu Bytes \n" , sizeof(long int) );
	printf("Size of long double : %lu Bytes \n" , sizeof(long double) );

	return 0;
}
