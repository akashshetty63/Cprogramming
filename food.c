#include<stdio.h>
main()
{   
    int i;
	printf("Enter the number from 1 to 5: ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1: printf("Food item-Pizza\nPrice-Rs 239");
		break;
		case 2: printf("Food item-Pizza\nPrice-Rs 239");
		break;
		case 3: printf("Food item-Pizza\nPrice-Rs 239");
		break;
		case 4: printf("Food item-Pizza\nPrice-Rs 239");
		break;
		case 5: printf("Food item-Pizza\nPrice-Rs 239");
		break;	
		default:printf("Invalid choice");		
	}
}
