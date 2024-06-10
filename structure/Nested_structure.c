#include<stdio.h>
struct Address
{
    char city[10];
    char state[10];
    int pin;
};

struct employee
{
    int id;
    char name[20];

    struct Address add;
};



int main()
{
    struct employee e1;
    printf("enter id: ");
    scanf("%d", &e1.id);

    printf("enter name: ");
    scanf("%s", &e1.name);

    printf("enter city: ");
    scanf("%s", &e1.add.city);    

    return 0;
}

