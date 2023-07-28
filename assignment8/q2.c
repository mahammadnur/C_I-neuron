// Write a program to check whether a given 
// number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main(){
        
    int n;
    printf("ENter the Number :");
    scanf("%d",&n);

        if((n%7== 0)&&(n%3== 0)){
            printf("Number is Divisible by both 7 & 3 ");
        }
        else if((n % 7 ==0) && (n % 3 !=0)){
            printf("Then number is Only divisible by 7");
        }
        else if((n % 3 ==0) && (n % 7 !=0)){
            printf("The number is Only divisible by 3");
        }
        else{
            printf("The number is neither divisible by 7 nor 3");
        }
    return 0;
}