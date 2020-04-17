#include<stdio.h>

int sum(int);


main()
{
 int num;	
	
 printf("enter the number:");
 scanf("%d",&num)	;
 printf("Sum of digits of the number is:%d",sum(num));
		
}

int sum(int n)
{
	if(n==0)
	return 0;
	
	return((n%10)+sum(n/10));
}


