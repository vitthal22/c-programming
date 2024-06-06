                    /* Dynamic memory allocation */
// #include<stdlib.h> 

// 1. malloc
// 2. calloc
// 3. re-alloc

// free (for deleting the memory)

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     printf("enter size: ");
//     int n;
//     scanf("%d", &n);

//     int *ptr = (int*)malloc(n * sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("enter marks: ");
//         scanf("%d", ptr+i);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", *(ptr+i));
//     }

//     return 0;
// }