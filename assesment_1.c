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

// 4. Find the maximum of two numbers and display it.
//    [Use if-else. Also write the code using conditional operator]

// #include<stdio.h>
// int main()
// {
//     int n1, n2, max;
//     printf("Enter 2 num: ");
//     scanf("%d %d", &n1, &n2);

//     if(n1>n2)
//     {
//         max = n1;
//     }
//     else 
//     {
//         max = n2;
//     }
//     printf("Maximum numbers is: %d\n", max);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n1, n2, max;
//     printf("Enter 2 num: ");
//     scanf("%d %d", &n1, &n2);

//     max = (n1>n2)?(max = n1):(max = n2);
//     printf("max no.: %d\n", max);
//     return 0;
// }

// A teacher provides his student with a number and a key digit.
//  He wants student to find out many times the key digit occurs in the number. 
// Help the student by writing a program.


// #include<stdio.h>
// int main()
// {
//     char result[10];
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int digit;
//     printf("enter digit: ");
//     scanf("%d", &digit);
//     sprintf(result, "%d", num);
//     //printf("%c\n", result[0]);
//     int count = 0;
//     //printf("%d\n", sizeof(result));
//     for (int i = 0; i < sizeof(result); i++)
//     {
//         printf("i=%d digit= %d  result[i]= %d\n", i, digit+'0', result[i]);
//         if (result[i] == digit+'0')
//         {
//             count++;
            
//         }
//     }
//     printf("%d\n", count);



//     return 0;
// }
    

// #include<stdio.h>
// int main()
// {
//     int num, sum= 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while (num>0)
//     {
//         sum += num%10;
//         num/= 10;
//     }
//     //printf("%d\n", sum);
//     if (sum%3==0&&sum%5==0)
//     {
//         printf("Divisible by 3 and 5\n");
//     }

//     for (int i = 1000; i < 9999; i++)
//     {
        
//     }
    
    
    

//     return 0;
// }




    
    



 






