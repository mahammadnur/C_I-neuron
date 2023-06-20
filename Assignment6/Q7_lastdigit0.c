// last digit zero 



#include<stdio.h>
int main(){
        int num;
        printf("Enter the  number : \n");
        scanf("%d ",&num);
        int last_digit = num % 10;
        printf("whole number  is : %d",num - last_digit);
    return 0;
}