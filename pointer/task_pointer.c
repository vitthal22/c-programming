#include<stdio.h>
void add_multi(int x, int y, int *d, int *f);
int main()
{
    int res1;
    int res2;
    int a = 10;
    int b = 5;

    add_multi(a,b,&res1, &res2);

    printf("add: %d\n", res1);
    printf("multi: %d\n", res2);
    
    
    
    
    return 0;
}

void add_multi(int x, int y, int *d, int *f)
{
    *d = x + y;
    *f = x * y;
}
