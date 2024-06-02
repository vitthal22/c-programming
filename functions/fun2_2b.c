#include<stdio.h>
int multi(int x,int y);
int main()
{
    // 2. paramterized with return type function
    // int ans = multi(5,10);
    // printf("%d\n", ans);
    int n1 =10;
    int n2 =30;
    printf("%d\n", multi(n1,n2));
    return 0;
}

int multi(int x, int y)
{
    int result = x*y;
    return result;
}