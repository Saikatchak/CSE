// cube of a number using function
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number: ");
	scanf("%d", &a);
	
	int answer = CUBE(a);
	printf("\nCube of the given number is %d",answer);
	
	return 0;
}

int CUBE(int a)
{
	int CUBE = a*a*a;
	return CUBE;
}

