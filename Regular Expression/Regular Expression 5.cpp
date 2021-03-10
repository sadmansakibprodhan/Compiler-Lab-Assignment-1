#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	 printf("\t Devloped By sadman sakib prodhan\n");
	 char ex[20];
     printf("Enter Your expression: ");
     scanf("%s", ex);

	 int temp = 0;
	 if( ex[0] != 'n') 
	 { 
		 printf("\t Not Accept\n");
	 }

	 if (ex[1]>= '0' && ex[1]<= '9')
	 {
	    temp = 1;

		 //printf("\t Not Accept\n");
	 }
	 if( temp == 1){
		

		 printf("\t Not Accept\n");
	 }
	 else
	 {
		 printf("\t  Accept \n");

	 }

	 return 0;
}
