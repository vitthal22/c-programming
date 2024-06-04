// #include<stdio.h>
// int main()
// {
//     float cust_amount[5][3] = 
//     {
//         {10.56,52.1,58},
//         {60.2,58.0,45.25},
//         {56.32,78.12,94},
//         {12.01,4.25,63.00},
//         {6.23,65,44.98}
//     };
//     // printf("%f\n", cust_amount[0][0]);
//     // printf("%f\n", cust_amount[4][2]);

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             // printf("[%d][%d],", i, j);
//             printf("%.2f ", cust_amount[i][j]);
//         }
//         printf("\n");
        
//     }
    

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int cust_amount[5][3];

//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter %d\n", i);
//         for (int j = 0; j < 3; j++)
//         {
//             printf("enter %d: ", j);
//             scanf("%d ", &cust_amount[i][j]);
//         }
//         printf("\n");
//     }
     
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", cust_amount[i][j]);
//         }
//         printf("\n");
//     }
    

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     float cust_amount[5][3] = 
//     {
//         {10.56,52.1,58},
//         {60.2,58.0,45.25},
//         {56.32,78.12,94},
//         {12.01,4.25,63.00},
//         {6.23,65,44.98}
//     };
//     // printf("%f\n", cust_amount[0][0]);
//     // printf("%f\n", cust_amount[4][2]);

//     for (int i = 0; i < 5; i++)
//     {
//         float sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += cust_amount[i][j];
//         }
//         printf("%.2f", sum);
//         printf("\n");
        
//     }
    

//     return 0;
// }


// Task find the sum of diganaol in the 2d array

#include<stdio.h>
int main()
{
    int arr[3][3] = 
    {
        {20,55,99},
        {65,32,74},
        {45,78,25}
    };
    int sumofdiagonal1 = 0;
    int sumofdiagonal2 = 0;
    for (int i = 0; i < 3; i++)
    {
        // int sum = 0;
        sumofdiagonal1 += arr[i][i]; 
        // printf("\n");
    }
    for (int j = 0; j < 3; j++)
    {
        sumofdiagonal2 += arr[j][3-j-1];
        // printf("%d\n", arr[j][3-j-1]);
    }
    printf("sum of diagonal1: %d\n", sumofdiagonal1);
    printf("sum of diagonal1: %d\n", sumofdiagonal2);
}

