#include<stdio.h>
void addition();
int main()
{
    /*
    type of user define functions
    1. non parameterized function
        a. non return type
        b. return type
    2. parameterized functions
        a. non return type
        b. return type
    */

//    1. non parameterized and non return type
    addition();
    return 0;
}
void addition()
{
    int n1, n2;
    printf("Enter first numbers: ");
    scanf("%d", &n1);
    printf("Enter second numbers: ");
    scanf("%d", &n2);
    printf("Addition = %d\n", n1+n2);
}
