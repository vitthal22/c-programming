#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter size: ");
    int n;
    scanf("%d", &n);

    int *ptr = (int*)malloc(n * sizeof(int));
    // int *ptr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter marks: ");
        scanf("%d", ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr+i));
    }

    printf("enter size: ");
    int new_n;
    scanf("%d", &new_n);
    ptr = (int*)realloc(ptr, new_n* sizeof(int));

    for (int i = n; i < new_n+n; i++)
    {
        printf("enter marks: ");
        scanf("%d", ptr+i);
    }
    for (int i = 0; i < n+new_n; i++)
    {
        printf("%d\n", *(ptr+i));
    }

    

    return 0;
}