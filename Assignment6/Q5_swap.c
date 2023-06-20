// swap of 2 variable;

# include<stdio.h>
int main(){

    int a,b,c;

    scanf("%d%d",&a,&b);
    printf("a & b are :%d, %d \n",a,b);
    c = a; a = b ; b = c ;
    printf("now a& b values are : %d, %d \n",a,b); 
    return 0;

}