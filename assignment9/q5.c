// 4. Write a program to print the first 10 even natural numbers.
/*
#include<stdio.h>

int main(){

    int count;
    count =1;
    int number =2;
    while(int Count<=10)
{
    printf("%d",number);
    number = number +2;
    count++;

    }
       return 0;
}
*/
#include <stdio.h>

int main() {
    int count = 1;
    int number = 2;

    while (count <= 10) {
        printf("%d ", number);
        number = number + 2;
        count++;
    }

    return 0;
}
