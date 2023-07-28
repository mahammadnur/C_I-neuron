//3. Write a program to check whether a given number is positive, negative or zero.


#include<stdio.h>
int main(){
int number;
printf("Enter the NUmber ");
scanf("%f",&number);
if(number==0){
    printf("This number is Neither Positive nor Negetive ");
}
else{
    if(number >0)
    printf("%f is Positive Number .",number);
        else
        printf("%f is negetive number .",number);
}


return 0;}
