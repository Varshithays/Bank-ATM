#include <stdio.h>//ATM working using C program

int Transaction();
int anotherTransaction,amountToWithdraw,amountToDeposit,pin;
double balance = 500; // setting initial balance for everyone

int  main()

{
    printf("\n");
  printf("******** Welcome VYS ATM !! ******** \n\n");
  printf(" Enter your pin number please: \n");
  scanf("%d",&pin);
    if(pin != 1221)
   {
       printf("Sorry your pin is wrong, Pls try again ");
   }
   else
    {
      Transaction();    
    }
}

int Transaction()
{
  int choice;
  printf("Enter any option to use!\n\n");
  printf("1. Balance Enquiry \n");
  printf("2. Cash Withdraw\n");
  printf("3. Deposit Cash\n");
  printf("4. Exit \n");
  scanf("%d",  &choice);

  switch(choice)

  {

    case 1: 
    printf("Your bank balance is: %f", balance);
    printf("\n\nDo you want to perform another transaction?\nPress 1 to proceed and 0 to exit\n\n"); // request for another transaction
    scanf("%d",&anotherTransaction);
    if(anotherTransaction == 1)
      {
        Transaction();
      }
     break;

    case 2:// Second option should be withdraw
    printf("Please enter amount to withdraw: ");
    scanf("%d", &amountToWithdraw);
    if(amountToWithdraw <= balance) //500
    {
     printf("Pls collect your cash\n");
     balance=balance-amountToWithdraw;//
     printf("Your available balance is %lf\n",balance);
     printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 0 to exit\n\n");
     scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             Transaction();  
        }
    }
     else
    {
       printf("Sorry in-sufficient funds in your account");
       printf("\n\nDo you want to perform another transaction?\n Press 1 to proceed and 0 to exit\n\n");
       scanf("%d", &anotherTransaction);
       if(anotherTransaction == 1)
        {
             Transaction();  
        }
    }
    break;

    case 3:
    printf("Please enter amount to deposit: ");
    scanf("%d", &amountToDeposit);
    balance = amountToDeposit + balance;
    printf("Thank you for depositing, your new balance is: %f", balance);
    printf("\n\nDo you want another transaction?\nPress 1 to proceed and 0 to exit\n\n");
    scanf("%d", &anotherTransaction);
    if(anotherTransaction == 1)
     {
        Transaction(); // call our transaction method here
     }
    break;
    default:
     printf("Thanks for Using ATM services, See you soon");
  }

}




