// Write a program to check whether a given 
// number is divisible by 2 and  divisible by 3.
#include<stdio.h>
int main(){
        
    int n;
    printf("ENter the Number :");
    scanf("%d",&n);
        if(n %2==0 && n%3==0)
        {
                printf("This Number is Divisible by both 2 & 3");
        }
        else{
            
            printf("This Number is not Divisible by both 2 & 3");
            }
                    /*
                     // Write a program to check whether a
                     / given number is divisible by 3 and divisible by 2.
                    #include<stdio.h>
                        int main(){
        
                        int n;
                        scanf("%d",&n);
                        if((n%2== 0) && (n%3== 0)){
                            printf("Number is correct ");
                        }
                        return 0;
                    }

           */
    return 0;
}