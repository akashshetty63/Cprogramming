#include<stdio.h>
int checkprime(int,int);
main()
{

	int num,num1;
	printf("enter the number to check whether a number is prime or not:");
	scanf("%d",&num);
	num1=num/2;
	
int prime=checkprime(num,num1);
if (prime==1)
   {
	printf("it is a prime number.\n");
   }	
   else
   {
   	printf("it is a composite number.\n");
   }
	
}



int checkprime(int n, int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
     if(n% i==0)
	   {
		  return 0;
	   }
       else
	   {
		i=i-1;
		checkprime(n,i);
       } 
    }
}
