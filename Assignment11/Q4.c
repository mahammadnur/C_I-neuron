// 4. Write a program to calculate sum of squares of first N natural numbers
    #include<stdio.h>
    int main()
    {
        int n,i,sum = 0,count = 0;
        scanf("\n %d",&n);
        for(i = 1;i<=n;i++)
        {
           sum = sum + i*i;
           count ++;

        }
        printf("%d number of squre of Number is %d",count,sum);


    return 0;
    }
