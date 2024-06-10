#include<stdio.h>
int main()
{
    char arr[] = {10,5,15};
    int size = 3;

    for(int step=0;step<size-1;step++)
    {
        for (int i = 0; i < size-step-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}