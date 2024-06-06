// 1. Accept 5 numbers in an array. 
//    Find the maximum  number in the array without sorting using a function named "findMaximum".
// #include<stdio.h>
// int findmaximun(int *number, int a)
// {
//     int max = *number;
//     for (int i = 1; i < a; i++)
//     {
//         if (*(number +i)> max)
//         {
//             max = *(number+i);
//         }
//     }
//     return max;
// }
// int main()
// {
//     int number[5];
//     for(int i =0; i<5; i++)
//     {
//         printf("enter number: ");
//         scanf("%d", &number[i]);
//     }
//     int max = findmaximun(number, 5);

//     printf("the max number is: %d\n", max);

//     return 0;
// }


// 2. A sorted array of five integers is given. 
//    Accept an integer from the user and search for it in an array. 
//    Write a function named "Search" which returns the position at which the element found. 
//    -1 if the element is not found.



// 3. Array of 10 integers is  given. 5 integers are initialized. 
//    Insert an element in an array using a function named "insertValue". 
//    [Use subscript operator to write the functions]



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("enter size: ");
    int n;
    scanf("%d", &n);

    int *ptr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter marks: ");
        scanf("%d", ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr+i));
    }

    while (1)
    {
    
    printf("enter size:Y||N ");
    int choise;
    scanf("%d", &choise);
    if (choise)
    {
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
    }
    else break;
    
    

    }

    return 0;
}