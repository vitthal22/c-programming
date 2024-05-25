/*
ATM
1. deposit
2. withdraw
3. check balance
4. set pin
5. exit
*/

#include<stdio.h>
int main()
{
    int balance = 0;
    int pin;
    while (1)
    {
        printf("1.deposit\n2.withdraw\n3.check balance\n4.set pin\n5.exit\n");
        int choice;
        scanf("%d", &choice);

        if (choice==1)
        {
            //deposit
            printf("enter pin: ");
            int temppin;
            scanf("%d", &temppin);
            if (temppin==pin)
            {
                int amount;
                printf("Enter the amount: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful\n");
            }
            else
            {
                printf("invalid pin");
            }
        }
        else if (choice==2)
        {
            //withdraw
            printf("enter pin: ");
            int temppin;
            scanf("%d", &temppin);
            if (temppin==pin)
            {
                printf("enter amount: ");
                int amount;
                scanf("%d", &amount);
                if (amount<balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful\n");
                }
                else
                {
                    printf("Invalid amount\n");
                }
            }
            else printf("invalid pin");  
        }
        else if (choice==3)
        {
            //check balance
            printf("Your balance is: %d\n", balance);
        }
        else if (choice==4)
        {
            //set pin
            printf("Enter new pin:");
            scanf("%d", &pin);
            printf("pin set succefully!\n");
        }
        else if (choice==5)
        {
            //exit
            break;
        }
        else
        {
            printf("Invalid choice");
        }
    }
    return 0;
}
