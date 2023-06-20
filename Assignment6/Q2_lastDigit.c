// 2. Write a program to find last digit of a given number 
#include<stdio.h>

int main(){
    int num;
     printf("Enter the number ");
     scanf("%d\n", &num);
     int lastd=num%10;
     printf("last Digit is  : %d ",lastd);
     

    return 0;
}