#include<stdio.h>
//step 1
void addition();
int main()
{
    /*
    1. function declaration
    2. function defination
    3. function calling
    */

   // step 3
    addition();

    printf("after a while\n");
    addition();
    addition();
    return 0;
}
//step 2
void addition()
{
    int n1, n2;
    printf("Enter first numbers: ");
    scanf("%d", &n1);
    printf("Enter second numbers: ");
    scanf("%d", &n2);
    printf("Addition = %d\n", n1+n2);
}
