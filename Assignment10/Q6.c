//6. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main(){
int n;
    scanf("%d",&n);
    for(int i = 1; i<=n;i++) 
        // for(int i = 1;i <=n;i= i+2;)
    {
        if(i % 2 !=0)
        {

        printf("%d  ",i);
        }

    }


return 0;
}
