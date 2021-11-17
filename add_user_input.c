//Add 2 number using the values taken by user using SCANF()
#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter the first number: ");
	scanf("%d",&x);   //scanf("Format specifier",&variable_name);
	
	printf("\nEnter the second number: ");
	scanf("%d",&y);
	
	int sum = x+y;
	printf("Your sum = %d", sum);
	
	return 0;
}
