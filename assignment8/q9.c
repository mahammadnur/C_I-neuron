
//9. Write a program to find the nature of roots of a quadratic equation.
#include<stdio.h>
int main()
{
        int a,b,c;
    printf((((("Enter the co efficent of A the Equation :")))));
    scanf("%d",&a);
        printf((((("Enter the co efficent of B the Equation :")))));
    scanf("%d",&b);

        printf((((("Enter the co efficent of C the Equation :")))));
    scanf("%d",&c);
            printf("co-efficent of the equation are : %d%d%d",a,b,c);
            if((b*b-4*a*c)>0)
            {
            printf("The quadratic equation has two real and distinct roots.\n");
            }
            else{
                    if((b*b-4*a*c)==0)
                    {
                    printf("The quadratic equation has two real and equal roots.\n");
                    }
                        else
                        {
                        printf("The quadratic equation has two imaginary roots.\n");
                        }
                    }

return 0;
}
