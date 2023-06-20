// write a programme to find 1st digit of given three digit number 


#include<stdio.h>
int main(){
        int num;
        printf("Enter the 3 digit number :");
        scanf("%d \n",&num);
        int first_digit = num /100;
        printf("first  digit is : %d",first_digit);
    return 0;
}