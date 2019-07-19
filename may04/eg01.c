#include<stdio.h>
void main()
{
     int qnty;
     float rate, amt , disRate , disAmt , payAmt;

     printf("Enter Qnty Sold");
     scanf("%d",&qnty);

     printf("Enter rate per unit");
     scanf("%f",&rate);

     amt = qnty * rate;

     if(amt>2000.00)
     {
         disRate = 35;
     }
     else if(amt>1500.00 && amt<=1999.99)
     {
         disRate = 20;
     }

     else if(amt>800.00 && amt<=1499.99)
     {
         disRate = 15;
     }

     else if(amt>400.00 && amt<=799.99)
     {
         disRate = 5;
     }

     else
     {
         disRate = 0;
     }

     disAmt = amt/100*disRate;
     payAmt = amt-disAmt;

     printf("\n Qnty Sold      :%d",qnty);
     printf("\n Rate           :%.2f",rate);
     printf("\n Amount         :%.2f",amt);
     printf("\n Discount @%.2f :%.2f",disRate, disAmt);
     printf("\n Payable Amount :%.2f",payAmt);




}
