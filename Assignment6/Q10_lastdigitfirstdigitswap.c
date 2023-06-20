// transfer last digit ....
#include<stdio.h>
int main(){
    int num;
    printf("Enter the 3 digit number : \n");
        scanf("%d",&num);
    int last_digit= num/100 ; 
    
    num = num % 100 ;
    printf("%d ",num*10+last_digit);
    // code for last digit 


    return 0;
}