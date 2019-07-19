#include<stdio.h>
void main()
{
     int item,quan;
   float commision,payamt,amt,disamt,taxamt,rate,dis,tax;

   printf("enter quan");
   scanf("%d",&quan);

   printf("enter rate");
   scanf("%f",&rate);

   printf("enter dis");
   scanf("%f",&dis);

   printf("enter tax");
   scanf("%f",&tax);

   amt = quan*rate;
   disamt = amt/100*dis;
   taxamt = (amt-disamt)/100*tax;
   payamt = (amt-disamt)+taxamt;

   printf("\namt:%.2f",amt);
   printf("\nDiscount @ %.2f:%.2f",dis,disamt);
   printf("\nAmt after Discount:%.2f",amt-disamt);
   printf("\nTax @ %.2f :%.2f",tax , taxamt);
   printf("\nTotal Payable Amt:%.2f",payamt);


    printf("enter price of item");
    scanf("%d",&item);

    if(item>5000)
    {
        printf("commision is 20");
    }
     else if (item>=3500&&item<=4999)
     {
        printf("commision is 10");
    }
    else if (item>=1500&&item<=3999)
     {
        printf("commision is 5");
    }
    else
    {
        printf("commision=0");
    }

}
