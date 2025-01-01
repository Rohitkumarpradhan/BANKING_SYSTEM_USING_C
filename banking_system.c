/*....WAP IN C FOR BANKING MANAGEMENT SYSTEM FOR FUNCTIONS LIKE WITHDRAW, DIPOSIT,COMPOUND INTEREST CALCULATION, BALANCE DISPLAY....*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Function prototypes

void menu();
void deposit(float *balance, float amount);
void withdraw(float *balance, float amount);
void compoundInterest(float *balance, float rate, int time);
void displayBalance(float balance);

int main()
{
    float amount, rate;
    float balance = 0.0;

    int choice, years;
    while (1)
    {
        menu();
        printf("Please enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // DEPOSIT
            printf("Enter the amount to be depositted:\n");
            scanf("%f", &amount);
            deposit(&balance, amount);
            break;
        case 2: // WITHDRAW
            printf("Enter the amount to Withdraw:");
            scanf("%f", &amount);
            withdraw(&balance, amount);

            break;

        case 3: // COMPOUND CALCULATION
            printf("Enter the annual interest rate to calculate compound interest (rate in %%):\n");
            scanf("%f", &rate);
            printf("Enter the number of years for compound interest calculation:\n");
            scanf("%d", &years);
            compoundInterest(&balance, rate, years);
            break;

        case 4: // BALANCE DISPLAYING
            displayBalance(balance);
            break;
        case 5:
            printf("Thank you for using banking system!! \n by Rohit\n");
            return 0;
        default:
            printf("Invalid choice!! .... Please re-enter your choice !!! ");
            break;
        }
    }

    return 0;
}

// FUNCTION DECLARATIONS:
//------------------------------------------------------------------------------------------
void menu()
{
    printf("\n~~WELCOME TO BANKING SYSTEM~~\n");

    printf(" 1. DEPOSIT\n");
    printf(" 2. WITHDRAW\n");
    printf(" 3. COMPOUND INTEREST\n");
    printf(" 4. DISPLAY BALANCE\n");
    printf(" 5. EXIT\n");
}
//------------------------------------------------------------------------------------------
void deposit(float *balance, float amount)
{
    if (amount < 0)
    {
        printf("Invalid amount !! please re enter.\n");
    }
    else
    {
        *balance += amount;
        printf("Blance added successfully!!.. \nTotal balance available is: %.2f", *balance);
    }
}
//---------------------------------------------------------------------------------------------
void withdraw(float *balance, float amount)
{
    if (amount <= 0)
    {
        printf("Invalid amount!! please enter valid amount  !\n");
    }
    else if (*balance == 0.0 || amount > *balance)
    {
        printf("Insufficient Balance!!\n");
    }
    else
    {
        *balance -= amount;
        printf("Amount deducted successfully!! \n Available balance is : %.2f\n", *balance);
    }
}
//--------------------------------------------------------------------------------------------
void displayBalance(float balance)
{
    printf("The available balance in your accout is :\n %.2f", balance);
}
//--------------------------------------------------------------------------------------------
void compoundInterest(float *balance, float rate, int time)
{

    float finalans = ((*balance) * pow((1 + rate / 100), time));
    if (time < 0)
    {
        printf("Invalid year!!\nplease reenter\n");
    }
    else if (time == 0)
    {
        printf("The compound interest after %d year is : %.2f\n", time, *balance);
    }
    else
    {
        printf("The compound interest after %d years is : %.2f\n", time, finalans);
    }
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//