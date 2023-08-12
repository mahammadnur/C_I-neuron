// 10. Write a program to reverse a given number
    #include<stdio.h>
    int main()
    {
        int n,ld,rv=0,count=0;
        scanf("%d",&n);
         int num = n ;
        while(n!= 0)
        {
         ld = n %10;
         rv = (rv *10)+ld ;
            n = n/10;
            count++;

        }

        printf("%d  & Reverse is %d     \n count is :%d",num,rv,count);



    return 0;
    }
