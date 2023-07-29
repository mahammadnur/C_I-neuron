// 7. Write a program to print the squares of first 10 natural numbers
#include <stdio.h>

int main() {
int n=1;
int count = 1;

   while(count <=10)

   {
       printf("squre of %d is %d   \n",n,n*n);
       n+=2;
       count++;
   }
    return 0;
}
