#include <stdio.h>

int main()
{

	int dev = 7;
	int currentNum = 1;

	while ( currentNum <= 100 )
	{
		if ( currentNum % dev == 0 )
		{
			printf("%d\n", currentNum);
			currentNum++;
		}
		else
		{
			currentNum++;
		}
	}

printf("Printed the numbers from 1-100 which divide evenly into dev\n");

}
