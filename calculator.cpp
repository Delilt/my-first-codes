#include<stdio.h>



int main()


{
	
int  First_Number;
int  Second_Number;
int  Choice;
int  Age;

char Name,SurName;




printf("\nWelcome To Delil Temel's Calculater.\n\nBefore The Process Please Enter Your Informations:");

	
	printf("\n\n\nPlease Enter Your Name:");
	scanf("%s",&Name);
	printf("\nPlease Enter Your SurName:");
	scanf("%s",&SurName);
	printf("\nPlease Enter Your Age:");
	scanf("%d",&Age);
	printf("\nfirst number:");
	scanf("%d",&First_Number);
	printf("\nSecond Number:");
	scanf("%d",&Second_Number);
	
	
	printf("\nPlease Make a Choice:\n[1]-Addition\n[2]-Extraction\n[3]-Divition\n[4]-Multiplication");
	
	scanf("%d",&Choice);

 


switch(Choice)
{
	
	
	case 1:printf("Number 1 Selected.\nThe Result Is Equals To:%d",(First_Number)+(Second_Number));break;
		
	    case 2:printf("Number 2 Selected.\nThe Result Is Equals To:%d",(First_Number)-(Second_Number));break;
	
		
	case 3:printf("Number 3 Selected.\nThe Result Is Equals To:%d",(First_Number)/(Second_Number));break;
	
	
	    case 4:printf("Number 4 Selected.\nThe Result Is Equals To:%d",(First_Number)*(Second_Number));break;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	








		
		
		
		
		
		
		
		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
