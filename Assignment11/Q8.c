// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int n,i,count= 0;
    scanf("\n %d",&n);
        for(i = 1; i <= n;i++)
        {
            if(n % i == 0)
            {
                count ++;
            }


        }
        if(count == 2)
            printf("this is Prime number .");



    return 0;
}
