#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter size: ");
    int n;
    scanf("%d", &n);

    int *ptr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter ele:");
        scanf("%d", ptr+i);
    }

    //de-allocation
    free(ptr);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr+i));
    }
    return 0;
}