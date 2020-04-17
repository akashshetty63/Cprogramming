#include<stdio.h>
int lcm(int a,int b);
main()
{
	int num1,num2,LCM;
	
	printf("enter the two numbers:\n");
	scanf("%d\n",&num1);
	scanf("%d",&num2);
	
	if(num1>num2)
	{
     LCM=  lcm(num2,num1);
	}
	else
	{
	 LCM=  lcm(num1,num2);
	}
	printf("The LCM of the numbers are:%d" ,LCM);
}

int lcm(int a,int b)
{
	static int multiple=0;
	multiple+=b;
	if((multiple% a==0) && (multiple% b==0))
	{
		return multiple;
	}
	else
	{
		return lcm(a,b);
	}
}
