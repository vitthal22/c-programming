#include<stdio.h>
void add(int a, int b);
int main()
{
    // 2. paramterized with non return type function

    // add(10,20);
    int n1, n2;
    printf("Enter first numbers: ");
    scanf("%d", &n1);
    printf("Enter second numbers: ");
    scanf("%d", &n2);

    add(n1,n2);// call by value
    // arguments

    printf("rest of code\n");
    return 0;
}
void add(int a, int b)
{
    printf("add: %d\n", a+b);
}
