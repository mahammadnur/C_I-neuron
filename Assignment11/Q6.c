// 6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact = 1;
    scanf("%d",&n);
    for(i = 1;i <=n;i ++)
        {
            fact = fact * i;
        }
        printf("The Factorial is %d",fact);


    return 0;
}
