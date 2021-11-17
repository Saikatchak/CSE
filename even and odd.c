#include<stdio.h>

#define N 10

int main

{
	int a[N], i, even = 0, odd= 0;

   prnitf("Enter %d integer nnumbers\n", N);
   for(i=0; i<N; i++)
   scanf("%d", &a[i]);
   printf("\n\nEven number in the array are ...\n");
   for(i= 0; i<N; i++)
   {
	 
    if (a[i] %2 ==0)
    { 
     printf("%d/t", a[i]);
     even++;
	}
}
printf("\n\nOdd number in the array are....\n");
   for(i= 0; i<N; i++)
   {
	 
    if (a[i] %2 !=0)
    { 
     printf("%d/t", a[i]);
     odd++;
	}
}
	printf("\n\nTotal Even number: %d\n", even);
	printf("\nTotal odd numbers: %d\n",odd);
	printf("\n")
   return 0;
  
	
}
