//10. Write a program to print the cubes of the first N natural numbers in reverse order.


#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    for(int i =n;i >=1;i--)
    {
        printf("%d is Cube of %d.\n",i*i*i,i);
    }





return 0;

}
