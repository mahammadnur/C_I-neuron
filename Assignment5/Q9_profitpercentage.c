/* Write a program to calculate the profit percentage upon selling a product. Cost price
and selling price are given by the user. */
#include<stdio.h>
int main(){
        //(sp = seling price;cp = cost price; pp = percentage profit )
    int sp;     
    int cp;

    printf("enter cp :");
    scanf("%d",&cp);


    printf("enter sp ");
    scanf("%d",&sp);

    printf("%d is cost price \n%d  is selling price \n",cp,sp);

    int profit = sp-cp;
    printf("profit is : %d \n",profit);

    float  pp = profit*100.0/cp;
    printf("profit in percentage =  %g %% \n ",pp);



   /*  int cost_price,selling_price;


    scanf(" costprice :%d \n ",&cost_price);
    scanf(" selling price :%d \n ",&selling_price);
    printf("costpriceis : %d \n ",cost_price);
    printf("selling price is : %d \n ",selling_price); 
     */

    return 0;   
}