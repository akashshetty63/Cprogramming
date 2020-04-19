#include<stdio.h>
main()
{ 
  int sum=0;
  int data[3][3];
  int j=0,i=0;
  int *p=&data[i][j];
 
  printf("Enter the data elements:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
	{
	 scanf("%d",&data[i][j]);
    }
  }
  printf("The data elements are:\n");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
	{
	 printf("%d\n",*p);
	 *(p++);
	 if(i==j)
	 {
	  sum=sum+data[i][j];
     }
    }
  }
  printf("The sum of diagonal elements are:%d",sum);
}
