// Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
    int main()
    {
        int n,sum = 0,count=0;
        printf("Enter the number :\n");
        scanf("%d",&n);
        for(int i = 1;i<=100;i++)
        {
                if(i %2 !=0)
                {
                sum = sum + i;
                count ++;
                    if(count == n)
                    break;
                }
        }

        printf("Sum o f first odd natural number is : %d ",sum);
    return 0;
    }
