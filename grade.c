#include<stdio.h>
main()
{
	int i;
	printf("Enter your subject marks:");
	scanf("%d",&i);
	if(i<=100 && i>=85)
	{
	  printf("GRADE A");
	}
	else if(i<=84 && i>=70)
	{
	  printf("GRADE B");		
	}
	else if(i<=55 && i>=69)
	{
	  printf("GRADE C");		
	}
	else if(i<=54 && i>=40)
	{
	  printf("GRADE D");		
	}
	else
	{
	  printf("GRADE F");		
	}
}
