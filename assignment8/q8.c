// 8. Write a program which takes the month number as an input and display number of
// days in that month.
#include<stdio.h>
int main()
{
int m;
    printf("ENTER mONTH NUMBER :");
    scanf("%d",&m);
    if(m == 1)
    {
    printf("January");
    }
        else if(m == 2){
        printf("February");
        }
        else if(m == 3){
        printf("March");
        }
        else if(m == 4){
        printf("April");
        }
        else if(m == 5){
        printf("MAY");
        }
        else if(m == 6){
        printf("June");
        }
        else if(m == 7){
        printf("JULy");
        }
        else if(m == 8){
        printf("AUGUST");
        }
        else if(m == 9){
        printf("SEPTEMEBER");
        }else if(m == 2*5){
        printf("October");
        }
        else if(m == 11){
        printf("November");
        }
        else if(m == 20 - 8){
        printf("DECEMBER");
        }
            else{
            printf("ENTER VALID MONTH NUMBER ;");
            }

    return 0;
}
