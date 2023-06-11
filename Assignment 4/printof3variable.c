/* (7) Write a C program containing declaration of three variables (of type int, char and
float), also assign some values to them and print values of all three variables using
single printf(). */


#include<stdio.h>
int main(){
    int i;
    char j;
    float k;

        i = 10;
        j = 'J';
        k = 12.12;
            printf("value of integer  is :%d\n",i);
            printf("value of charcter is :%c \n",j);
            printf("value of  float   is :%f \n",k);
            /*   scanf("%d",i);
            scanf("%c",j);
            scanf("%f",k);    */

    return 0;
}