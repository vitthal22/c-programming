#include<stdio.h>
int main()
{
    /*1. arthmetic (+,-,*,/,%)
    2. relational  (<,>,==,!=,<=,>=)
    3. logical     (and &&, or ||, not !)
    4. assignment  (=, +=, -=, *=, /=)
    5. bitwise     (&, |, ^, <<, >>, ~) 
    6. unary
          a. increment(++)
               i. post increment
               ii. pre increment
          b. decrement(--)
               i. post decrement
               ii. pre decrement
    7. ternary operator
    */





   //Arithmetic
//    int n1=10;
//    int n2=2;
//    printf("addition:%d\n", (n1+n2));
//    printf("sub:%d\n", (n1-n2));
//    printf("multi:%d\n", (n1*n2));
//    printf("Q:%d\n", (n1/n2));
//    printf("R:%d\n", (n1%n2));
//    return 0;




      
      //Relational
    //   int n1 = 10;  (we can change value according to the cases to check in both the integer).
    //   int n2 = 20;
    //   printf("n1>n2:%d\n", (n1>n2));
    //    printf("n1<n2:%d\n", (n1<n2));
    //    printf("n1==n2:%d\n", (n1==n2));
    //    printf("n1!=n2:%d\n", (n1!=n2));
    //    printf("n1<=n2:%d\n", (n1<=n2));
    //    printf("n1>=n2:%d\n", (n1>=n2));
    //   return 0;





    //logical op
    //    int n1 = 10;
    //    int n2 = 20;
    //    printf("%d\n", ((n1==10) && (n2>50)));
    //    printf("%d\n", ((n1==100) || (n2>50)));
    //    printf("%d\n", !(n1==10));






    //Assigment
        // int a = 10;
        // int b = 5;

        //b = b+10;
        //b+= 10;
        // printf("%d\n", b);

        //b = b*10;
        // b*= 10;
        // printf("%d\n", b);
    




    //Bitwise
        // int a = 5;
        // int b = 7;
        // printf("%d\n", (a&b));
        // printf("%d\n", (a|b));
        // printf("%d\n", (a^b));
        // printf("%d\n", (a<<2));
        // printf("%d\n", (a>>2));
        // printf("%d\n", (~a)); // -(a+1)


        /*
                64  16  8   4   2   1
                        0   1   0   1 = 5
                        0   1   1   1 = 7
                        -----------------
                        0   1   0   1 = 5  (This is for and(&) bitwise operator)
                        ------------------
                        0   1   1   1 = 7  (This is for or(|) bitwise operator)
                        ------------------
                        0   0   1   0 = 2  (This is for xor(^) bitwise operator)
                        ------------------
                0   1   0   1   0   0 = 20  (This is for left shift(<<) bitwise operator)
                --------------------------
                0   0   0   0   0   1 = 1  (This is for right shift(>>) bitwise operator)
                --------------------------
        */
        




        // unery
        //1. increment
        // int a =10;
        // printf("%d\n", a++);  //(post increment)
        // printf("%d\n", a);
        // printf("%d\n", ++a);  //(pre increment)
        // printf("%d\n", a);
        //2. decrement
        // printf("%d\n", a--);  //(post decrement)
        // printf("%d\n", a);
        // printf("%d\n", --a);  //(pre decrement)
        // printf("%d\n", a);





        //ternary
        //(condition)?(exp1):(exp2);

        // int age = 18;  (if we take other age that is not fulfilling the condition then the output will be exp2)
        // (age == 18)?(printf("age is 18")):(printf("age is not 18")); //ternary operator



        //sizeof()
        // int a = 10;
        // printf("%d\n", sizeof(a));

        // printf("%d\n", (10+20/2));

        // int a = 10;
        // a = 20;
        // printf("%d\n", a);

        // const int age = 30;
        //age = 25;  (we canot update the value of age if we use 'const')
        // printf("%d\n", age);










        
}