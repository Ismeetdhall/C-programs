
#include<stdio.h>

void main()
{

     int val1,val2,ans;
     char opt;
     opt='y';
     do
     {
         printf("\nEnter val1 : ");
         scanf("%d",&val1);
         printf("\nEnter val2 : ");
         scanf("%d",&val2);
         ans = val1+val2;
         printf("\n Ans = %d",ans);

         printf("\n--------------------\n");
         printf("\nPress E to exit...");
         fflush(stdin);
         scanf("%c",&opt);
     }
     while(opt!='e');
}
