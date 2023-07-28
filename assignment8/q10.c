//10.Write a C program to input marks of five subjects Physics, Chemistry, Biology,
//Mathematics and Computer. Calculate percentage and grade according to following:
//Percentage >= 90% : Grade A
//Percentage >= 80% : Grade B
//Percentage >= 70% : Grade C
//Percentage >= 60% : Grade D
//Percentage >= 40% : Grade E
//Percentage < 40% : Grade F
//

#include<stdio.h>
int main()
{
float c,cpp,java,python,web;
    printf("Enter The marks of subjects :\n C Programming,Java,Python,Data Structure in C, webDevlopment:\n\n");
    scanf("%f%f%f%f%%f\n",&c,&cpp,&java,&python,&web);
    float Average = (c+cpp+java+python+web)/5;
    printf("%f : is the Average of All subjects",Average);
    if(Average>=90)

            printf("Grade-A");

    else
    {
            if(Average>=80)
            printf("Grade - B");
            else{
                if(Average >= 70)
                printf("Grade - C");
                else{
                        if(Average >=60)
                        printf("Grade - D");
                        else{
                            if(Average >=50)
                            printf("Grade - E");
                            else
                            printf("FAIL");
                        }
                }
            }
    }

return 0;
}
