#include<stdio.h>
void swap(int *n1, int *n2);
int main()
{
    int a = 10;
    int b = 20;
    printf("%d\n", a);
    printf("%d\n", b);
    swap(&a, &b);// call by address
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}

void swap(int *n1, int *n2)
{
    // printf("%d\n", &n1);
    // printf("%d\n", n1);
    // printf("%d\n", *n1);

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
