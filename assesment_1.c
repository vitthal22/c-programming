// 1. Write menu driven program to perform the following:
//     Find Factorial
//     Find Square
//     Exit



    // #include<stdio.h>
    // int main()
    // {
    //     while(1)
    //     {
    //         printf("1. find factorial\n2. find squar\n3. exit");
    //         int choice;
    //         scanf("%d",&choice);

    //         if(choice = 1)
    //         {
    //             //find factorial
    //             int num,fact=1;
    //             printf("Enter a number: ");
    //             scanf("%d",&num);
    //             for(int i=1;i<=num;i++){
    //                 fact *= i;
    //             }
    //             printf("Factorial of %d is %d\n",num,fact);
    //         }
    //         if(choice = 2)
    //         {
    //             //find squar
    //             int num;
    //             printf("Enter a number: ");
    //             scanf("%d",&num);
    //             printf("Square of %d is %d\n",num,num*num);
    //         }            
    //         if(choice = 3)
    //         {
    //             //Exit
    //             break;
    //         }
    //         else
    //         {
    //             printf("Invalid choice");
    //         }         
    //     }
    //     return 0;
    // }



// 2) Accept the age from the user and display appropriate message for issuing of license:
//      Less than 18 years Display "No license".
//      Above 18 years - -Display "Issue license".  



// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);

//     if (age<18)
//     {
//         printf("No license\n");
//     }
//     else if(age>=18 && age<=100)
//     {
//         printf("Issue license\n");
//     }
//     else
//     {
//         printf("Invalid age\n");
//     }
//     return 0;
// }

    


//3. Find the sum of all even numbers from 1 to 20. 
//Modify the program to accept the lower and upper limit from the user.


// #include<stdio.h>
// int main()
// {
//     int n;
//     int m;
//     printf("Enter lower limit: ");
//     scanf("%d", &n);
//     printf("Enter upper limit: ");
//     scanf("%d", &m);
//     int fact = 0;
//     for(int i = n; i<=m; i++)
//     {
//         //printf("%d\n",i);
//         if(i%2==0)
//         {
//             //printf("%d =%d + %d\n", fact,fact,i);
//             fact = fact + i;
//         }
//     }
//     printf("%d\n", fact);

//     return 0;
// }

