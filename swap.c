#include<stdio.h>
main()
{
 int x,y;
 printf("enter the first number (x)=");
 scanf("%d",&x);
 printf("enter the second number (y)=");
 scanf("%d",&y);
 
 x=x+y;
 y=x-y;
 x=x-y;
 
 printf("After swapping:x=%d,y=%d",x,y);
 
}
