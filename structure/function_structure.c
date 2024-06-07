#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
void dowork(struct employee a)
{
    printf("emp id: %d\n", a.id);
    printf("emp name: %s\n", a.name);
    printf("emp salary: %.2f\n", a.salary);
}
void init(struct employee *b)
{
    printf("enter id: ");
    scanf("%d", &b->id); // arrow operator is used in case of address vaue.

    printf("enter name: ");
    scanf("%s", &b->name);
    
    printf("enter salary: ");
    scanf("%f", &b->salary);
}
int main()
{
    struct employee e1;
    // init(e1); // call by value
    init(&e1);
    dowork(e1);
    return 0;
}
