#include <stdio.h>
#include <stdlib.h>

int yy( int a, int b);

int main(int argc, char *argv[])
{
	yy(5000, 4);
	
	return 0;
}

int yy( int a, int b)
{
	printf("a:%d b:%d \n", a,b);
	int i = 0;
	while(a != b)
	{
		if(a > b)
		{
				a = a - b;
				printf("branch 1 a:%d b:%d \n", a, b);
		}else{
				b = b - a;
				printf("branch 2 a:%d b:%d \n", a, b);
		}
	}
	return a;
}
