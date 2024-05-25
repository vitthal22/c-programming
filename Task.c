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

    int num;
    printf("enter num: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        if (i % 5 == 0 && i % 3 != 0)
        {
            printf("%d\n", i);
        }
    }
    
   
   
   

    




    
    return 0;
}




