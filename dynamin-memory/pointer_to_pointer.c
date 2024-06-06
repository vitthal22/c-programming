// pointer to pointer
#include<stdio.h>
int main()
{
    // int a = 10;

    // int *ptr = &a;

    // int **pptr = &ptr;

    // printf("self add of pptr %d\n", &pptr);
    // printf("hold add of pptr %d\n", pptr);
    // printf("hold add value of pptr %d\n", **pptr);


    //Array of pointers
    
    int a =10,
    b= 20,
    c =30;

    int *ptr[3] = {&a, &b, &c};

    for (int i = 0; i < 3; i++)
    {
        printf("data of %d th index ele: \n", i);

        printf("self add of ptr[%d]: \n", &ptr[i]);
        printf("hold add of ptr[%d]: \n", ptr[i]);
        printf("hold add value of ptr[%d]: \n", *ptr[i]);
    }
    

    return 0;
}