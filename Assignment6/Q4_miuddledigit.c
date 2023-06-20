// find middle digit of a 3 digit given number 
#include<stdio.h>
int main(){
        int num;
        scanf("%d\n",&num);
        printf("you have entered : %d",num);
        int middledigit = (num/10)%10;
        printf("middle digit : %d\n",middledigit);
        return 0;

}