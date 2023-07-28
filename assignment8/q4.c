//Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main(){
int year;
scanf("%d",&year);
if((year % 4 )|| (year % 100)&&(year % 400)){
printf("This is leap yar ");
}
else
printf("this is not a leap year ");

return 0;}
