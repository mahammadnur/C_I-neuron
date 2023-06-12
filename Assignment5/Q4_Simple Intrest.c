// 4. Write a program to calculate the simple interest
#include<stdio.h>
int main(){
    int p,t,r; //p = principle amount ;t = Total Time ;r = Rate of Intrest 

    p = 1000;
    t = 15;
    r = 12;

    float i;        // i = Simple intrest 

        i = p*t*r/100;
            printf("Simple intrest is %g",i);
    return 0;
}