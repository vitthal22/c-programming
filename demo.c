#include<stdio.h>
//normal macro
#define a 20
#define res a+a
// function macro
#define square(n)  (n) * (n)

int main()
{
    printf("%d\n", square(10));
    return 0;
}