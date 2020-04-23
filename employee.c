
#include <stdio.h>
#include <stdlib.h>
 
struct Employee 
  { int num;
    char name[30];
    char depname[30];
    int salary;
  };
typedef struct Employee s;
 
int main()
{
    int i,n;
 
     s employees[20];
 
    printf("Enter the number of Employees:");
    scanf("%d",&n);
    printf("\n");
    //Taking each employee detail as input
    
    for(i=0; i<n; i++){
 
        printf("Employee number %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //Department Name
        printf("Department Name: ");
        scanf("%s",employees[i].depname);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
    int option;
    //Displaying Employee details
    printf("For displaying the employee list\n");
    printf("Press 1 for Yes and 0 for No:");
    scanf("%d",&option);
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
        printf("Number \t: ");
        printf("%d \n",i+1);
        
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Department Name \t: ");
        printf("%s \n",employees[i].depname);
 
        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
