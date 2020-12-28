#include <stdio.h>

int addBy11( int inNbr )
{
	int result = inNbr + 11;
	return result;
}
void myPrintNbr( int addedNbr )
{
	printf( "%i", addedNbr );
}


int main()
{
	int inputNbr;
	printf("add a number by 11: ");
	scanf_s("%d", &inputNbr); // adding \n in scanf causes pausing twice around scanf error
	
	myPrintNbr( addBy11( inputNbr ) );
	
	return 0;
}
