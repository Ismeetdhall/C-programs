#include<stdio.h>
void main()
{

    int totalCms,totalIncs,cms,kms,miles,mts,in,feet;



   printf("Enter total number of cms");
   scanf("%d",&totalCms);

   kms = totalCms/100000;
   cms = totalCms%100000;
   mts = cms/1000;
   cms = cms%1000;

   totalIncs=totalCms/2.54;
   miles = totalIncs/63360;
   in = totalIncs%63360;
   feet = in/12;
   in = in%12;


   printf("\nkms:%d",kms);
   printf("\nmts:%d",mts);
   printf("\ncm:%d",cms);
   printf("\nmiles:%d",miles);
   printf("\nfeet:%d",feet);
   printf("\ninch:%d",in);


}




