#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
void dowork(int a)
{
    printf(" %d\n", a);
}

int main()
{
    struct employee e1 = {1,"ndn", 3532.33};
    // init(e1); // call by value
    dowork(e1.id);
    return 0;
}