#include<stdio.h>
int main()
{
    int i, j, num,stor;
    for(i=1; i<500; i++)
    {
        num = i;
        j= 0;

        while (num>0)
        {
            stor = num%10;
            j += stor*stor*stor;
            num = num/10;
        }
        if (i==j)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
}