// 7. Write a program to count digits in a given number

    #include<stdio.h>
    int main()
    {
        int n,count = 0;
        scanf("%d",&n);
        while(n != 0)
        {
            n = n/10;
            count++;

        }
        printf(" Count is :%d",count);


    return 0;
    }
