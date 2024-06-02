// // Array is data type/variable which help to hold multiple value of same data type.
// #include<stdio.h>
// int main()

// //one d array
// {
//     //int marks[5] = {10, 50, 80, 78, 60};
//     // int marks[5];
//     // marks[0] = 10;
//     // marks[1] = 15;
//     // marks[2] = 55;
//     // marks[3] = 160;
//     // marks[4] = 100;
//     // printf("%d\n", marks[0]);
//     // printf("%d\n", marks[1]);
//     // printf("%d\n", marks[2]);
//     // printf("%d\n", marks[3]);
//     // printf("%d\n", marks[4]);


//     int marks[5] = {10, 50, 80, 78, 60};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", marks[i]);
//     }
    
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int arr[5];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter marks: ");
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//      int arr[] = {10, 45, 78, 10, 10}
    
//     return 0;
// }

// task 1.
// find min and max no. in arr

// #include<stdio.h>
// int main()
// {
//     int arr[5];
    

//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter number: ");
//         scanf("%d", &arr[i]);
//     }
//     int temp = arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (temp < arr[i])
//         {
//             temp = arr[i];
//         }   
//     }
//     printf("%d", temp);
    
//     return 0;
// }


// Reverse the array

// #include<stdio.h>
// int main()
// {
//     int arr[]= {10,23,45,67,89};

//     for (int i = 4; i >=0 ; i--)
//     {
//         printf("%d\n", arr[i]);
//     }
    
//     return 0;
// }

//allocate the memory of the remaining array

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {10, 20, 30, 40, 50};

//     for (int i = 5; i < 10; i++)
//     {
//         printf("enter value: ");
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

// Join the 2 arr in one

// #include<stdio.h>
// int main()
// {
//     int arr1[5] = {10,20,30,40,50};
//     int arr2[5] = {100,200,300,400,500};

//     int arr[10];

//     for (int i = 0; i < 5; i++)
//     {
//         arr[i]=arr1[i];
//     }
//     int i = 5;
//     int j = 0;
//     for(i,j; i<10,j<5;i++,j++)
//     {
//         arr[i]=arr2[j];
//     }

//     for (int k = 0; k < 10; k++)
//     {
//         printf("%d\n", arr[k]);
//     }
//     return 0;
// }

