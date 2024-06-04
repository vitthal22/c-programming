// #include<stdio.h>
// void myfun(int a[])
// {
//     for(int i =0; i<3; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// }
// int main()
// {
//     int arr[] = {10,20,30};
//     myfun(arr);

//     return 0;
// }

// #include<stdio.h>
// void myfun(int *a)
// {
//     for(int i =0; i<3; i++)
//     {
//         printf("%d\n", *(a+i));
//     }
// }
// int main()
// {
//     int arr[] = {10,20,30};
//     myfun(arr);

//     return 0;
// }

// user input without using "&" 

#include<stdio.h>
void takeinput(int *a)
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter marks: ");
        scanf("%d", a+i);
    }
}
void display(int *b)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(b+i));
    }
    
}
int main()
{
    int marks[5];
    
    //write a func takeinput
    //write func display
    takeinput(marks);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", marks[i]);
    // }
    display(marks);
    return 0;
}