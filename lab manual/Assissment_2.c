// Problem Statement
// Write a program to print "WELCOME TO SEED" using escape sequences: \n, \t, \r, \".
// Observe the differences in the output.
// Note: Do not use all the escape sequences only at the beginning or at the end of a sentence. 
// Their real purpose will be clear only if you try using them elsewhere in the statement.

// #include<stdio.h>
// int main()
// {
//     printf("WELCOME\tTO\tSEED\n");
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Problem Statement
// Write a program to accept marks of 5 subjects from the user and calculate their average.
//  Use implicit and explicit type conversion.
// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e;
//     float avg;
//     printf("Enter marks of 5 subjects: ");
//     scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//     avg=(a+b+c+d+e)/5.0;
//     printf("Average of 5 subjects is: %f",avg);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float marks[5];
//     float avg = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter marks: ");
//         scanf("%f", &marks[i]);     
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         avg += marks[j];
//     }
//     printf("average marks is: %.2f", avg/5);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Problem Statement
// Write a program to calculate the sum of digits of a user-entered number. 
// Ensure that your program scans not more than 4 digits. Also print the output in following manner.
// For example, if the number is 1234, output should be 10.
// #include<stdio.h>
// int main()
// {
//     int num;
//     int sum_of_digits = 0;
//     printf("Enter a number: ");
//     scanf("%4d", &num);
//     while (num > 0)
//     {
//         sum_of_digits += num % 10;
//         num /= 10;
//     }
//     printf("Sum of digits is: %d", sum_of_digits);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Advanced Exercises
// 1. Write a program to add two numbers and store the result in a third variable. Print the result.
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("Sum of two numbers is: %d",c);
//     return 0;
// }


// 2. Write a program to swap two variables using a third variable and without using third variable.
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("Swapped numbers are: %d and %d",a,b);
//     return 0;
// }


// 3. Write a program to calculate Net Salary of an employee. Accept Basic Salary (BS) from the user.
//     HRA is 20% of BS.
//     DA is 40% of BS.
//     PF is 10% of Gross Salary.
//     Gross Salary is BS + HRA + DA.
// Note: Net Salary = Gross Salary - PF
// 4. Accept a character from the user. It may be an alphabet, digit or any other character. 
//    Print its ASCII value.