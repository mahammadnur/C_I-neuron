//8. Write a program to print the cubes of first 10 natural numbers
#include<stdio.h>
int main()
{
    int number = 1;
    int count = 0;
    while(count <10)
    {
        printf("cube is %d\n",(number*number*number));
        count++;
        number++;
    }
return 0;
}
