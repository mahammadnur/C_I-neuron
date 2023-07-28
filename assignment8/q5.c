// 5. Write a program to find greater among three numbers. If two or three numbers are
//identical and greatest among all then print it only once.
#include<stdio.h>
int main(){
int a,b,c;
scanf("%d\n%d\n%d",&a,&b,&c);
if((a>b)&& (a>c)){
    printf("Greater Number .",a);
}
else{
        if((b>a)&&(b>c)){
        printf("%d is grater number .",b);
        }
        else
        printf("%d is grater number ",c);
}




return 0;}
