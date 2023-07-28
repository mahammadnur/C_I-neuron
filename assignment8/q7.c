//7. Write a program which takes the length of the sides of a triangle as an input. Display
//whether the triangle is valid or not.
#include<stdio.h>
int main(){
int a,b,c;
    printf("Enter the Length of the Triangle :\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
        if((a+b>c) &&(b+c >a) && (a+c>b)){
    printf("This is a Triangle \n");
    }
    else
    printf("Triangle is not Valid");

return 0;
}
