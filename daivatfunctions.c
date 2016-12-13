#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"daivat.h"

void project (void){
	
	printf("\nNow that you have decided to try out my project, you have following options:\n\n1-DATA-TYPE VALIDATION\n");
	printf("2-DATA-RANGE VALIDATION\n3-DATA-FORMAT VALIDATION\n4-DATA-SIZE or DATA-LENGTH VALIDATION\n");
	printf("5-CONDITIONAL VALIDATION\n6-DIVISIBLE PROBLEM\n\n");
	printf("You can now choose any of the options.To choose just type the option alphabet down there.\n");
	
	int select;	
	scanf("%d",&select);

		switch (select){

			case 1:{
					typecheck();
					break;					/************************************************/
			}							/*	PRESS::					*/
			case 2:{						/*		1-TYPE CHECK			*/
					rangecheck();				/*		2-RANGE CHECK			*/ 
					break;					/*		3-FORMAT CHECK			*/
			}							/*		4-LENGTH CHECK			*/
			case 3:{						/*		5-CONDITIONAL VALIDATION	*/
					formatcheck();				/*              6-DIVISION PROBLEM              */
					break;					/*                                              */
			}							/************************************************/
			case 4:{
					lengthcheck();
					break;
			}
			case 5:{
					conditional();
					break;
			}
			case 6:{
                                        divisonproblem();
                                        break;
                        }

			default:{
					printf("\n\nPlease enter a valid input.\n");
					break;
			}
		}
	return;
}

void typecheck   (void){

	int select2,e=0,count,i,c,d,z;
	char p[100];
	printf("\n1-INTEGER\n2-CHARACTERS\n ");
	printf("input your choice\n");
	scanf("%d",&select2);
	switch(select2){
	
		case 1:
		{
				printf("enter any number\n");
			scanf("%s",p);
			count=strlen(p);
			for(i=0;i<count;i++)
			{
				int c=p[i];
				int d=c-48;
				if(d>=0 && d<=9)
				e=e+1;
		    }
				if(e==count)
				printf(" valid input\n");
				else printf("wrong input\n\n");
	    }
				break;
			case 2:
			{
					int count,i,m,s,l,e=0;
				printf("enter  your name\n\n");
				scanf("%s",p);
				count= strlen(p);
				for(i=0;i<count;i++)
				{
					int c=p[i];
					for(m=97;m<=122;m++)
				   {
					if(c==m)
					e=e+1;
				   }
				}
				for(l=65;l<=90;l++)
				{
					if(s==l)
					e=e+1;
				}
				if(e==count)
				printf("you enter a valid input\n");
				else printf("wrong input... you should enter only alphabets\n");
		    }
				break;				
			
	}

}
void rangecheck  (void){

	float low,high;
	printf("\n\nhere we will select the range of integers and check wheather the input lies in the range or not, if not it'll give the error\n");
	printf("\ninput the upper value of the range:");
	scanf("%f",&high);
	printf("\ninput the lower value of the range:");
	scanf("%f",&low);

	if(high<low)
		printf("\nHow can the lower value of range be greater than upper value\n\n");
	else{

	float input;
	printf("\n\nYour input:");
	scanf("%f",&input);
	
	if(input>high){
		printf("\n\ninvalid input....your input has crossed the maximum value of the range\n\n");
	}
	if(input<low){
		printf("\n\ninvalid input....your input has'n even crossed the minimum value of the range\n\n");
	}
	if(input<=high && input>=low){
		printf("\n\nvalid input\nInput processed is %f\n\n",input);
	}}
	return;

}
void formatcheck (void){

	int date,month,year;

	printf("\ninput the date in the format dd/mm/yyyy:");
	scanf("%d/%d/%d",&date,&month,&year);
	
	if(year%4==0){
		if(month>0 && month<=12){
			if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
				if(date<=31 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
			else if(month==2){
				if(date<=29 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
			else{
				if(date<=30 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
		}
		else{
			printf("\n\nyour month is invalid.\n");
		}
	}
	if(year%4!=0){
		if(month>0 && month<=12){
			if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
				if(date<=31 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
			else if(month==2){
				if(date<=28 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
			else{
				if(date<=30 && date>0){
					printf("\n\nyour date %d/%d/%d is valid.\n",date,month,year);
				}
				else{
					printf("\n\nyour date is invalid.\n");
				}
			}
		}
		else{
			printf("\n\nyour month is invalid.\n");
		}
	}


}
void lengthcheck (void){

	char string[100];
	int i,length;
	printf("\n\nhere we are going to check wheather the input satisfies the length conditions or not.\n");
	printf("Let us say we have to input a password for an email ID.\n");
	printf("The password is to be of fixed length\n");
	printf("the password may contain all sorts of characters and digits too.\n");
	
	printf("\nInput the fixed length of password:");
	scanf("%d",&length);
	
	printf("\nNow input the password:");
	
	getchar();				/*I used getchar so that it takes the new line-char remained uninputed in the input buffer*/
	scanf("%[^\n]s",string);

	int k=strlen(string);
	
	if(k==length){
		printf("\nValid input\nPassword processed :");
		puts(string);
		printf("\n\n");
	}
	if(k>length){
		printf("\nInvalid input....password too long\n\n");
	}
	if(k<length){
		printf("\nInvalid input....password too short\n\n");
	}
	return;
}
	
void conditional (void){
	
	printf("\n\nHere's an example of conditional validation....ISBN code of a book\n\n");
	char string[11];
	int l,last;
	printf("\nenter the isbn code\n");
	scanf("%s",string);
	int i,k=strlen(string);
	int sum=0;
	if(k!=10)
	printf("invalid input\n");
	else
	{
	for(i=0;i<9;i++)
	 {
	 	l=string[i];
	 	int m=l-48;
	 	sum=sum+((i+1)*m);	 	
	 }
	 last=string[9];
	 last=last-48;
	 if(last==(sum%11))
	 printf("\nvalid input\n");
	 else
	 printf("\nwrong input\n");
    }

}
void divisonproblem (void){

	float a,b;
	printf("\n\nHere we will check wheather the divisor is not zero.\nIf its zero the division is not defined.\n\n");
	printf("Enter the divident:");
	scanf("%f",&a);
	printf("\n");
	printf("Enter the divisor:");
	scanf("%f",&b);
	printf("\n");
	
	if(b==0){
		printf("Invalid input divisor can't be 0.\n\n");
	}
	else
		printf("Valid input.\n\n");
	
}

		

























