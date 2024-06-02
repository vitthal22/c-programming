// 1. Swap the no.

// #include<stdio.h>
// void swap(int a, int b);
// int main()
// {
//     swap(10,20);
//     return 0;
// }
// void swap(int a, int b)
// {
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);

//     printf("print after swaping\n");
//     //write logic which swap a with b

//     int fact = 0;// it was empty
//     fact = a;// in empty value we put the value of a
//     a = b; 
//     b = fact;
//     printf("a: %d\n", a);
//     printf("b: %d\n", b);
// }

//2. print which 2 int is greater using function where function name is findmax
// #include<stdio.h>
// int findmax(int a, int b);
// int main()
// {
//     int ans = findmax(10,50);
//     printf("%d\n", ans);
//     return 0;
// }
// int findmax(int a, int b)
// {
//     if(a>b)
//     {
//         return a;
//     }
//     else return b;
// }

// 3. swap

// #include<stdio.h>
// void swap(int n1, int n2);
// int main()
// {
//     int a =10;
//     int b=20;
//     printf("%d\n", a);
//     printf("%d\n", b);

//     swap(a, b);//call by value

//     printf("a is %d\n", a);
//     printf("b is %d\n", b);
    
//     return 0;
// }

// void swap(int n1, int n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;
// }


// Task 2
// Accept numerator and denominator from the user in main. Pass them to the function dowork. 
// The dowork function, should perform the division. Note: 
// a.Quotient and remainder of the division should be printed in main.

// b) User should re-enter the number if the denominator entered is 0



// #include<stdio.h>
// void dowork(int nu, int de, int *qu, int *re);
// int main()
// {
//     int nu, de, qu, re;
//     printf("enter numenator: ");
//     scanf("%d", &nu);
//     printf("enter denometor: ");
//     scanf("%d", &de);

//     dowork(nu, de, &qu, &re);

//     printf("%d\n", qu);
//     printf("%d\n", re);
        
//     return 0;
// }

// void dowork(int nu, int de, int *qu, int *re)
// {
//     while(de==0)
//     {
//         printf("re enter denometer: ");
//         scanf("%d", &de);

//     }
//     *qu = nu/de;
//     *re = nu%de;
    
// }

//Task 3
// Write one single function to find:
// 1. Sum of all odd numbers less than 10

// 2. Sum of all even numbers less than 10

// Both the results should be printed in main.

// (Hint: pass by address)




// Task 4
// Write a function that accepts radius (float) as a parameter and calculates area and circumference of a circle. 
// Display the results in main.

// Hint: Pass radius by value and area and circumference by address.
