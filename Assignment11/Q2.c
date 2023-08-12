// 2. Write a program to calculate sum of first N even natural numbers


#include<stdio.h>
int main()
{
    int num,sum =0,i=0;
    scanf("%d",&num);
    if(i %2 ==0)
        {
            for(i;i <=num;i++)
        {

        sum = sum + i;
    }
    }
    printf("SUM IS : %d ",sum);
}
