//10. Write a program to print the cubes of the first 10 natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int number = 10;
    int count = 1;
    while(count<=10)
    {
        printf("cube of %d is %d\n",number,(number*number*number));
        count++;
        number--;
    }
return 0;
}
