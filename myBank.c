#include <stdio.h>



#include "myBank.h"

#define ROW  50
#define COL  2
#define Close 0
#define Open 1


double Bank_account[ROW][COL] = {0};

void Create_new_account(){
	int number_account = 901;
	int i = 0;
	while(i < 50){
	    if(Bank_account[i][0] == Close){
	      double amount;
	      printf("enter amount: ");
	      scanf("%lf", &amount);
	      Bank_account[i][1] = amount;
	      Bank_account[i][0] = Open;
	      number_account += i; 
	      printf("number account: %d", number_account);
	      return;
            }
	   i++;
       }
   printf("The bank is full");				   
}


void BalanceStatus(){
   int account_number;
   printf("enter number account: ");
   scanf("%d", &account_number);
   int i = (account_number % 50)-1;
   if(Bank_account[i][0] == Open){
	double balace_status = Bank_account[i][1];
        printf("balance_status: %0.2lf", balace_status);
	
   }else{ printf("the account is close");}
}


void Cash_Deposit(){
     int account_number;
     printf("enter number account: ");
     scanf("%d", &account_number);
     int i = (account_number % 50)-1;
     if(Bank_account[i][0] == Open){
        double amount;
        printf("enter how much money to deposit: ");
        scanf("%lf", &amount);
	Bank_account[i][1] += amount;
        printf("balance_status: %0.2lf", Bank_account[i][1]);
      
      }else{ printf("the account is close");}
}


void Cash_Withdrawl(){
     int account_number;
     printf("enter number account: ");
     scanf("%d", &account_number);
     int i = (account_number % 50)-1;
     if(Bank_account[i][0] == Open){
        double amount;
        printf("enter how much money to withdrawl: ");
        scanf("%lf", &amount);
	if(Bank_account[i][1] > amount && Bank_account[i][1] > 0){
	   Bank_account[i][1] -= amount;
           printf("balance_status: %0.2lf", Bank_account[i][1]);
         
         }
         else{printf("their is no money to withdrawl");}
      
      }else{ printf("the account is close");}
}


void Close_account(){
	 int account_number;
         printf("enter number account: ");
         scanf("%d", &account_number);
	 int i = (account_number % 50)-1;
	 if(Bank_account[i][0] == Open){
	      Bank_account[i][0] = Close;
          
	  }else{printf("the bank is already close");}
}


void Interest(){
  	int i = 0;
        double interest_rate;
	printf("enter number inseret: ");
        scanf("%lf", &interest_rate);
	while(i < ROW){
	    if(Bank_account[i][0] == Open){
	      Bank_account[i][1] = Bank_account[i][1]*(1 + interest_rate/100);
             }

     	    i++;
        }
    
}


void Printing(){
	int account_number = 901;
	int i = 0;
	while(i < ROW){
	    if(Bank_account[i][0] == Open){
	      printf("\nbalance_status of account number %d is: %0.2lf",account_number, Bank_account[i][1]);
             }
	    account_number++;
     	    i++;
         }
}


void Exit(){
  int i = 0;
	while(i < ROW){
	    if(Bank_account[i][0] == Open){
	      Bank_account[i][0] = Close;
	      Bank_account[i][1] = Close;
             }

     	    i++;
        }

    return;

}








































