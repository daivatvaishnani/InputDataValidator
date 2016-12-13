/*********************************************************************************/
/*										 */
/*	           PROJECT ON INPUT-DATA VALIDATION AND CORRECTION		 */
/*			By VAISHNANI DAIVAT JAYANTILAL (15ucs155)		 */					
/*										 */
/*********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"daivat.h"

int main (void){

	printf("\n\nThis is a simple project on input data validation.\nThe project is designed to execute in a menu-driven way.\n");
	printf("To continue press ENTER or kill the program using CTRL+C\n\n");

	char enter;
	scanf("%c",&enter);
	
	/**************user will most probably press ENTER***************/

		if(enter=='\n')
			project();

	return 1;
}

