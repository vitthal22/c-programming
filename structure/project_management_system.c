#include<stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int index = 0;
    while (1)
    {
        printf("Enter 1 to add\nEnter 2 to display\nEnter 3 to update\nEnter 4 to delete\nEnter 5 to Exit");
        int choice;
        scanf("%d", &choice);

        if (choice ==1)
        {
            printf("Enter id: ");
            scanf("%d", &emp[index].id);

            printf("Enter name: ");
            scanf("%s", &emp[index].name);

            printf("Enter salary: ");
            scanf("%f", &emp[index].salary);
            index++;
            printf("Added\n");
        }
        else if (choice ==2)
        {
            for(int i=0; i<index; i++){
            printf("emp id: %d\n", emp[i].id);
            printf("emp name: %s\n", emp[i].name);
            printf("emp salary: %f\n", emp[i].salary);
            }
        }
        else if (choice ==3)
        {
            printf("Enter id of emp: ");
            int temp_id;
            scanf("%d", &temp_id);
            int flag =0;
            int i =0;
            for( i; i<index; i++)
            {
                if(emp[i].id==temp_id)
                {
                    flag =1;
                    break;
                }
            }
            if(flag ==1)
            {
                printf("enter name: ");
                scanf("%s", &emp[i].name);

                printf("enter salary: ");
                scanf("%f", &emp[i].salary);

                printf("Updated\n");
            }
            else printf("not exits\n");
        }
        else if (choice ==4)
        {
            printf("Enter id of emp: ");
            int temp_id;
            scanf("%d", &temp_id);
            int flag =0;
            int i =0;
            for( i; i<index; i++)
            {
                if(emp[i].id==temp_id)
                {
                    flag =1;
                    break;
                }
            }
            if(flag ==1)
            {
                for(int j=i; j<index; j++)
                {
                    emp[j] = emp[j+1];
                }
                index--;
                printf("Deleted\n");
            }
            else printf("not exits\n");
            
        }
        else if (choice ==5)
        {
            printf("Exit\n");
            break;
        }
        else printf("Invalid\n");
    }
    return 0;
}