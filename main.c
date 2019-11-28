#include "myBank.h"
#include <stdio.h>

int main(){
char c = ' ';

   while(c != 'E'){
	printf("\nTransaction type: "); 
        scanf(" %c", &c);
      
      switch(c){
	

          case 'O': Create_new_account();
	        break;

          case 'B': BalanceStatus();
	        break;

          case 'D': Cash_Deposit();
	        break;

          case 'W': Cash_Withdrawl();
	        break;

          case 'C': Close_account();
	        break;

          case 'I': Interest();
	        break;

          case 'P': Printing();
	        break;

          case 'E': Exit();
	  
         default: printf("bank close\n");
		break;
        
      }
   }

}



















































