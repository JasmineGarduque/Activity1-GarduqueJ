#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int b, h;
	float a;
	printf("Enter Triangle's base: ");
	scanf("%d", &b);
	printf("Enter Triangle's height: ");
	scanf("%d", &h);	
	
	a=b*h/2;
	printf("The area of the triangle is: %.2f\n", a);
	
	return 0;
}
