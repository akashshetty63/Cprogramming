#include<stdio.h>
 #include<conio.h>
 main()
 {
 	//1.Declare the FILE pointer
 	FILE *fp;
    int i,j,n;
    char ch;
    char data[100];
    char str[100];
    
 	//2.OPEN-Read,Write,Append
    fp = fopen("new.txt","r");
    
 	//3.READ content from the file
 	 printf("Enter the number of contents you want:");
 	 scanf("%d",&n);
 	 
     for(i=0;i<=n;i++)
     {
     	ch=getc(fp);
     	data[i]=ch;
     	
        str[n-i]=data[i];
     }
     
	 printf("%s",str);
 	fclose(fp);
 	
 	fp = fopen("akash.txt","w");
	fprintf(fp,"%s",data);
	fclose(fp);
 }
