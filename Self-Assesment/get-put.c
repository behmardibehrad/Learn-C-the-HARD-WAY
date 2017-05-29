

#include<stdio.h>


int main(int args, char* argv[])
{
int c = 0;

c = getchar();

while(c!=EOF)
{
	putchar(c);
	printf("\n");
	c = getchar();

printf("Value of EOF:\t% c ",EOF); 
}




return 0;
}



