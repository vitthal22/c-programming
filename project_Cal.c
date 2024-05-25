#include<stdio.h>
int main()
{
    int oldresult = 0;
    while (1)
    {
        printf("1 to add\n2 to sub\n3 to exit\n");
        int choice;
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("1 to perform fresh opeation\n2 to perform old operation\n");
            int choice1;
            scanf("%d", &choice1);
            if(choice1 == 1)
            {
                int a, b;
                printf("Enter first numbers:");
                scanf("%d", &a);
                printf("Enter second numbers:");
                scanf("%d", &b);
                int result = a + b;
                oldresult = a+b;
                printf("Addition is: %d\n", result);
            }
            else{
                int a;
                printf("Enter number to add to old result");
                scanf("%d", &a);
                printf("Addition is: %d\n", (oldresult+a));
                oldresult = oldresult +a;
            }
        }

        else if (choice ==2)
        {
            printf("1 to perform fresh opeation\n2 to perform old operation\n");
            int choice2;
            scanf("%d", &choice2);
            if(choice2 == 1)
            {
                int a, b;
                printf("Enter first numbers:");
                scanf("%d", &a);
                printf("Enter second numbers:");
                scanf("%d", &b);
                int result = a - b;
                oldresult = a-b;
                printf("Subtraction is: %d\n", result);
            }
            else{
                int a;
                printf("Enter number to sub to old result");
                scanf("%d", &a);
                printf("Addition is: %d\n", (oldresult-a));
                oldresult = oldresult -a;
            }
        }
        else if (choice==3)
        {
            break;
        }
        else
        {
            printf("invalid choice\n");
        }
        
        
    }
    
    return 0;
}
