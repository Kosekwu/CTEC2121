#include <stdio.h>

int add (int x, int y){
	 return x + y;
}

int main() 
{
	int x;
	int y;
	printf( "Please input two numbers to be added: " );
	scanf( "%i", &x );
	scanf( "%i", &y );
	printf( "The product of your two numbers is %d\n", add( x, y ) );
		 return 0;
}

