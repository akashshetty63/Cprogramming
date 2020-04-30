#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int list();
void deposit();
void withdraw();
void transfer();
void balanceEnquiry();
void last();

int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWith=0,TotalTr=0;
int Acc;
char a[50];

void main()
{ 

system("cls");
printf("Enter your name:");
gets(a);
printf("\nEnter your Account number:");
scanf("%d",&Acc);
  while(1)
  {
    system("cls");
    switch (list())
    {
     	case 1:deposit();
     	       TotalDeposit+=Amount;
     	       break;
     	       
        case 2:withdraw();
               if(Amo<=TotalAmount)
               {
			   TotalWith+=Amo;
		       } 
		       break;
		       
        case 3:transfer();
               if(Tr<=TotalAmount )
               {
               	TotalTr+=Tr;
			   }
               break;
               
        case 4:balanceEnquiry();
               break;
               
               
	    case 5:system("cls");
		       last();
	           getch();
		       exit(0);
	    default:printf("\nInvalid choice:\n"); 	
    }
    getch();
  }
	
}
int list()
{
	int ch;
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\t\t\t\t\t\t     WELCOME\n");
	printf("------------------------------------------------------------------------------------------------------------------------");

	printf("\t\t\t\t\t\t1)Deposit Amount:");
    printf("\n\t\t\t\t\t2)Withdraw Amount:");
	printf("\n\t\t\t\t\t3)Transfer Amount:");
	printf("\n\t\t\t\t\t4)Balance Enquiry");
	printf("\n\t\t\t\t\t5)Exit.\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("Enter your choice:");
	scanf("%d",&ch);
	return(ch);
}
void deposit()
{
  printf("Enter the amount to deposit:");
  scanf("%d",&Amount);
  TotalAmount+=Amount;
}
void withdraw()
{
 printf("\nEnter the amount to deposit:");
 scanf("%d",&Amo);
 if(Amo<=TotalAmount)
 {
 	TotalAmount-=Amount;
 }
 else
 {
 	printf("\nInsufficient Amount,withdraw not possible");
 }
}
void transfer()
{
	printf("\Enter the amount you want to transfer:");
	scanf("%d,&Tr");
	if(Tr<=TotalAmount )
	{
		TotalAmount-=Tr;
	}
	else
    {
 	printf("\nInsufficient Amount,transfer not possible");
    }
}
void balanceEnquiry()
{
	printf("\nTotal Amount:%d",TotalAmount);
	printf("\nTotal Deposited  Amount:%d",TotalDeposit);
	printf("\nTotal Withdrawn  Amount:%d",TotalWith);
	printf("\nTotal Transferred  Amount:%d",TotalTr);
	printf("\n");
}
void last()
{   
    printf("\n***********************************************************************************************************************");
    printf("\nYour Name:%s",a);
    printf("\nAccount number:%d",Acc);
    printf("\n");
	printf("\nTotal Amount:%d",TotalAmount);
	printf("\nTotal Deposited  Amount:%d",TotalDeposit);
	printf("\nTotal Withdrawn  Amount:%d",TotalWith);
	printf("\nTotal Transferred  Amount:%d",TotalTr);
	printf("\n***********************************************************************************************************************\n");
	printf("\n\t\t\t\t\t\tTHANK YOU");
}
