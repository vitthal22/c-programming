// 1. Find the area of a circle whose radius is accepted from the user.
// #include<stdio.h>
// int main()
// {
//     int radius;
//     printf("enter radius: ");
//     scanf("%d", &radius);
//     int area_of_circle = (22/7)*(radius)*(radius);

//     printf("area of circle is %d\n", area_of_circle);
// }

// 2. Find the maximum of two numbers and display it.
// #include<stdio.h>
// int main()
// {
//     int num1;
//     int num2;
//     printf("enter number: ");
//     scanf("%d %d", &num1, &num2);
//     if (num1>num2) printf("max is %d\n", num1);
//     else printf("max is %d\n", num2);
// }

// 3. Find whether a given number is odd or even and accordingly display the message "Odd" or "Even".
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter number: ");
//     scanf("%d", &num);
//     if (num%2==0) printf("even\n");
//     else printf("odd\n");
// }

// 4. Find whether the number accepted from the user is positive or negative.
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("enter number: ");
//     scanf("%d", &num);
//     if (num<0) printf("negative\n");
//     else if (num>0) printf("positive\n");
//     else printf("zero\n");
// }

// 5. Accept the age from the user and display appropriate message for issuing of license:
//       Less than 18 years - Display "No license".
//       Above 18 years - Display "Issue license".
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter age: ");
//     scanf("%d", &age);
//     if (age<18) printf("no license\n");
//     else if(age>=18&&age<=100) printf("issue license\n");
//     else printf("invalid age\n");
// }

// 6. Print multiples of 5 that are less than 100.
// #include<stdio.h>
// int main()
// {
//     int i;
//     for (i=1; i<=100; i++)
//     {
//         if (i%5==0) printf("%d\n", i);
//     }
// }

// 7. Find the sum of even numbers from 1 to 20.
// #include<stdio.h>
// int main()
// {
//     int i, sum=0;
//     for (i=1; i<=20; i++)
//     {
//         if (i%2==0) sum+=i;
//     }
//     printf("sum is %d\n", sum);
// }

// 8. Find the factorial of a number.
// #include <stdio.h>
// int main()
// {
//     int num, fact=1;
//     printf("enter number: ");
//     scanf("%d", &num);
//     for (int i=1; i<=num; i++)
//     {
//         fact*=i;
//     }
//     printf("factorial of %d is %d\n", num, fact);
// }

// 9. To find whether the number accepted from the user is a prime number or not.
// #include<stdio.h>
// int main()
// {
//     int num, flag=0;
//     printf("enter number: ");
//     scanf("%d", &num);
//     for (int i=2; i<num; i++)
//     {
//         if (num%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if (flag==0) printf("prime\n");
//     else printf("not prime\n");
//     return 0;
// }

// 10. Consider the number is 3425. Find the sum of the digits of the number and display the sum.
// #include<stdio.h>
// int main()
// {
//     int num= 3425, sum=0;
//     while (num>0)
//     {
//         sum+=num%10;
//         num/=10;
//     }
//     printf("sum is %d\n", sum);
//     return 0;
// }