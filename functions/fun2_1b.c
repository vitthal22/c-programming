#include<stdio.h>
int add();
int main()
{
    // 1. non paramenterized with return type function
    printf("%d", add());
    return 0;
}
int add()
{
    //rep block of code
    int n1, n2;
    printf("Enter first numbers: ");
    scanf("%d", &n1);
    printf("Enter second numbers: ");
    scanf("%d", &n2);
    
    int result = n1+n2;

    return result;


}
