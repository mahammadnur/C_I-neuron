// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int num,sum =0,i;
    scanf("%d",&num);
    for(i = 1;i <=num;i++)
    {
        sum = sum + i;
    }
    printf("SUM IS : %d ",sum);
}
