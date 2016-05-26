#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int yr;
	float n;
	printf("Enter Birth Year: \n");
	scanf("%d", &yr);
	
    n = 2016 - yr;
		
	printf("The approximate age based on age is: %0.0f\n", n);
	
	return 0;
}
