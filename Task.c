#include <stdio.h>

int main() {

//-- Ask the user to enter numbers. find the sum of the no. stop accepting no.
// when user enter 0. print the sum I    
    
     // int num;
    // printf("enter num");
    // scanf("%d",&num);
    // if (num ==0)return 0;
    // int i = 1;
    // int sum = 1;
    // while(i<=num)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // printf("%d\n",sum);

    // int num, sum = 0;
    
    // printf("Enter a number (Enter 0 to stop): ");
    // scanf("%d", &num);

    // while(num != 0) {
    //     sum += num;
        
    //     printf("Enter a number (Enter 0 to stop): ");
    //     scanf("%d", &num);
    // }

    // printf("The sum is: %d\n", sum);
    
    


// write a program to accept 2 no. add them and display the result. 
// the program should exceute until the user want to add number.

    // int n1, n2;
    // printf("enter n1: ");
    // scanf("%d", &n1);
    // printf("enter n2 ");
    // scanf("%d", &n2);
    // int flage = 1;
    // int a = n1 +n2;
    // do{
    //     printf("sum is %d\n", a);
    //     printf("do you want to perform mor opertion: Y||N:");
    //     char choice;
    //     scanf(" %c", &choice);
    //     if(choice == 'N')
    //     {
    //         flage = 0;
    //     }
    // }
    // while (flage==1);


//printing prime factors in number


//    int num;
//    printf("enter num: ");
//    scanf("%d", &num); 
   
//    for (int i = 2; i <= num; i++)
//    {
//     while (num % i==0)
//     {
//         printf("%d\n", i);
//         num /= i;
//     }  
//    }



// find the no.in given range which is only divisible by 5 but not 3

    // int num;
    // printf("enter num: ");
    // scanf("%d", &num);

    // for (int i = 0; i < num; i++)
    // {
    //     if (i % 5 == 0 && i % 3 != 0)
    //     {
    //         printf("%d\n", i);
    //     }
    // }



    //reverse loop
    // syntax
    // for(int =5; i>=1; i--)
    //{
    //    printf("%d ",i);[5,4,3,2,1]
    // }

    // for (int i = 5; i >= 1; i--)
    // {
    //     printf("%d\n",i);
    // }



    //4545 count digit

    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // int counter = 0;
    // while (num!=0)
    // {
    //     num /= 10;
    //     counter++;
    // }
    // printf("%d\n", counter);



    //5 print if the no. is prime is not

    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // int flag = 1;
    // for (int i = 2; i < num; i++)
    // {
    //     if(num%i==0)
    //     {
    //         flag = 0;
    //         break;
    //     }
    // }
    // if (flag)
    // {
    //     printf("prime\n");
    // }
    // else
    // {
    //     printf("not a prime number\n");
    // }
    
    //0 1 1 2 3 5 print this series in which the addition of previous 2

    // int n1 = 0;
    // int n2 = 1;
    // int n3=0;
    // printf("0 ");
    // for (int i = 1; i < 10; i++)
    // {
    //     n1=n2;
    //     n2=n3;
    //     n3 = n1 + n2;
    //     printf("%d ", n3);
        
    // }
    
   
// 1. take input from user as interger armstrong

    
    






// 2. 1 to 100 display prime number

    // int count = 0;
    // for (int i = 1; i <= 100; i++)
    // {
    //     int flag = 1;
    //     for (int j = 2; j < i; j++)
    //     {
            
    //         if (i%j==0)
    //         {
    //             flag =0;
    //             break;
    //         }
    //     }
    //     if (flag)
    //     {
    //         printf("%d ", i);
    //         count++;
    //     }
    // }
    // printf("\n%d", count);

    
// 3. 2 to 10 table






// 4. a = 1, b = 10
//  output : 1+2+3+4+5+6+7+8+9+10 =55

    // int a = 1;
    // int b = 10;
    // int store =0;
    // for (int i = a; i <= b; i++)
    // {
    //     if (i!=b) printf("%d + ", i);
    //     else printf("%d ", i);
        
    //     store += i;
    //     // printf("%d + %d", i, store);
    // }
    // printf(" = %d", store);



// 5. row = 5
/*
*
**
***
****
*****
*/

    // int row = 5;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf(" \n");
    // }
    

//6. row = 5
/*
    *
   **
  ***
 ****
*****
*/ 
    // int rows = 5;

    // for (int i = 1; i <= rows; ++i) 
    // {
    //     for (int j = 1; j <= rows - i; ++j)
    //  {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= i; ++k) {
    //         printf("*");
    //     }

    //     printf("\n");
    // }
    
    

//7.
/*
*****
****
***
**
*
*/

    // int row = 5;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row - i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


 //8. 
 /*
 *****
  ****
   ***
    **
     *
*/

    // int row = 5;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = i; k < row; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    
//9. row = 5
/*
     *
    * *
   * * *
  * * * *
 * * * * *
*/

    // int row = 5;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
        
    // }

// 10. row = 4;
/*
****
****
****
****
*/

    // int row = 4;

    // for (int i = 1; i <= row; i++)
    // {
    //     // printf("1\n");
    //     for (int j = 1; j <= row; j++)
    //     {
    //         printf("*");
    //     }
    //     printf(" \n");
    // }


// 11. row =4
/*
*****
*   *
*   *
*****
*/

    // int row = 5;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         if (i==0 || i==row-1 || j==0||j == row-1) 
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
   
    
    
// task 1.) Write c program
// Take character input from user 
// And check whether it is small letter or capital letters.
// Display appropriate msg accordingly.

    // char cha;
    // printf("enter alphabet: ");
    // scanf("%c", &cha);

    // if (cha>='A' && cha <= 'Z')
    // {
    //     printf("letter is capital: %c", cha);
    // }
    // else if (cha>= 'a' && cha <= 'z')
    // {
    //     printf("letter is small: %c", cha);
    // }
    // else printf("invalid");


/*
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 7 4 1
*/


    // int row = 5;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     int num =1;
    //     for (int k = 0; k <= i; k++)
    //     {
    //         printf("%d ", num);
    //         num = num * (i-k)/(k+1);
    //     }
        
        
    // printf("\n");
    // }
    
    
/*
     *
    ***
   *****
  *******
 *********
*/
    // int row = 5;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < row-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k <= i; k++)
    //     {
    //         printf("*");
    //     }
    //     for(int l=0; l<i ;l++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }


// print 100 prime no.

    // int count = 0;
    // int num = 1;

    // while (count<100)
    // {
    //     num++;
    //     int flag = 1;
    //     for (int i = 2; i < num; i++)
    //     {
    //         if (num%i==0)
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if (flag)
    //     {
    //         printf("%d ", num);
    //         count++;
    //     }
    // }
    // printf("\n%d ", count);
    

    //print 1 to 500 armstrong no.

    int count = 0;
    int num = 1;
    while (count<100)
    {
        num++;
        int sum = 0;
        int temp = num;
        while (temp>0)
        {
            int rem = temp%10;
            sum += rem*rem*rem;
            temp = temp/10;
        }
        if (sum==num)
        {
            printf("%d ", num);
            count++;
        }
    }

    
    




    




    
    return 0;
}




